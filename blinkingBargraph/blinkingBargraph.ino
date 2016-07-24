int bargraph = 5;

void setup() {
  
  Serial.begin(9600);
  pinMode(bargraph, OUTPUT);

}

void loop() {

  analogWrite(bargraph, 1023);
  delay(1000);
  analogWrite(bargraph, 0);
  delay(200);
  analogWrite(bargraph, 1023);

}
