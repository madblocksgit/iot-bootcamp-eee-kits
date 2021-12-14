int light=A5;

void setup() {
  Serial.begin(9600);
  pinMode(light,INPUT);
}

void loop() {
  int m=analogRead(light);
  if(m>500) {
    Serial.println("No Light");
  } else {
    Serial.println("Light");
  }
}
