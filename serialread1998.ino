void setup() {
  Serial.begin(9600);
}

void loop() {
  String a;
  if(Serial.available()>0){
    a=Serial.readString();
    a.trim();
    Serial.println(a);
    if(a=="apple")
    {
      Serial.println("SUCCESS");
      }
    }
    if(Serial.available()<=0){}
}
