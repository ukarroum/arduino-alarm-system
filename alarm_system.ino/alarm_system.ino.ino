void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH)
  {
    Serial.println("HIGH");
    digitalWrite(LED_BUILTIN, HIGH);
    tone(9, 1000);
  }
  else
    digitalWrite(LED_BUILTIN, LOW);
    noTone(9); 
}
