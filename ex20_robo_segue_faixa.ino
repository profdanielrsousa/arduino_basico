/* VIGÉSIMO PROGRAMA (CÓDIGO BASE PARA ROBÔ SEGUE-FAIXA)
   REFERÊNCIA: WATANABE, R. H. Curso Seguidor de Linha. Equipe de Robotica Cetec CPS
   DANIEL RODRIGUES DE SOUSA 19/11/2022 */

//RETIRAR O COMENTÁRIO ABAIXO PARA CALIBRAR OS SENSORES
//#define CALIBRA_SENSOR

#define motorEF 6   // Motor ESQUERDO anda para FRENTE
#define motorET 7   // Motor ESQUERDO anda para TRÁS
#define motorDF 4   // Motor DIREITO anda para FRENTE
#define motorDT 5   // Motor DIREITO anda para TRÁS
#define pwmE    10  // PWM motor ESQUERDO
#define pwmD    9   // PWM motor DIREITO

#define SensorEsquerdo A0   // Pino AD para o sensor ESQUERDO
#define SensorDireito  A1   // Pino AD para o sensor DIREITO

#define velocidade 85       //Controle de velocidade do PWM

#define branco 80           //Intensidade do branco
#define preto 200           //Intensidade do preto

unsigned int valorSenEsq, valorSenDir; // Variáveis para
         //armazenar o valor dos sensores infravermelhos

void setup()
{

  pinMode(SensorEsquerdo,INPUT);  // Config pinos como entrada
  pinMode(SensorDireito,INPUT);
  
  pinMode(motorEF,OUTPUT);        // Config pinos como saida
  pinMode(motorET,OUTPUT);
  pinMode(motorDF,OUTPUT);
  pinMode(motorDT,OUTPUT);   
  pinMode(pwmE,OUTPUT);
  pinMode(pwmD,OUTPUT);

  #ifdef CALIBRA_SENSOR
    Serial.begin(9600);
  #endif
}

void loop()
{
  valorSenDir = analogRead(SensorDireito);  
  valorSenEsq = analogRead(SensorEsquerdo); 

  #ifdef CALIBRA_SENSOR
    Serial.print("Sensor Direito = ");
    Serial.println(valorSenDir);

    Serial.print("Sensor Esquerdo = ");
    Serial.println(valorSenEsq);
    
    analogWrite(pwmE,0);
    analogWrite(pwmD,0);

    delay(100);
  #else
    analogWrite(pwmE,velocidade);
    analogWrite(pwmD,velocidade);
  #endif

  // Se os dois sensores estiverem no branco(fora da linha),
  // anda para FRENTE
  if((valorSenEsq < branco ) && (valorSenDir < branco))
  {  
    frente(); 
  }

  // Se o sensor esquerdo estiver na linha preta 
  // vira para ESQUERDA 
  else if((valorSenEsq > preto ) && (valorSenDir <  branco))
  { 
    esquerda(); 
  }
 
  // Se o sensor direito estiver na linha preta
  // vira para DIREITA 
  else if((valorSenEsq < branco) && (valorSenDir > preto))
  { 
    direita(); 
  }
}

// ****  FUNÇÕES  ****

void tras(void) // Ambos motores são acionados
{               // reversamente, o robô anda para TRÁS 
  digitalWrite(motorEF, 1);
  digitalWrite(motorET, 0);
  digitalWrite(motorDF, 1);
  digitalWrite(motorDT, 0);
}

void frente(void) // Ambos motores são acionados,
{                 // o robô anda para FRENTE
  digitalWrite(motorEF, 0);
  digitalWrite(motorET, 1);
  digitalWrite(motorDF, 0);
  digitalWrite(motorDT, 1);
}

void esquerda(void) // Apenas o motor direito é acionado,
{                   // virando para ESQUERDA
  digitalWrite(motorEF, 0);
  digitalWrite(motorET, 0);
  digitalWrite(motorDF, 0);
  digitalWrite(motorDT, 1);
}

void direita(void)  // Apenas o motor esquerdo é acionado,
{                   // virando para DIREITA
  digitalWrite(motorEF, 0);
  digitalWrite(motorET, 1);
  digitalWrite(motorDF, 0);
  digitalWrite(motorDT, 0);
}

void para(void)     // Todos motores ficam parados
{
  digitalWrite(motorEF, 0);
  digitalWrite(motorET, 0);
  digitalWrite(motorDF, 0);
  digitalWrite(motorDT, 0);
}
