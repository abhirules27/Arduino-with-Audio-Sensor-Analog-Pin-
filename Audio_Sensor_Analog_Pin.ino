int MicPin = A0;
int Led = 13;
int AO1 = 0;
int AO2 = 0;

void setup() {
  pinMode(Led, OUTPUT);
  pinMode(MicPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  AO1 = analogRead(MicPin);
  Serial.println(AO1);
  delay(1000);
  AO2 = analogRead(MicPin);
  Serial.println(AO2);

  if(AO2-AO1>0){
    digitalWrite(Led,HIGH);
    delay(1000);
    digitalWrite(Led,LOW);
  }
}

