/* DÉCIMO SÉTIMO PROGRAMA (SENSOR LDR)
   DANIEL RODRIGUES DE SOUSA 11/11/2022 */

int ent_analogica;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  ent_analogica = analogRead(A0);
  Serial.print(ent_analogica);
  delay(250);
}
