#include "Adafruit_DHT.h" //using Adafruit_DHT library

#define DHTPIN 2 //DHT connected to pin 2
#define DHTTYPE DHT22 //DHT 22 Model (AM2302)

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
    
    //Serial.begin(9600); //sets serial monitor
    //Serial.println("Sensor Start");
    dht.begin();
    
}

void loop()
{
    delay(5000); //5 second intervals between readings

    float t = dht.getTempCelcius();
    Particle.publish("temp", String(t), PRIVATE);
}



   