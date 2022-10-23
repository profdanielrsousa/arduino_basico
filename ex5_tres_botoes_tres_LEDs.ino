/* QUINTO PROGRAMA (TRÊS BOTÕES E TRÊS LEDS)
   DANIEL RODRIGUES DE SOUSA 07/10/2022 */

#define LED1  13  //definição do LED 1
#define LED2  12  //definição do LED 2
#define LED3  11  //definição do LED 3

#define BOTAO1 5  //definição do Botão 1
#define BOTAO2 6  //definição do Botão 2
#define BOTAO3 7  //definição do Botão 3

void setup()
{
  pinMode(LED1, OUTPUT);         //definição da direção dos pinos
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  
  pinMode(BOTAO1, INPUT);
  pinMode(BOTAO2, INPUT);
  pinMode(BOTAO3, INPUT);
}

void loop()
{
  if(digitalRead(BOTAO1) == 0)  //se botão 1 pressionado
  {
    digitalWrite(LED1, HIGH);   //liga LED 1
  }
  else
  {
    digitalWrite(LED1, LOW);    //se não, desliga LED 1
  }
  
  if(digitalRead(BOTAO2) == 0)  //se botão 2 pressionado
  {
    digitalWrite(LED2, HIGH);   //liga LED 2
  }
  else
  {
    digitalWrite(LED2, LOW);    //desliga LED 2
  }

  if(digitalRead(BOTAO3) == 0)  //se botão 3 pressionado
  {
    digitalWrite(LED3, HIGH);   //liga LED 3
  }
  else
  {
    digitalWrite(LED3, LOW);    //se não, desliga LED 3
  }
}
