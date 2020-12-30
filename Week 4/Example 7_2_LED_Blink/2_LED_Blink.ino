int led_red = 10;
int led_green= 9;

void setup() {
  
  Serial.begin(9600);

  pinMode(led_red, OUTPUT); //Output from Red Light
  pinMode(led_green, OUTPUT); //Output from Green Light

}

void loop() {
  
  digitalWrite(led_red, HIGH); //red on
  delay(750);
  digitalWrite(led_red, LOW); //red off
  delay(350);
  digitalWrite(led_green, HIGH); //green on
  delay(400);
  digitalWrite(led_green, LOW); //green off
  delay(600);
}
