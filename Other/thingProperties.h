// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onArtificialLightChange();
void onCoolingFanChange();
void onWaterpumpChange();

float humidity;
float moisture;
float temperature;
int light;
bool artificial_light;
bool cooling_fan;
bool waterpump;

void initProperties(){

  ArduinoCloud.addProperty(humidity, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(moisture, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(temperature, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(light, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(artificial_light, READWRITE, ON_CHANGE, onArtificialLightChange);
  ArduinoCloud.addProperty(cooling_fan, READWRITE, ON_CHANGE, onCoolingFanChange);
  ArduinoCloud.addProperty(waterpump, READWRITE, ON_CHANGE, onWaterpumpChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
