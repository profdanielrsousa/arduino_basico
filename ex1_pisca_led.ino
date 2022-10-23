/* PRIMEIRO PROGRAMA (PISCA LED)
   DANIEL RODRIGUES DE SOUSA 22/09/2021 */

int led = 13; //pino onde está ligado o LED

void setup()
{
  pinMode(led, OUTPUT); //direção do pino (saída)
}

void loop()
{
  digitalWrite(led, HIGH);//pino em nível alto (5 Volts)
  delay(1000);            //delay de 1 segundo  
  digitalWrite(led, LOW); //coloca pino em nível baixo (GND)
  delay(1000);            //delay de 1 segundo
}
