int leds1[3];
int leds2[3];
void setup() {
  // put your setup code here, to run once:
leds1[0] = 3; //pyramide 1 rechts unten
leds1[1] = 5; //pyramide 1 top
leds1[2] = 11; //pyramide 1 links unten

leds2[0] = 6; //rechts
leds2[2] = 9; //links
leds2[1] = 10; //top

}

byte values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
byte gain = 1;
void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 41; i++) {
    analogWrite(leds1[0], values[i]*gain);
    analogWrite(leds1[1], values[i+7]*gain);
    analogWrite(leds1[2], values[i+15]*gain);
    analogWrite(leds2[0], values[i+3]*gain);
    analogWrite(leds2[1], values[i+10]*gain);
    analogWrite(leds2[2], values[i+18]*gain);
    delay(200);
  }

}
