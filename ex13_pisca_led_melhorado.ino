/* DÉCIMO TERCEIRO PROGRAMA (PISCA-LED MELHORADO)
   DANIEL RODRIGUES DE SOUSA 28/10/2022 */

#define LED     13  //definição do LED
#define POT     A0  //definição do potenciômetro

unsigned int tempo = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  tempo = analogRead(POT);      //lê potenciômetro
  Serial.println(tempo);        //envia pela serial
  digitalWrite(LED, !digitalRead(LED));
  delay(tempo);
}