int led = 6;
int sensor = 7;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  int movimento = digitalRead(sensor);

  if (movimento == HIGH) {
    digitalWrite(led, HIGH);
    delay(5000);
  } else {
    digitalWrite(led, LOW);
  }
}