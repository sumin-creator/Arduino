void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int value;
  value = analogRead(1);
  if(value<50){
    analogWrite(11,150);
  }
  else{
    analogWrite(11,0);
    }
}
