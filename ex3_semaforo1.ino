/* TERCEIRO PROGRAMA (SEMÁFORO)
   DANIEL RODRIGUES DE SOUSA 22/09/2021 */

int LED_VERMELHO = 13; //pino onde está ligado o LED
int LED_AMARELO  = 12; //pino onde está ligado o LED
int LED_VERDE    = 11; //pino onde está ligado o LED

void setup()
{
  pinMode(LED_VERMELHO, OUTPUT); //direção do pino (saída) 
  pinMode(LED_AMARELO, OUTPUT);  //direção do pino (saída)
  pinMode(LED_VERDE, OUTPUT);    //direção do pino (saída)
}
void loop()
{
  digitalWrite(LED_VERMELHO, LOW); //desliga LED VERMELHO
  digitalWrite(LED_AMARELO, LOW);  //desliga LED AMARELO
  digitalWrite(LED_VERDE, HIGH);   //liga LED VERDE
  delay(10000);                    //delay de 10 segundos 
  digitalWrite(LED_VERDE, LOW);    //desliga LED VERDE
  digitalWrite(LED_AMARELO, HIGH); //liga LED AMARELO
  delay(3000);                     //delay de 3 segundos 
  digitalWrite(LED_AMARELO, LOW);  //desliga LED AMARELO
  digitalWrite(LED_VERMELHO, HIGH);//liga LED VERMELHO
  delay(5000);                     //delay de 5 segundos 
}
