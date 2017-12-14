#define BLYNK_PRINT Serial
#define LED1 D3

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Wire.h>

char auth[] = "28cd1d9bc0c0411aba24714cdac69253";
char ssid[] = "CASSINIguest";
char pass[] = "Cassini2016!";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, IPAddress(192,168,2,150));
}

void loop()
{
  Blynk.run();
}
