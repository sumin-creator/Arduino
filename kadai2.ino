int i=0;

void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char keyinput;
  keyinput = Serial.read();

  if (keyinput != -1) {
  switch (keyinput) {
    case '+':
      if (i <= 255) {
        i++;
        analogWrite(11, i);
      }
      break;
    case '-':
      if (i >= 0) {
        i--;
        analogWrite(11, i);
      }
      break;
  }
}
}
