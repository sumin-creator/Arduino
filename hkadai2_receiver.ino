int dly = 500, stat;
int inpin = 1;
int data[8];
void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = 0;
  stat = analogRead(inpin);
  delay(dly);
  if(stat < 30) {
  
    for(int i = 0; i < 7; i++) {
      value = analogRead(inpin);
      if(value < 40) {
        Serial.print(0);
        delay(dly);
      }
      else if (value > 80) {
        Serial.print(2);
        delay(dly);
      }
      else {
       Serial.print(1);
        delay(dly);
      }
    }
    Serial.println();
  }
}
