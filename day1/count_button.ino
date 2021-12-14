int count=0;
int button=3;
int led=2;

void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int m=digitalRead(button);
  if(m==0) {
    while(m==0);
    count++;
    delay(100);
    Serial.print("Count: ");
    Serial.println(count);
  }
}
