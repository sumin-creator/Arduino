int inpin = 9; 
int dly = 100; 
int stat;
int data[8][7];
char receivedData[8] = {0};

void setup() {
  pinMode(inpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  stat = digitalRead(inpin);
  Serial.println(stat);
  delay(dly);
  
  if (stat == 0) { 
    for (int i = 0; i < 8; i++) {
      for(int j = 0; j < 7; j++) {
        data[i][j] = digitalRead(inpin);
        delay(dly);
      }
    }
    for (int i = 0; i < 8; i++) {
      char byteValue = 0; 
      for (int j = 0; j < 7; j++) {
        bitWrite(byteValue, j, data[i][j]);
      }
      receivedData[i] = byteValue;
    }
    for (int i = 0; i < 8; i++) {
      Serial.print(receivedData[i]);
    }
    Serial.println();
  }
}
