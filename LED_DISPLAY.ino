//The second LED is all messed up because the wires are in the wrong place on the board.
int ledA_1 = 2;
int ledZ = 3;
int ledC_1 = 4;
int ledD_1 = 5;
int ledE_1 = 6;
int ledF_1 = 7;
int ledG_1 = 8;
int ledH_1 = 9;
int ledH_2 = 10;
int ledC_2 = 11;
int ledD_2 = 12;
int ledE_2 = A5;
int ledA_2 = A4;
int ledB_2 = A3;
int ledF_2 = A2;
int ledG_2 = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledA_1 ,OUTPUT);
  pinMode(ledZ ,OUTPUT);
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
  Display(1,1);
}
void Display(int r, int h)
{
  //r is the number you want and h is which led (1 or 2) you want to light up.
  if(r == 1 && h == 1)
  {
    digitalWrite(ledZ,HIGH);
    digitalWrite(ledC_1, HIGH);
  }
  if(r == 2 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledZ. HIGH);
    digitalWrite(ledG_1, HIGH);
    digitalWrite(ledE_1, HIGH);
    digitalWrite(ledD_1, HIGH);
  }
  if(r == 3 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledZ, HIGH);
    digitalWrite(ledC_1, HIGH);
    digitalWrite(ledD_1, HIGH);
    digitalWrite(ledG_1, HIGH);
  }
  if(r == 4 && h == 1)
  {
    digitalWrite(ledF_1, HIGH);
    digitalWrite(ledG_1, HIGH);
    digitalWrite(ledZ, HIGH);
    digitalWrite(ledC_1, HIGH);
  }
  if(r == 5 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledF_1, HIGH);
    digitalWrite(ledG_1, HIGH);
    digitalWrite(ledC_1, HIGH);
    digitalWrite(ledD_1, HIGH);
  }
  if(r == 6 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledH_1, HIGH);
    digitalWrite(ledG_1, HIGH);
    digitalWrite(ledD_1, HIGH);
    digitalWrite(ledC_1, HIGH);
    digitalWrite(ledE_1, HIGH);
  }
  if(r == 7 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledZ, HIGH);
    digitalWrite(ledC_1, HIGH); 
  }
  if(r == 8 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledZ, HIGH);
    digitalWrite(ledC_1, HIGH);
    digitalWrite(ledD_1, HIGH);
    digitalWrite(ledE_1, HIGH);
    digitalWrite(ledF_1, HIGH);
    digitalWrite(ledG_1, HIGH);
  }
  if(r == 9 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledZ, HIGH);
    digitalWrite(ledC_1, HIGH);
    digitalWrite(ledG_1, HIGH);
    digitalWrite(ledF_1, HIGH);
  }
  if(r == 0 && h == 1)
  {
    digitalWrite(ledA_1, HIGH);
    digitalWrite(ledZ, HIGH);
    digitalWrite(ledC_1, HIGH);
    digitalWrite(ledD_1, HIGH);
    digitalWrite(ledE_1, HIGH);
    digitalWrite(ledF_1, HIGH);
  }
}
