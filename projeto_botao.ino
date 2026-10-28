/*---------------------------------------------------------------------------------
    Autores: Samuel Da cruz 
    Atividade: Projeto com Botão

    Descrição:
    Um sistema em arduino em que quando se segura o botao o led fica ligado e quando solta
    o led desliga  

    Funcionamento:
    O programa liga o led sempre que o botao estar segurando e quando solta desliga o botão
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