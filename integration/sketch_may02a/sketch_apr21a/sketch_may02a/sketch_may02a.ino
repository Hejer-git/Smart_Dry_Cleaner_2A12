#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9          // Configurable, see typical pin layout above
#define SS_PIN          10         // Configurable, see typical pin layout above

MFRC522 mfrc522(SS_PIN, RST_PIN);
int led_1 = 7;
int led_2 = 6;
char data;
void setup() {
  pinMode(led_1, OUTPUT);
  digitalWrite(led_1, LOW);
  pinMode(led_2, OUTPUT);
  digitalWrite(led_2, LOW);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.begin(9600);

}

void loop() {

  data = Serial.read();
  if (data == '0')
  { digitalWrite(led_1, LOW);
    digitalWrite(led_2, HIGH);

  }

  if (data == '1')
  { digitalWrite(led_1, HIGH);
    digitalWrite(led_2, LOW);
  }
  if ( ! mfrc522.PICC_IsNewCardPresent())
  { return;
  }
  if ( ! mfrc522.PICC_ReadCardSerial())
  { return;
  }
  String UID = "";
  for (byte i = 0; i < mfrc522.uid.size; i++)
  { UID.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? "0" : " "));
    UID.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  UID.toUpperCase();

  if (UID.substring(1) == "33 40 7503")
  {
    Serial.write('0');
    digitalWrite(led_1, HIGH);
    delay (2000);
    digitalWrite(led_1, LOW);


  }

  else
  { Serial.write('2');
    digitalWrite(led_2, HIGH);
    delay (2000);
    digitalWrite(led_2, LOW);
  }








}
