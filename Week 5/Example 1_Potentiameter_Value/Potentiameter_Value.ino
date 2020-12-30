<<<<<<< HEAD
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (;;)
  {
    int value = analogRead(A0);
    Serial.println(value);
  }
}
=======
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (;;)
  {
    int value = analogRead(A0);
    Serial.println(value);
  }
}
>>>>>>> 6beb9f88cb52338ac94b2e41d2bf55908a95cebd
