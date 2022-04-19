#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9          // Configurable, see typical pin layout above
#define SS_PIN          10         // Configurable, see typical pin layout above
#include "Wire.h"
#include "LiquidCrystal_I2C.h"
MFRC522 mfrc522(SS_PIN, RST_PIN);
LiquidCrystal_I2C lcd(0x27, 16, 2);

String data;
void setup() {
  lcd.init();
  lcd.backlight();

 SPI.begin();
 mfrc522.PCD_Init();
 Serial.begin(9600);
 lcd.clear();
}

void loop() {
  
  
  if(Serial.available()) {
     data=Serial.readString();
     
     if(data != "d") {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(data);
   } else if(data == "d"){
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Access Denied");
   }
  }
  
   
   
    
  if( ! mfrc522.PICC_IsNewCardPresent())
  {return;
  }
   if( ! mfrc522.PICC_ReadCardSerial())
  {return;
  }
  String UID = "";
  for(byte i = 0;i <mfrc522.uid.size; i++)
  {UID.concat(String(mfrc522.uid.uidByte[i] <0x10 ? "0" :" "));
  UID.concat(String(mfrc522.uid.uidByte[i],HEX));
  }
  UID.toUpperCase();
  if(UID.substring(1) == "33 40 7503")
  {
          Serial.write("2");

  }
 
 else
  {
   
    Serial.write("-1");
  }
 
   
 
 
 
   
     

}
