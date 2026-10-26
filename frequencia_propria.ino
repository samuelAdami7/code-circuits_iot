
#define LEDVERDE 7
#define LEDVERMELHO 2
#define LEDAMARELO 4
#define LEDBRANCO 1
void setup()
{
  pinMode(LEDBRANCO, OUTPUT);
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
}

void loop()
{
  digitalWrite(LEDBRANCO, 1);
  digitalWrite(LEDVERDE, 1);
  delay(1000); 
  digitalWrite(LEDBRANCO, 0);
  digitalWrite(LEDVERDE, 0);
  delay(1000); 
  
  digitalWrite(LEDAMARELO, 1);
  digitalWrite(LEDVERMELHO, 1);
  delay(1000); 
  digitalWrite(LEDAMARELO, 0);
  digitalWrite(LEDVERMELHO, 0);
  delay(1000); 
  
  digitalWrite(LEDAMARELO, 1);
  digitalWrite(LEDVERMELHO, 1);
  delay(1000); 
  digitalWrite(LEDAMARELO, 0);
  digitalWrite(LEDVERMELHO, 0);
  delay(1000); 
  
  digitalWrite(LEDBRANCO, 1);
  digitalWrite(LEDVERDE, 1);
  delay(1000); 
  digitalWrite(LEDBRANCO, 0);
  digitalWrite(LEDVERDE, 0);
  delay(1000); 
}