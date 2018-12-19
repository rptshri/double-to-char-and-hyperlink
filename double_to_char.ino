#include <GSMSim.h>

#define RX 7
#define TX 8
#define RESET 2
#define BAUD 9600


GSMSim gsm;

const double lat0 =  18.111111;
const double long0 = 72.222229;
String hyperlink = "http://maps.google.com/maps?q=";


/*
   Also you can this types:
   GSMSim gsm(RX, TX);
   GSMSim gsm(RX, TX, RESET);
   GSMSim gsm(RX, TX, RESET, LED_PIN, LED_FLAG);
*/
char* number = "+917020818025";
char* message = "Hi my friend. How are you?"; // message lenght must be <= 160. Only english characters.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //  Serial.println("GSMSim Library - SMS Example");
  //  Serial.println("");
  //  delay(1000);

  //  gsm.start(); // baud default 9600
  //gsm.start(BAUD);

  //  Serial.println("Changing to text mode.");
  //  gsm.smsTextMode(true); // TEXT or PDU mode. TEXT is readable :)

  //
  //  Serial.println("Sending Message --->");
  //  Serial.println(gsm.smsSend(number, message)); // if success it returns true (1) else false (0)
  //  delay(2000);

}

void loop() {
  //  message = "";
    String x = String(lat0, 6);
    String y = String(long0, 6);
    String z = "location:" + x + "," + y;
  //  z.toCharArray(message, 29);

  //  Serial.print(x);
  //  Serial.println("\n");
  //  Serial.print("message:");
  //  Serial.println(message);
  message = " ";

  Serial.println(message);
  String a = z+"\n"+hyperlink + x + "," + y;
  a.toCharArray(message, 87);
  Serial.println(message);

  //    Serial.println("Sending Message --->");
  //    Serial.println(gsm.smsSend(number, message)); // if success it returns true (1) else false (0)
  //    delay(2000);
}
