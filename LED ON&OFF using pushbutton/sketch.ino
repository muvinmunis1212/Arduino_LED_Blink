int red = 13;
int green = 8;
int button = 12;

int buttonstate = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate = digitalRead(button);

 if (buttonstate == 1)
 {
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
 }
 else if (buttonstate == 0)
  {
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
 }
  }

