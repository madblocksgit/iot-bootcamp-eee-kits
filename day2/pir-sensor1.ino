int pir=2;

void setup() {
  pinMode(pir,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(pir)==1) {
    Serial.println("Person Detected");
  } else {
    Serial.println("No Person Detected");
  }
}
