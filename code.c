String st;
int num;

void setup() {

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

}

void loop() {

while(Serial.available()) { //เปิดใช้งานการรับค่าจาก Serial
  st = Serial.readString();// read the incoming data as string
  if(st.substring(0,1) == "a"){
    String stToNum = st.substring(1);
    num = stToNum.toInt();
    Serial.println("Stirng : "+st.substring(0,1));
    Serial.print("Number :");
    Serial.println(num);
    Serial.print("Send paramiter to func int : ");
    Serial.println(sum(num));
  }else{
    Serial.println("Not read");
  }
}

}

int sum(int number){
  int result;
  result = number * number;
  return result;
}
