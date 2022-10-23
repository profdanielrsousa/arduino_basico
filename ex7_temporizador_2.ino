/* SÉTIMO PROGRAMA (TEMPORIZADOR 2)
   DANIEL RODRIGUES DE SOUSA 07/10/2022 */

#define LED1  13  //definição do LED 1

#define BOTAO1 5  //definição do Botão 1
#define BOTAO2 6  //definição do Botão 2
#define BOTAO3 7  //definição do Botão 3

void setup()
{
  pinMode(LED1, OUTPUT);    //definição da direção dos pinos

  pinMode(BOTAO1, INPUT);
  pinMode(BOTAO2, INPUT);
  pinMode(BOTAO3, INPUT);
}


void loop()
{
  if(digitalRead(BOTAO1) == 0)  //se botão 1 pressionado
  {
    digitalWrite(LED1, HIGH);   //liga LED 1
    delay(10000);               //delay de 10 segundos
  }

  if(digitalRead(BOTAO2) == 0)  //se botão 2 pressionado
  {
    digitalWrite(LED1, HIGH);   //liga LED 1
    delay(20000);               //delay de 20 segundos
  }

  if(digitalRead(BOTAO3) == 0)  //se botão 3 pressionado
  {
    digitalWrite(LED1, HIGH);   //liga LED 1
    delay(40000);               //delay de 40 segundos
  }

  digitalWrite(LED1, LOW);      //desliga LED 1
}
