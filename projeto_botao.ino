/*---------------------------------------------------------------------------------
    Autores: Samuel Da cruz 
    Atividade: Efeito Acumulo com LEDs

    Descrição:
    Um sistema em arduino em que ele faz um efeito de acumulo no qual vai ligando um led
    por vez ate todos estarem acesos e depois desliga todos  

    Funcionamento:
    O programa liga um led por vez indo do verde ao branco ligando um por vez em que vai
    ligando todos os LEDs ate quando todos estiverem ligados dai apaga todos juntos
---------------------------------------------------------------------------------
*/

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