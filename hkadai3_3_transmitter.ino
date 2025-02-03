int outpin = 8;
byte data = B0111011;
void setup() {
  pinMode(outpin, OUTPUT);
  digitalWrite(outpin, HIGH);
  }
  void loop() {
    digitalWrite(outpin, 0);
    delay(100);
    for (int i = 0; i < 7; i++) {
      digitalWrite(outpin, bitRead(data, i));
      delay(100);
      }
      digitalWrite(outpin, 1);
      delay(500);
     }