const int inputPin = 2;
char a = 0x31;
char b = 0x30;
int value = 0;
bool cambia  = false;
int valueAnt = 0;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
}

void loop() {
  value = digitalRead(inputPin);  //lectura digital de pin

  //mandar mensaje a puerto serie en función del valor leido
  if (value == HIGH) {
    if (valueAnt != value)
    {
      Serial.write(a);
      valueAnt = value;
    }
    
  }
  if (value == LOW)
  {
      if (valueAnt != value)
    {
      Serial.write(b);
      valueAnt = value;
    }
  }


}
