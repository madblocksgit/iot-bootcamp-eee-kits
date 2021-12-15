int led=D0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  Serial.println("ON - LED ON");
  Serial.println("OFF - LED OFF");
  while(!Serial.available());
  String s=Serial.readString();
  if(s=="ON" || s=="on") {
    digitalWrite(led,0);
  } else if(s=="OFF" || s=="off") {
    digitalWrite(led,1);
  }
}
