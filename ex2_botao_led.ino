/* SEGUNDO PROGRAMA (BOTÃO E LED)
   DANIEL RODRIGUES DE SOUSA 22/09/2021 */

int LED = 13;   //pino onde está ligado o LED
int BOTAO = 12; //pino onde está ligado o BOTÃO

void setup()
{
  pinMode(LED, OUTPUT);   //direção do pino (saída)
  pinMode(BOTAO, INPUT);  //direção do pino (entrada)
}

void loop()
{
  if(digitalRead(BOTAO) == 0)//testa o botão
  {
    digitalWrite(LED, HIGH); //se botão pressionado, liga LED
  }
  else
  {
    digitalWrite(LED, LOW);  //se botão liberado, desliga LED
  }
}

/*
OBSERVAÇÃO:

O TRECHO ABAIXO:
int LED = 13;   //pino onde está ligado o LED
int BOTAO = 12; //pino onde está ligado o BOTÃO

É “IGUAL”:
#define LED 13    //pino onde está ligado o LED
#define BOTAO 12  //pino onde está ligado o BOTÃO
*/
