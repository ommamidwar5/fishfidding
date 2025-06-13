#define BLYNK_TEMPLATE_ID "TMPL32ew6FN09"
#define BLYNK_TEMPLATE_NAME "Feeding "


#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "V0fh260Xbtz-zC8_CskSw2kqg0IAuDd_"; //auth token
char ssid[] = "HITEL NET 2.4G"; // WIFI name
char pass[] = "Ommm_555"; // WIFI password

Servo servo;

BLYNK_WRITE(V2) {
  int pinValue = param.asInt(); // Get the value from the virtual pin V2
  if (pinValue == 1) {
    servo.write(180); // rotate to which angle
  } else {
    servo.write(0); // initiate to which angle
  }
}

void setup() {
  Serial.begin(9600);
  servo.attach(D4);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
