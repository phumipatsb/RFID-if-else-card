#include <SPI.h>
#include <RFID.h>
#include <stdio.h>
#include <stdlib.h>
#define SS_PIN D2
#define RST_PIN D1

RFID rfid(SS_PIN, RST_PIN);

int buzzPin = 16;

// Setup variables:
int serNum0;
int serNum1;
int serNum2;
int serNum3;
int serNum4;

void setup()
{
  Serial.begin(9600);
  SPI.begin();
  rfid.init();
  
  
}

void loop()
{

  if (rfid.isCard()) {
    if (rfid.readCardSerial()) {
      /* With a new cardnumber, show it. */
      
      serNum0 = rfid.serNum[0];
      serNum1 = rfid.serNum[1];
      serNum2 = rfid.serNum[2];
      serNum3 = rfid.serNum[3];
      serNum4 = rfid.serNum[4];

      
      //buzzer
      analogWrite(3, 20);
      delay(500);
      analogWrite(3, 0);
    }
    if (rfid.serNum[0] == 96 && rfid.serNum[1] == 136 && rfid.serNum[2] == 126 && rfid.serNum[3] == 61 && rfid.serNum[4] == 171) {
      Serial.println("1");//1);
      
    }
    

    
    if (rfid.serNum[0] == 64 && rfid.serNum[1] == 94 && rfid.serNum[2] == 158 && rfid.serNum[3] == 61 && rfid.serNum[4] == 189) {
      Serial.println("2");//2
    }

    
    if (rfid.serNum[0] == 64 && rfid.serNum[1] == 210 && rfid.serNum[2] == 11 && rfid.serNum[3] == 61 && rfid.serNum[4] == 164) {
      Serial.println("3"); //3
    }

    
    if (rfid.serNum[0] == 48 && rfid.serNum[1] == 240 && rfid.serNum[2] == 90 && rfid.serNum[3] == 61 && rfid.serNum[4] == 167) {
      Serial.println("4"); //4
    }

    
    if (rfid.serNum[0] == 48 && rfid.serNum[1] == 137 && rfid.serNum[2] == 56 && rfid.serNum[3] == 61 && rfid.serNum[4] == 188) {
      Serial.println("5"); //5
    }

    
    if (rfid.serNum[0] == 96 && rfid.serNum[1] == 134 && rfid.serNum[2] == 39 && rfid.serNum[3] == 61 && rfid.serNum[4] == 252) {
      Serial.println("6");//6
    }

    
    if (rfid.serNum[0] == 64 && rfid.serNum[1] == 12 && rfid.serNum[2] == 64 && rfid.serNum[3] == 61 && rfid.serNum[4] == 49) {
      Serial.println("7");//7
    }

    
    if (rfid.serNum[0] == 212 && rfid.serNum[1] == 55 && rfid.serNum[2] == 193 && rfid.serNum[3] == 51 && rfid.serNum[4] == 17) {
      Serial.println("8");//8
    }

    
    if (rfid.serNum[0] == 48 && rfid.serNum[1] == 27 && rfid.serNum[2] == 91 && rfid.serNum[3] == 61 && rfid.serNum[4] == 77) {
      Serial.println("9");//9
    }

    
    if (rfid.serNum[0] == 48 && rfid.serNum[1] == 160 && rfid.serNum[2] == 39 && rfid.serNum[3] == 61 && rfid.serNum[4] == 138) {
      Serial.println("10");//10
    }

    
    if (rfid.serNum[0] == 35 && rfid.serNum[1] == 24 && rfid.serNum[2] == 184 && rfid.serNum[3] == 170 && rfid.serNum[4] == 41) {
      Serial.println("11");//11
    }


    if (rfid.serNum[0] == 35 && rfid.serNum[1] == 66 && rfid.serNum[2] == 219 && rfid.serNum[3] == 170 && rfid.serNum[4] == 16) {
      Serial.println("12");//12
    }


    if (rfid.serNum[0] == 35 && rfid.serNum[1] == 93 && rfid.serNum[2] == 163 && rfid.serNum[3] == 171 && rfid.serNum[4] == 118) {
      Serial.println("13");//13
    }


    if (rfid.serNum[0] == 35 && rfid.serNum[1] == 241 && rfid.serNum[2] == 255 && rfid.serNum[3] == 148 && rfid.serNum[4] == 185) {
      Serial.println("14");//14
    }


    if (rfid.serNum[0] == 51 && rfid.serNum[1] == 26 && rfid.serNum[2] == 216 && rfid.serNum[3] == 148 && rfid.serNum[4] == 101) {
      Serial.println("15");//15
    }


    if (rfid.serNum[0] == 76 && rfid.serNum[1] == 146 && rfid.serNum[2] == 4 && rfid.serNum[3] == 196 && rfid.serNum[4] == 72) {
      Serial.println("16");//16
    }


    if (rfid.serNum[0] == 92 && rfid.serNum[1] == 246 && rfid.serNum[2] == 7 && rfid.serNum[3] == 146 && rfid.serNum[4] == 63) {
      Serial.println("17");//17
    }


    if (rfid.serNum[0] == 156 && rfid.serNum[1] == 183 && rfid.serNum[2] == 0 && rfid.serNum[3] == 146 && rfid.serNum[4] == 185) {
      Serial.println("18");//18
    }


    if (rfid.serNum[0] == 163 && rfid.serNum[1] == 201 && rfid.serNum[2] == 28 && rfid.serNum[3] == 149 && rfid.serNum[4] == 227) {
      Serial.println("19");//19
    }


    if (rfid.serNum[0] == 195 && rfid.serNum[1] == 149 && rfid.serNum[2] == 17 && rfid.serNum[3] == 149 && rfid.serNum[4] == 210) {
      Serial.println("20");//20
    }
    
    else {
      
      
    }
  }
  rfid.halt();
}































// by 6230611009
