int outpin = 11;
char pp[8] = "0120122";
int dly = 500;
int dly2 = 500;

void setup() {
}

void loop() {
  digitalWrite(outpin, 0);
  delay(dly);
  for (int i = 0; i < 7; i++) {
    if (pp[i] == '2') {
      analogWrite(outpin, 255);
    } else if (pp[i] == '0'){
      analogWrite(outpin, 0);
    }else if (pp[i] == '1'){
      analogWrite(outpin, 50);
    }
    delay(500);
  }
  digitalWrite(outpin, 1);
delay(dly2);
}
