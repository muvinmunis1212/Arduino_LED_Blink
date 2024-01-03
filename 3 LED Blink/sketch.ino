int red = 13;
int blue = 12;
int green = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  delay(300);

  digitalWrite(red, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(green, LOW);
  delay(300);

  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);
  delay(300);
  }

