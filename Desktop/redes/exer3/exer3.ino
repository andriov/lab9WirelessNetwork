// Include the libs
#include <ESP8266WiFi.h>
    //Parameters WIFI
    const char* ssid = "<your network>";
    const char* password = "<your password>";
    void setup() {
    // put your setup code here, to run once:
    Serial .begin(115200);
    delay(20);
    // Connect to the WIFI
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL CONNECTED){
    delay(500);
    Serial . print(".") ;
    }
    Serial . println ("");
    Serial . println ("Wi−Fi connected!");
    Serial . println (WiFi.localIP());
}
void loop() {
}
