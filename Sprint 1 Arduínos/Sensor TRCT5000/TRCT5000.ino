int sensor = 0;
void setup() {
  pinMode(7, INPUT);// pino ligado ao fototransistor
  Serial.begin(9600);
}

void loop() {
  sensor = digitalRead(7);
  if (sensor == 0)
  {
    Serial.println("1");
  }
  else
  {
    Serial.println("0");
  }
}
