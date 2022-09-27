#define b1 13
#define b2 12
#define b3 11
#define b4 10
int aa = 8, bb = 1, cc = 2, dd = 3, ee = 4, ff = 5, gg = 6;
void setup(){
    pinMode(b1, INPUT_PULLUP);
    pinMode(b2, INPUT_PULLUP);
    pinMode(b3, INPUT_PULLUP);
    pinMode(b4, INPUT_PULLUP);
    pinMode(aa, OUTPUT);
    pinMode(bb, OUTPUT);
    pinMode(cc, OUTPUT);
    pinMode(dd, OUTPUT);
    pinMode(ee, OUTPUT);
    pinMode(ff, OUTPUT);
    pinMode(gg, OUTPUT);
    Serial.begin(9600);
    Serial.print("nada\npressionado\n");
}

void loop(){
    if(digitalRead(b1) == 0){
        Serial.print("botao 1\npressionado\n");
        while(digitalRead(b1) == 0){};
        um();
    }
    if(digitalRead(b2) == 0){
        Serial.print("botao 2\npressionado\n");
        while(digitalRead(b2) == 0){};
        dois();
    }
    if(digitalRead(b3) == 0){
        Serial.print("botao 3\npressionado\n");
        while(digitalRead(b3) == 0){};
        tres();
    }
    if(digitalRead(b4) == 0){
        Serial.print("botao 4\npressionado\n");
        while(digitalRead(b4) == 0){};
        quatro();
    }

    void um()

    {
        digitalWrite(aa, 0);
        digitalWrite(bb, 1);
        digitalWrite(cc, 1);
        digitalWrite(dd, 0);
        digitalWrite(ee, 0);
        digitalWrite(ff, 0);
        digitalWrite(gg, 0);

    }

    void dois()

    {
        digitalWrite(aa, 1);
        digitalWrite(bb, 1);
        digitalWrite(cc, 0);
        digitalWrite(dd, 1);
        digitalWrite(ee, 1);
        digitalWrite(ff, 0);
        digitalWrite(gg, 1);

    }

    void tres()
    {
        digitalWrite(aa, 1);
        digitalWrite(bb, 1);
        digitalWrite(cc, 1);
        digitalWrite(dd, 1);
        digitalWrite(ee, 0);
        digitalWrite(ff, 0);
        digitalWrite(gg, 1);
    }

    void quatro()
    {
        digitalWrite(aa, 0);
        digitalWrite(bb, 1);
        digitalWrite(cc, 1);
        digitalWrite(dd, 0);
        digitalWrite(ee, 0);
        digitalWrite(ff, 1);
        digitalWrite(gg, 1);

    }
}