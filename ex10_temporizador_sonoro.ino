/* DÉCIMO PROGRAMA (TEMPORIZADOR COM ALARME SONORO)
   DANIEL RODRIGUES DE SOUSA 21/10/2022 */

#define LED1   13  //definição do LED 1
#define BUZZER 11  //definição do BUZZER
#define BOTAO1 12  //definição do Botão 1

void setup()
{
  pinMode(LED1, OUTPUT);    //definição da direção dos pinos

  pinMode(BUZZER, OUTPUT); 
  pinMode(BOTAO1, INPUT);
}

void loop()
{
  if(digitalRead(BOTAO1) == 0)  //se botão 1 pressionado
  { 
    digitalWrite(BUZZER, HIGH); //liga BUZZER
    delay(1000);                //tempo de 1 segundo
    digitalWrite(BUZZER, LOW);  //desliga BUZZER

    digitalWrite(LED1, HIGH);   //liga LED 1
    delay(30000);               //tempo de 30 segundos

    digitalWrite(BUZZER, HIGH); //liga BUZZER
    delay(1000);                //tempo de 1 segundo
    digitalWrite(BUZZER, LOW);  //desliga BUZZER
    delay(1000);                //tempo de 1 segundo
    digitalWrite(BUZZER, HIGH); //liga BUZZER
    delay(1000);                //tempo de 1 segundo
    digitalWrite(BUZZER, LOW);  //desliga BUZZER
    delay(1000);                //tempo de 1 segundo
    digitalWrite(BUZZER, HIGH); //liga BUZZER
    delay(1000);                //tempo de 1 segundo
    digitalWrite(BUZZER, LOW);  //desliga BUZZER
  }
  
  digitalWrite(LED1, LOW);      //se não, desliga LED 1
}
