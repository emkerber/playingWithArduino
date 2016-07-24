int bargraph = 5;

void setup() {
  Serial.begin(9600);
  pinMode(bargraph, OUTPUT);
}

void loop() {
  analogWrite(bargraph, 1023);
}
