// C++ code
//
#define ledVermelho2 2
#define ledAmarelo7 7
#define ledVerde12 12
#define ledVerde4 4
#define ledAmarelo8 8
#define ledVermelho13 13

void setup()
{
  //inicializa os pinos digitais 2, 7, 12 como uma saida
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledAmarelo7, OUTPUT);
  pinMode(ledVerde12, OUTPUT);
  pinMode(ledVermelho13 , OUTPUT);
  pinMode(ledAmarelo8, OUTPUT);
  pinMode(ledVerde4, OUTPUT);
}

void loop()
{
  digitalWrite(ledVermelho2, 1);
  digitalWrite(ledVerde4, 1);
  delay(5000);
  digitalWrite(ledVermelho2, 0);
  delay(1000);
  digitalWrite(ledVerde4, 0);
  delay(5000);
    
  digitalWrite(ledAmarelo7, 1);
  digitalWrite(ledAmarelo8, 1); 
  delay(2000);
  digitalWrite(ledAmarelo7, 0);
  delay(1000);
  digitalWrite(ledAmarelo8, 0);
  delay(5000);
    
  digitalWrite(ledVerde12, 1);
  digitalWrite(ledVermelho13, 1);
  delay(5000);
  digitalWrite(ledVerde12, 0);
  delay(1000);
  digitalWrite(ledVermelho13,0);
  delay(5000);
  

}
  