/* OITAVO PROGRAMA (SEQUÊNCIAL SUPER MÁQUINA)
   DANIEL RODRIGUES DE SOUSA 21/10/2022 */

#define LED0  0 //definição do LED 0
#define LED1  1 //definição do LED 1
#define LED2  2 //definição do LED 2
#define LED3  3 //definição do LED 3
#define LED4  4 //definição do LED 4
#define LED5  5 //definição do LED 5
#define LED6  6 //definição do LED 6
#define LED7  7 //definição do LED 7

int sequencia = 1;    //define byte sequencia, inicializando com 1
bool flag = 0;        //define bit flag, inicializando com 0

void setup()
{
  pinMode(LED0, OUTPUT);    //definição da direção dos pinos
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
}

void loop()
{
  LEDs(sequencia);          //passa para LEDs o valor de sequencia
  
  if(flag == 0)             //se flag = 0    
  {
    sequencia = sequencia << 1;    //desloca um bit de sequencia da direita para a esquerda
    if(sequencia == 0b10000000)    //se bit 7 de sequencia for igual a 1
    {
      flag = 1;             //seta flag
    }
  }
  else                      //caso contrário (flag = 1)
  {
    sequencia = sequencia >> 1;    //desloca um bit de sequencia da esquerda para a direita
    if(sequencia == 0b00000001)    //se bit 0 de sequencia for igual a 1
    {
      flag = 0;             //limpa flag
    }
  }
  
  delay(100);               //delay 100 ms
}

void LEDs( int led )        //função LEDs: recebe um byte chamado led
{
  digitalWrite(LED0, bitRead(led, 0));    //acerta o estado de LED0 de acordo com o bit 0 do byte led
  digitalWrite(LED1, bitRead(led, 1));    //acerta o estado de LED1 de acordo com o bit 1 do byte led
  digitalWrite(LED2, bitRead(led, 2));    //acerta o estado de LED2 de acordo com o bit 2 do byte led
  digitalWrite(LED3, bitRead(led, 3));    //acerta o estado de LED3 de acordo com o bit 3 do byte led
  digitalWrite(LED4, bitRead(led, 4));    //acerta o estado de LED4 de acordo com o bit 4 do byte led
  digitalWrite(LED5, bitRead(led, 5));    //acerta o estado de LED5 de acordo com o bit 5 do byte led
  digitalWrite(LED6, bitRead(led, 6));    //acerta o estado de LED6 de acordo com o bit 6 do byte led
  digitalWrite(LED7, bitRead(led, 7));    //acerta o estado de LED7 de acordo com o bit 7 do byte led
}
