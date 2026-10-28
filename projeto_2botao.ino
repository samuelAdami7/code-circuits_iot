#define LED_VERDE 12
#define LED_AMARELO 13
#define BTN1 2
#define BTN2 4

void setup()
{
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
}

    void loop(){
        int estado_btn1 = digitalRead(BTN1);
        int estado_btn2 = digitalRead(BTN2);
  
        if(estado_btn1 == 0){
            digitalWrite(LED_AMARELO, 1);
            digitalWrite(LED_VERDE, 1);
            delay(2000);
      
            digitalWrite(LED_VERDE, 0);
            delay(3000);

        }else{
            digitalWrite(LED_VERDE, 0);
            digitalWrite(LED_AMARELO, 0);
    
     }
  
    if(estado_btn2 == 0){
        for(int i = 0; i < 7; i++){
		    digitalWrite(LED_VERDE, 1);
            delay(500);
            digitalWrite(LED_VERDE, 0);
      	    delay(500);
    }
  }
}