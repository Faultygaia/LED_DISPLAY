int ledA1 = 2;
int ledB1 = 3;
int ledC1 = 4;
int ledD1 = 5;
int ledE1 = 6;
int ledF1 = 7;
int ledG1 = 8;
int ledH1 = 9;
int ledH2 = 10;
int ledC2 = 11;
int ledD2 = 12;
int ledE2 = A5;
int ledA2 = A4;
int ledB2 = A3;
int ledF2 = A2;
int ledG2 = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledA1 ,OUTPUT);
  pinMode(ledB1 ,OUTPUT);
  pinMode(ledC1 ,OUTPUT);
  pinMode(ledD1 ,OUTPUT);
  pinMode(ledE1 ,OUTPUT);
  pinMode(ledF1 ,OUTPUT);
  pinMode(ledG1 ,OUTPUT);
  pinMode(ledH1 ,OUTPUT);
  pinMode(ledA2 ,OUTPUT);
  pinMode(ledC2 ,OUTPUT);
  pinMode(ledD2 ,OUTPUT);
  pinMode(ledE2 ,OUTPUT);
  pinMode(ledH2 ,OUTPUT);
  pinMode(ledB2 ,OUTPUT);
  pinMode(ledF2 ,OUTPUT);
  pinMode(ledG2 ,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  Display(1,1);
}
void Display(int r, int h)
{
  if(r == 1 && h == 1)
  {
    digitalWrite(ledB1, HIGH);
    digitalWrite(ledC1, HIGH);
  }
  if(r == 2 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledB1. HIGH);
    digitalWrite(ledG1, HIGH);
    digitalWrite(ledE1, HIGH);
    digitalWrite(ledD1, HIGH);
  }
  if(r == 3 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledB1, HIGH);
    digitalWrite(ledC1, HIGH);
    digitalWrite(ledD1, HIGH);
    digitalWrite(ledG1, HIGH);
  }
  if(r == 4 && h == 1)
  {
    digitalWrite(ledF1, HIGH);
    digitalWrite(ledG1, HIGH);
    digitalWrite(ledB1, HIGH);
    digitalWrite(ledC1, HIGH);
  }
  if(r == 5 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledF1, HIGH);
    digitalWrite(ledG1, HIGH);
    digitalWrite(ledC1, HIGH);
    digitalWrite(ledD1, HIGH);
  }
  if(r == 6 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledH1, HIGH);
    digitalWrite(ledG1, HIGH);
    digitalWrite(ledD1, HIGH);
    digitalWrite(ledC1, HIGH);
    digitalWrite(ledE1, HIGH);
  }
  if(r == 7 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledB1, HIGH);
    digitalWrite(ledC1, HIGH); 
  }
  if(r == 8 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledB1, HIGH);
    digitalWrite(ledC1, HIGH);
    digitalWrite(ledD1, HIGH);
    digitalWrite(ledE1, HIGH);
    digitalWrite(ledF1, HIGH);
    digitalWrite(ledG1, HIGH);
  }
  if(r == 9 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledB1, HIGH);
    digitalWrite(ledC1, HIGH);
    digitalWrite(ledG1, HIGH);
    digitalWrite(ledF1, HIGH);
  }
  if(r == 0 && h == 1)
  {
    digitalWrite(ledA1, HIGH);
    digitalWrite(ledB1, HIGH);
    digitalWrite(ledC1, HIGH);
    digitalWrite(ledD1, HIGH);
    digitalWrite(ledE1, HIGH);
    digitalWrite(ledF1, HIGH);
  }
}
