/*
---------------------------------------------------------------------------------
    Autores: Gabriel Amaral & Samuel Da cruz 
    Atividade: Efeito Acumulo com LEDs

    Descrição:
    Um sistema em arduino em que ele faz um efeito par com LEDs em que liga o LED
    de uma ponta e da outra e depois liga os do meio 

    Funcionamento:
    O programa liga um led de uma ponta e liga tambem o da outra ponta e depois os desliga
    e liga os dois do meio 
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
  digitalWrite (LEDBRANCO, HIGH);
  delay (1000);
 
  digitalWrite(LEDVERDE, LOW);
  delay(0001);
 
  digitalWrite (LEDBRANCO, LOW);
  delay (0001);
 
  digitalWrite (LEDAMARELO, HIGH);  
  digitalWrite (LEDVERMELHO, HIGH);
  delay (1000);

  digitalWrite(LEDAMARELO, LOW);
  delay (0001);
 
  digitalWrite (LEDVERMELHO, LOW);
  delay (0001);
 
}