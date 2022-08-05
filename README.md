# Small-weather-station
Build a small weather station using ESP32 and Arduino IoT cloud

# Partslist
Here’s a list of the parts to you need to build the circuit:
-- ESP32Cancel changes

-- BMP280 --

-- AHT20 --

# Sensor Overview:

----BMP280----

Operation range: 300-1100 hPa  Temperature: -40-85°C

Absolute accuracy :  ±1 hPa

Relative accuracy :  ± 0.12 hPa (typical)   --p = 700-900hPa (Temp. @ 25°C)

Supply voltage VDDIO :  1.2 - 3.6 V

Supply voltage VDD : 1.71 ... 3.6 V

Interface :  I²C and SPI

----AHT20----

Humidity Absolute accuracy :  ± 2 % RH ( 25 ℃ )

Temperature accuracy :  ± 0.3 ℃

Resolution :  temperature: 0.01℃ Humidity: 0.024%RH

Supply voltage:  DC : 2.2 - 5.5V

Interface : I²C

# How to wired

---AHT20---

SDA----D21   for other Arduino(A4)

SCL----D22   for other Arduino(A5)

GND----GND

VIN----3v3

---BMP280---

SDA----D21   for other Arduino(A4)

SCL----D22   for other Arduino(A5)

GND----GND

VIN----3v3

# Arduino IOT cloud 

https://docs.arduino.cc/arduino-cloud/





