int pir=2;
void setup() {
 pinMode(pir,INPUT);
 Serial.begin(9600);
}

void loop() {
 int m=digitalRead(pir);
 Serial.println(m);
}
