
#include "thingProperties.h"
#include <Wire.h>
#include <SparkFun_Qwiic_Humidity_AHT20.h> 
#include <Adafruit_BMP280.h>
#define BMP_SDA 21
#define BMP_SCL 22
Adafruit_BMP280 bmp280;
AHT20 humiditySensor;

void setup() {
  
  Serial.begin(9600);
  Wire.begin(); 
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  humiditySensor.begin();
  boolean status = bmp280.begin(0x76);
  delay(1500); 
  
if (!status)
{
Serial.println("Not connected");
}
 
}
  
  

void loop() {
  ArduinoCloud.update();
  if (humiditySensor.available() == true)
  {
    float temperature = humiditySensor.getTemperature();
    float humidity = humiditySensor.getHumidity();
    temp = temperature;
    humidity2 = humidity;
    Serial.print("Temperature: ");
    Serial.print(temperature, 2);
    Serial.print(" C\t");
    Serial.print("Humidity: ");
    Serial.print(humidity, 2);
    Serial.print("% RH");
    Serial.println();
  }
  
  
//float temp = bmp280.readTemperature();#if you need temperature form BMP280

//Serial.print("temperature: ");

//Serial.print(temp);

//Serial.println("*C");

float altitude = bmp280.readAltitude(1011.18);

alt = altitude; //from your arduino IOT cloud variable

Serial.print("Altitude: ");

Serial.print(altitude);

Serial.println("m");


float pressure = (bmp280.readPressure()/100);
pre = pressure; //from your arduino IOT cloud variable
Serial.print("Pressure: ");
Serial.print(pressure);
Serial.println("hPa");
Serial.println(" ");
  

  
  delay(2000);
  
}
