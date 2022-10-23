/* NONO PROGRAMA (SET-RESET)
   DANIEL RODRIGUES DE SOUSA 21/10/2022 */

#define LED1    13//definição do LED 1

#define BOTAO1  5 //definição do Botão 1
#define BOTAO2  6 //definição do Botão 2

void setup()
{
  pinMode(LED1, OUTPUT);    //definição da direção dos pinos
 
  pinMode(BOTAO1, INPUT);
  pinMode(BOTAO2, INPUT);
}

void loop()
{
  if(digitalRead(BOTAO1) == 0)//se botão 1 pressionado
  {
    digitalWrite(LED1, HIGH); //liga LED 1
  }
  
  if(digitalRead(BOTAO2) == 0)//se botão 2 pressionado
  {
    digitalWrite(LED1, LOW);  //se não, desliga LED 1
  }
}
