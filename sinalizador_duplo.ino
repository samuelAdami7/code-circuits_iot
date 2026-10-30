#define ledVerde 13
#define ledVermelho 2
#define BTN1 4
#define BTN2 12


void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);

  digitalWrite(ledVerde, LOW);
  
}

void loop()
{
  int estado_btn1 = digitalRead(BTN1);
  int estado_btn2 = digitalRead(BTN2);
  
  
  if(estado_btn1 == LOW){
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(2000);
    digitalWrite(ledVerde, LOW);
  } 
  
  if(estado_btn2 == LOW){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    delay(2000);
    digitalWrite(ledVermelho, LOW);
  }
  
  for(int i = 0; i < 4; i++)
  {
    if(estado_btn1 == LOW && estado_btn2 == LOW){
      digitalWrite(ledVerde, HIGH);
      digitalWrite(ledVermelho, HIGH);
      delay(500); 
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelho, LOW);
      delay(500); 
    }
  }
}