// C++ code
//
#define LED 12 
#define BTN 2
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop(){
 int estado_btn = digitalRead(BTN);
  
  if(estado_btn == 0){
    digitalWrite(LED, 1);
  }else{
	digitalWrite(LED, 0);
  }  
}