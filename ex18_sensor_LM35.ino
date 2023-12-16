/* DÉCIMO OITAVO PROGRAMA (SENSOR DE TEMPERATURA LM35)
   DANIEL RODRIGUES DE SOUSA 11/11/2022 */

int ent_analogica;
float temperatura;

void setup()
{
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop()
{
  ent_analogica = analogRead(A0);
  temperatura = ((float)ent_analogica * 110.0) / 1023.0;
  Serial.print("Sensor = ");
  Serial.println(temperatura);
  delay(250);
}
