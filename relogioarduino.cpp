//1- ajustes para o relógio (teclas para aumentar hh, diminuir hh, aumentar mm e diminuir mm;
//2- a clássica inovação que agregue valor ao produto e o diferencie em todos os universos
//3 - o capricho, zelo e carinho habituais nos itens da interface.
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);
#define bh1 13
#define bh2 12
#define bm1 11
#define bm2 10
int seg = 0;
int min = 0;
int horas = 0;

void setup()

{  
     pinMode(bh1, INPUT_PULLUP);
     pinMode(bh2, INPUT_PULLUP);
     pinMode(bm1, INPUT_PULLUP);
     pinMode(bm2, INPUT_PULLUP);
     pinMode(9, OUTPUT);
     lcd_1.begin(16, 2);
     lcd_1.setCursor (4,0);
     lcd_1.print("relogios");
     lcd_1.setCursor (4,1);
     lcd_1.print("00:00:00");
}
void loop()
{
   if(digitalRead (bh1) == 0){
        horas++;
        digitalWrite(9, HIGH);
        delay(200);
        digitalWrite(9, LOW);

    if(horas<10){
        lcd_1.setCursor(4,1);
        lcd_1.print("0");
        lcd_1.setCursor(5,1);
        lcd_1.print(horas);
    }
    else{
        lcd_1.setCursor(4,1);
        lcd_1.print(horas);
    }
    while(digitalRead (bh1) == 0);
    }

    if(digitalRead (bh2) == 0){
        horas--;
        digitalWrite(9, HIGH);
        delay(200);
        digitalWrite(9, LOW);

    if(horas<10){
        lcd_1.setCursor(4,1);
        lcd_1.print("0");
        lcd_1.setCursor(5,1);
        lcd_1.print(horas);
    }else{
        lcd_1.setCursor(4,1);
        lcd_1.print(horas);
    }
    while(digitalRead (bh2) == 0);
    }

    if(digitalRead (bm1)==0){
    min ++;
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
   
    if(min<10){
        lcd_1.setCursor(7,1);
        lcd_1.print("0");
        lcd_1.setCursor(8,1);
        lcd_1.print(min);
    }else{
        lcd_1.setCursor(7,1);
        lcd_1.print(min);
    }
    while(digitalRead (bm1)==0);
    }


    if(digitalRead (bm2)==0){
    min --;
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    if(min<10){
        lcd_1.setCursor(7,1);
        lcd_1.print("0");
        lcd_1.setCursor(8,1);
        lcd_1.print(min);
    }else{
        lcd_1.setCursor(7,1);
        lcd_1.print(min);}
    while(digitalRead (bm2)==0);
    }  
    
    if(seg<10){
        lcd_1.setCursor(10,1);
        lcd_1.print("0");
        lcd_1.setCursor(11,1);
        lcd_1.print(seg);
    }else{
        lcd_1.setCursor(10,1);
        lcd_1.print(seg);
    }if(seg>=60){

        seg=0;
        min++;

    if(min<10){
        lcd_1.setCursor(7,1);
        lcd_1.print("0");
        lcd_1.setCursor(8,1);
        lcd_1.print(min);
    }else{
        lcd_1.setCursor(7,1);
        lcd_1.print(min);}
    }
    if(min>=60){

        min=0;
        horas++;
    if(horas<10){
        lcd_1.setCursor(4,1);
        lcd_1.print("0");
        lcd_1.setCursor(5,1);
        lcd_1.print(horas);
    }else{
        lcd_1.setCursor(4,1);
        lcd_1.print(horas);
    }
    }
    
        seg++;

}