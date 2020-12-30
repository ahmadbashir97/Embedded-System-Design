int Led1 = 4;
int Led2 = 5;
int Led3 = 6;
int Led4 = 7;
int Led5 = 8; //initialize the pin
int Led6 = 9;
int Led7 = 10;
int Led8 = 11;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT); // all LED as the output
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  pinMode(Led8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  blink(Led1, 781, 515);
  blink(Led2, 2014, 1348);
  blink(Led3, 343, 573);
  blink(Led4, 678, 1839);
  blink(Led5, 342, 534);  // set the time for LED to blink within the time given
  blink(Led6, 1478, 326);
  blink(Led7, 1859, 351);
  blink(Led8, 777, 888);
}


void blink(int pin, int OnDelay, int OffDelay)
{
  digitalWrite(pin, HIGH);
  delay(OnDelay);             // LED on and off
  digitalWrite(pin, LOW);
  delay(OffDelay);
}
