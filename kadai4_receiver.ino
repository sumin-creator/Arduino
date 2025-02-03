int inpin = 9; 
int dly = 100; 
int stat;
int data[7];
char pp;
void setup() {
  pinMode(inpin, INPUT);
  Serial.begin(9600);
  }
void loop() {
  stat = digitalRead(inpin);
  Serial.println(stat);
  delay(dly);
  if (stat == 0) { 
    int a = 0;
    for (int i = 0; i < 7; i++) {
      data[i] = digitalRead(inpin);
      delay(dly);
      
    }
    
    for (int i = 0; i < 7; i++) {
      a |= (data[i] << i);
    }
    
    Serial.print(a);
    Serial.println();
    pp = a;
    Serial.println(pp);
  }
}
