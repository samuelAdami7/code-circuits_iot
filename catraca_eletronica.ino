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

  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, LOW);
  
}

void loop()
{
  int estado_btn1 = digitalRead(BTN1);
  int estado_btn2 = digitalRead(BTN2);
  
  
  if(estado_btn1 == LOW){
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(5000);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
    
  } 
    if(estado_btn2 == LOW){
      for(int i = 0; i < 9; i++){
        digitalWrite(ledVerde, LOW);
      	digitalWrite(ledVermelho, HIGH);
      	delay(500); 
      	digitalWrite(ledVermelho, LOW);
      	delay(500);
  	} 
  }
}