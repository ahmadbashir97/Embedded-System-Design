int Button_1 = 4;
int Button_2 = 5;
int Button_3 = 6;


int countA=0,countB=0,countC=0,countD=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(Button_1, INPUT);
  pinMode(Button_2, INPUT);
  pinMode(Button_3, INPUT);
  
}

void loop() 
{ 
  if(digitalRead(Button_1) != 0)
  {
    countA++;
    printcount();
  }
  else if(digitalRead(Button_2) != 0)
  {
    countB++;
    printcount();
  }
  else if(digitalRead(Button_3) != 0)
  {
    countC++;
    printcount();
  }
  
}

void printcount()
{
  Serial.print("A = ");
  Serial.print(countA);

  Serial.print(", B = ");
  Serial.print(countB);

  Serial.print(", C = ");
  Serial.print(countC);

  Serial.print('\n');
  delay(300);
}
