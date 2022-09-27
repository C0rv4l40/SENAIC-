#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);
#define b1 13
#define b2 12
#define b3 11
#define b4 10
void setup(){
    lcd_1.begin(16, 2);
    pinMode(b1, INPUT_PULLUP);
    pinMode(b2, INPUT_PULLUP);
    pinMode(b3, INPUT_PULLUP);
    pinMode(b4, INPUT_PULLUP);
    Serial.begin(9600);
    Serial.print("nada\npressionado\n");
    lcd_1.clear();
    lcd_1.print("nada pressionado");
}

void loop(){
    if(digitalRead(b1) == 0){
        Serial.print("botao 1\npressionado\n");
        lcd_1.clear(); 
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(4, 1);
        lcd_1.print("pirulito");
        while(digitalRead(b1) == 0){};
    }
    if(digitalRead(b2) == 0){
        Serial.print("botao 2\npressionado\n");
        lcd_1.clear();
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(4,1);
        lcd_1.print("cerveja");
        while(digitalRead(b2) == 0){};
    }
    if(digitalRead(b3) == 0){
        Serial.print("botao 3\npressionado\n");
        lcd_1.clear();
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(2,1);
        lcd_1.print("bicicleta");
        while(digitalRead(b3) == 0){};
    }
    if(digitalRead(b4) == 0){
        Serial.print("botao 4\npressionado\n");
        lcd_1.clear();
        lcd_1.setCursor(2, 0);
        lcd_1.print("voce ganhou:");
        lcd_1.setCursor(4,1);
        lcd_1.print("uno 0KM");
        while(digitalRead(b4) == 0){};
    }
}