void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH)
  {
    Serial.println("HIGH");
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else
    digitalWrite(LED_BUILTIN, LOW);
}
