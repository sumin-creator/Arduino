int outpin = 8;
char pp[9] = "ICT23024";
int dly = 100;
int dly2 = 500;

void setup() {
  pinMode(outpin, OUTPUT);
  digitalWrite(outpin, HIGH);
}

void loop() {
  digitalWrite(outpin, 0);
  delay(dly);
for (int i = 0; i < 8; i++) {
  char currentChar = pp[i];
  for (int j = 0; j < 7; j++) {
    digitalWrite(outpin, bitRead(currentChar, j));
    delay(dly);
  }
}
  digitalWrite(outpin, 1);
  delay(dly2);
}
