int outpin = 8;
byte dataToSend = B0101010;
int dly = 100;
int dly2 = 500;

void setup() {
  pinMode(outpin, OUTPUT);
}

void loop() {
  digitalWrite(outpin, 0);
  delay(dly);
  for (int i = 0; i < 7; i++) {
    if (bitRead(dataToSend, i) == 1) {
      digitalWrite(outpin, HIGH);
    } else {
      digitalWrite(outpin, LOW);
    }
    delay(100);
  }
  digitalWrite(outpin, 1);
  delay(dly2);
}
