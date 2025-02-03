int dly = 100, stat;
int inpin = 1;
int data[8];
void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = 0;
  stat = analogRead(inpin);
  delay(dly);
  if(stat < 50) {
    for(int i = 0; i < 7; i++) {
      value = analogRead(inpin);
      data[i] = value;
      if(data[6-i] > 30) {
        Serial.print(1);
        delay(dly);
      }
      else {
        Serial.print(0);
        delay(dly);
      }
    }
    Serial.println();
  }
}
