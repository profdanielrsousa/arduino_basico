/* DÉCIMO QUARTO PROGRAMA (TEMPORIZADOR AJUSTÁVEL)
   DANIEL RODRIGUES DE SOUSA 05/11/2022 */

#define LED     13  //definição do LED
#define BUZZER  11  //definição do BUZZER
#define BOTAO   12  //definição do Botão
#define POT     A0  //definição do potenciômetro

unsigned int tempo;

void setup()
{
  pinMode(LED, OUTPUT);     //definição da direção dos pinos
  pinMode(BUZZER, OUTPUT); 
  pinMode(BOTAO, INPUT);
  Serial.begin(9600);       //configura serial
}

void loop()
{
  delay(100);
  tempo = analogRead(POT);  //lê o potenciômetro
  tempo = map(tempo, 0, 1023, 1000, 10000);
  Serial.println(tempo);    //imprime o valor
  
  if(digitalRead(BOTAO) == 0)   //se botão pressionado
  { 
    digitalWrite(BUZZER, HIGH); //liga BUZZER
    delay(1000);                //tempo de 1 segundo
    digitalWrite(BUZZER, LOW);  //desliga BUZZER

    digitalWrite(LED, HIGH);    //liga LED
    delay(tempo);               //tempo
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
  digitalWrite(LED, LOW);       //se não, desliga LED
}
