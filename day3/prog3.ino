int ir=D0;

void setup() {
  pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(ir)==0) {
    Serial.println("Person Detected");
  } else {
    Serial.println("Person Not Detected");
  }
}
