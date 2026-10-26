/*
---------------------------------------------------------------------------------
    Autores: Gabriel Amaral & Samuel Da cruz 
    Atividade: Efeito Acumulo com LEDs

    Descrição:
    Um sistema em arduino em que ele faz um efeito de acumulo no qual vai ligando um led
    por vez ate todos estarem acesos e depois desliga todos  

    Funcionamento:
    O programa liga um led por vez indo do verde ao branco ligando um por vez em que vai
    ligando todos os LEDs ate quando todos estiverem ligados dai apaga todos juntos
---------------------------------------------------------------------------------
*/
#define LEDVERDE 7
#define LEDAMARELO 4
#define LEDVERMELHO 2
#define LEDBRANCO 1

void setup()
{
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDBRANCO, OUTPUT);
}

void loop()
{
   
  digitalWrite(LEDVERDE, HIGH);
  delay(1000);
 
  digitalWrite (LEDAMARELO, HIGH);
  delay (1000);
 
  digitalWrite (LEDVERMELHO, HIGH);
  delay (1000);
 
  digitalWrite (LEDBRANCO, HIGH);
  delay (1000);
   
  digitalWrite(LEDVERDE, LOW);
  delay(0001);
 
  digitalWrite(LEDAMARELO, LOW);
  delay (0001);
 
  digitalWrite (LEDVERMELHO, LOW);
  delay (0001);
 
  digitalWrite (LEDBRANCO, LOW);
  delay (0001);

}