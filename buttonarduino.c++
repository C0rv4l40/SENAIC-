
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);
#define b1 4
#define b2 3
#define b3 2
#define b4 1
int valor = 0;

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(b4, INPUT_PULLUP);
}

void loop()
{
    if(digitalRead(b1) == 0){
        lcd_1.clear(); 
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(4, 1);
        lcd_1.print("pirulito");
    }
    if(digitalRead(b2) == 0){
        lcd_1.clear();
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(4,1);
        lcd_1.print("cerveja");
    }
    if(digitalRead(b3) == 0){
        lcd_1.clear();
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(2,1);
        lcd_1.print("bicicleta");
    }
    if(digitalRead(b4) == 0){
        lcd_1.clear();
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(4,1);
        lcd_1.print("uno 0KM");
    }
  delay(200);
}