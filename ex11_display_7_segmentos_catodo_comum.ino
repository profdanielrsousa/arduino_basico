/* DÉCIMO PRIMEIRO PROGRAMA (DISPLAY 7 SEGMENTOS - CATODO COMUM)
   DANIEL RODRIGUES DE SOUSA 21/10/2022 */

#define SEG_A 0 //definição do display_seg a
#define SEG_B 1 //definição do display_seg b
#define SEG_C 2 //definição do display_seg c
#define SEG_D 3 //definição do display_seg d
#define SEG_E 4 //definição do display_seg e
#define SEG_F 5 //definição do display_seg f
#define SEG_G 6 //definição do display_seg g
#define PD    7 //definição do display_seg p

int contador = 10;

                     // pgfedcba
byte segmentos[10]= { 0b00111111,   //0
                      0b00000110,   //1
                      0b01011011,   //2
                      0b01001111,   //3
                      0b01100110,   //4
                      0b01101101,   //5
                      0b01111101,   //6
                      0b00000111,   //7
                      0b01111111,   //8
                      0b01101111 }; //9

void display_7seg( byte display_seg )    //função display_segs: recebe um byte chamado display_seg
{
  digitalWrite(SEG_A, bitRead(display_seg, 0));  //acerta o estado de SEG_A de acordo com o bit 0 do byte display_seg
  digitalWrite(SEG_B, bitRead(display_seg, 1));  //acerta o estado de SEG_B de acordo com o bit 1 do byte display_seg
  digitalWrite(SEG_C, bitRead(display_seg, 2));  //acerta o estado de SEG_C de acordo com o bit 2 do byte display_seg
  digitalWrite(SEG_D, bitRead(display_seg, 3));  //acerta o estado de SEG_D de acordo com o bit 3 do byte display_seg
  digitalWrite(SEG_E, bitRead(display_seg, 4));  //acerta o estado de SEG_E de acordo com o bit 4 do byte display_seg
  digitalWrite(SEG_F, bitRead(display_seg, 5));  //acerta o estado de SEG_F de acordo com o bit 5 do byte display_seg
  digitalWrite(SEG_G, bitRead(display_seg, 6));  //acerta o estado de SEG_G de acordo com o bit 6 do byte display_seg
  digitalWrite(PD, bitRead(display_seg, 7));     //acerta o estado de PD de acordo com o bit 7 do byte display_seg
}

void setup()
{
  pinMode(SEG_A, OUTPUT);     //definição da direção dos pinos
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  pinMode(PD, OUTPUT);
}

void loop()
{
  contador = contador + 1;
  if( contador >= 10 )
  {
    contador = 0;
  }
  display_7seg(segmentos[contador]);
  delay(1000);
}
