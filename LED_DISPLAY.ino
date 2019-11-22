//The second LED is all messed up because the wires are in the wrong place on the board.
const int ledA_1 = 2;
const int ledB_1 = 3;
const int ledC_1 = 4;
const int ledD_1 = 5;
const int ledE_1 = 6;
const int ledF_1 = 7;
const int ledG_1 = 8;
const int ledH_1 = 9;
const int ledH_2 = 10;
const int ledC_2 = 11;
const int ledD_2 = 12;
const int ledE_2 = A5;
const int ledA_2 = A4;
const int ledB_2 = A3;
const int ledF_2 = A2;
const int ledG_2 = A1;
char HIGH1 = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledA_1 ,OUTPUT);
  pinMode(ledB_1 ,OUTPUT);
  pinMode(ledC_1 ,OUTPUT);
  pinMode(ledD_1 ,OUTPUT);
  pinMode(ledE_1 ,OUTPUT);
  pinMode(ledF_1 ,OUTPUT);
  pinMode(ledG_1 ,OUTPUT);
  pinMode(ledH_1 ,OUTPUT);
  pinMode(ledA_2 ,OUTPUT);
  pinMode(ledC_2 ,OUTPUT);
  pinMode(ledD_2 ,OUTPUT);
  pinMode(ledE_2 ,OUTPUT);
  pinMode(ledH_2 ,OUTPUT);
  pinMode(ledB_2 ,OUTPUT);
  pinMode(ledF_2 ,OUTPUT);
  pinMode(ledG_2 ,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  Display(3,2);
}
void Display(int h)
{
  if(h == 1)
  {
    digitalWrite(ledH_1, HIGH1);
  }
  else if(h == 2)
  {
    digitalWrite(ledH_2, HIGH1);
  }
}
void Display(int r, int h)
{
  //r is the number you want and h is which led (1 or 2) you want to light up.
  if(r == 1 && h == 1)
  {
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
  }
  else if(r == 2 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledG_1, HIGH1);
    digitalWrite(ledE_1, HIGH1);
    digitalWrite(ledD_1, HIGH1);
  }
  else if(r == 3 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
    digitalWrite(ledD_1, HIGH1);
    digitalWrite(ledG_1, HIGH1);
  }
  else if(r == 4 && h == 1)
  {
    digitalWrite(ledF_1, HIGH1);
    digitalWrite(ledG_1, HIGH1);
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
  }
  else if(r == 5 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledF_1, HIGH1);
    digitalWrite(ledG_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
    digitalWrite(ledD_1, HIGH1);
  }
  else if(r == 6 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledH_1, HIGH1);
    digitalWrite(ledG_1, HIGH1);
    digitalWrite(ledD_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
    digitalWrite(ledE_1, HIGH1);
  }
  else if(r == 7 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledC_1, HIGH1); 
  }
  else if(r == 8 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
    digitalWrite(ledD_1, HIGH1);
    digitalWrite(ledE_1, HIGH1);
    digitalWrite(ledF_1, HIGH1);
    digitalWrite(ledG_1, HIGH1);
  }
  else if(r == 9 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
    digitalWrite(ledG_1, HIGH1);
    digitalWrite(ledF_1, HIGH1);
  }
  else if(r == 0 && h == 1)
  {
    digitalWrite(ledA_1, HIGH1);
    digitalWrite(ledB_1, HIGH1);
    digitalWrite(ledC_1, HIGH1);
    digitalWrite(ledD_1, HIGH1);
    digitalWrite(ledE_1, HIGH1);
    digitalWrite(ledF_1, HIGH1);
  }
  else if(r == 1 && h == 2)
  {
    digitalWrite(ledB_2,HIGH1);
    digitalWrite(ledC_2, HIGH1);
  }
  else if(r == 2 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledB_2, HIGH1);
    digitalWrite(ledG_2, HIGH1);
    digitalWrite(ledE_2, HIGH1);
    digitalWrite(ledD_2, HIGH1);
  }
  else if(r == 3 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledB_2, HIGH1);
    digitalWrite(ledC_2, HIGH1);
    digitalWrite(ledD_2, HIGH1);
    digitalWrite(ledG_2, HIGH1);
  }
  else if(r == 4 && h == 2)
  {
    digitalWrite(ledF_2, HIGH1);
    digitalWrite(ledG_2, HIGH1);
    digitalWrite(ledB_2, HIGH1);
    digitalWrite(ledC_2, HIGH1);
  }
  else if(r == 5 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledF_2, HIGH1);
    digitalWrite(ledG_2, HIGH1);
    digitalWrite(ledC_2, HIGH1);
    digitalWrite(ledD_2, HIGH1);
  }
  else if(r == 6 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledH_2, HIGH1);
    digitalWrite(ledG_2, HIGH1);
    digitalWrite(ledD_2, HIGH1);
    digitalWrite(ledC_2, HIGH1);
    digitalWrite(ledE_2, HIGH1);
  }
  else if(r == 7 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledB_2, HIGH1);
    digitalWrite(ledC_2, HIGH1); 
  }
  else if(r == 8 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledB_2, HIGH1);
    digitalWrite(ledC_2, HIGH1);
    digitalWrite(ledD_2, HIGH1);
    digitalWrite(ledE_2, HIGH1);
    digitalWrite(ledF_2, HIGH1);
    digitalWrite(ledG_2, HIGH1);
  }
  else if(r == 9 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledB_2, HIGH1);
    digitalWrite(ledC_2, HIGH1);
    digitalWrite(ledG_2, HIGH1);
    digitalWrite(ledF_2, HIGH1);
  }
  else if(r == 0 && h == 2)
  {
    digitalWrite(ledA_2, HIGH1);
    digitalWrite(ledB_2, HIGH1);
    digitalWrite(ledC_2, HIGH1);
    digitalWrite(ledD_2, HIGH1);
    digitalWrite(ledE_2, HIGH1);
    digitalWrite(ledF_2, HIGH1);
  }
}
