
int outpin = 8;
byte data = B0100001;
int dly = 100;
int dly2 = 500;
void setup() {
  pinMode(outpin, OUTPUT);
  digitalWrite(outpin, HIGH);
  }
  void loop() {
    digitalWrite(outpin, 0);
    delay(dly);
    for (int i = 0; i < 7; i++) {
      digitalWrite(outpin, bitRead(data, i));
      delay(dly);
      }
      digitalWrite(outpin, 1);
      delay(dly2);
     }
