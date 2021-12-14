int light=A5;

void setup() {
  Serial.begin(9600);
  pinMode(light,INPUT);
}

void loop() {
  int m=analogRead(light);
  Serial.println(m);
}
