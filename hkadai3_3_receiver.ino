int stat, data[8];
int value = 0, dly = 100;

void setup() {
  Serial.begin(9600);
  press(); 
}

void press() {
  int sum = 0;
  int sample = 100;
  for(int i = 0; i < sample; i++) {
    sum += analogRead(1);
    delay(10);
  }
  value = sum / sample;
}

void loop() {
   int i = 0;
   int value1;
   stat = analogRead(1);
   delay(dly);
   if (stat < value - 20) {
    for(int i = 0; i < 7; i++) {
      value1 = analogRead(1);
      data[i] = value1;
      
      if(data[6-i] > value) {
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

  
