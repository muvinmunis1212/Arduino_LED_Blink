void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 5; i++) {
    digitalWrite(8, HIGH);
    delay(500);  // Blink ON time
    digitalWrite(8, LOW);
    delay(500);  // Blink OFF time
  }

  // Break the loop after blinking 5 times
  while (true) {
    // Do nothing or add any other code if needed
  }
}
