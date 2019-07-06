#include <Adafruit_NeoPixel.h>
#define PIN 5
#define LED_COUNT 12

int Ledjes = 5;
int Uit = 9; 					
int COfunctie = 10;
int Geluid = 12;
int gasSensorA = A5;			
int Rval;
int Gval;
int Bval;
int sensorValue = 0;        
int outputValue = 0;        
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  Serial.begin(9600);		
  leds.begin();
  leds.show();
  pinMode (gasSensorA, INPUT);
  pinMode (9, INPUT);
  pinMode (10, INPUT);
  pinMode (11, INPUT);
  pinMode (12, OUTPUT);
}

void loop() 
{
  	sensorValue = analogRead(gasSensorA);		
  	Serial.println(sensorValue, DEC);			
  		if (sensorValue > 700) 					
  		{				
    	(Ledjes, HIGH);							
    	leds.setPixelColor(0, 255, 255, 254);
		leds.setPixelColor(1, 255, 255, 254);
 		leds.setPixelColor(2, 255, 0, 0);
 		leds.setPixelColor(3, 255, 0, 0);
 		leds.setPixelColor(4, 255, 0, 0);
    	leds.setPixelColor(5, 255, 0, 0);
		leds.setPixelColor(6, 255, 0, 0);
 		leds.setPixelColor(7, 255, 0, 0);
 		leds.setPixelColor(8, 255, 0, 0);
 		leds.setPixelColor(9, 255, 0, 0);
    	leds.setPixelColor(10, 255, 255, 254);
		leds.setPixelColor(11, 255, 255, 254);
    	leds.show();
    	tone(13, 1500);
    	delay(500);
    	leds.setPixelColor(0, 255, 0, 0);
		leds.setPixelColor(1, 255, 0, 0);
 		leds.setPixelColor(2, 255, 0, 0);
 		leds.setPixelColor(3, 255, 0, 0);
 		leds.setPixelColor(4, 255, 0, 0);
    	leds.setPixelColor(5, 255, 0, 0);
		leds.setPixelColor(6, 255, 0, 0);
 		leds.setPixelColor(7, 255, 0, 0);
 		leds.setPixelColor(8, 255, 0, 0);
 		leds.setPixelColor(9, 255, 0, 0);
    	leds.setPixelColor(10, 255, 0, 0);
		leds.setPixelColor(11, 255, 0, 0);
    	leds.show();
    	noTone (13);
    	delay(500);
 		}
  		else 	
        {
    	(Ledjes, LOW);			
    	leds.setPixelColor(0, 0, 255, 0);
		leds.setPixelColor(1, 0, 255, 0);
 		leds.setPixelColor(2, 0, 255, 0);
 		leds.setPixelColor(3, 0, 255, 0);
 		leds.setPixelColor(4, 0, 255, 0);
    	leds.setPixelColor(5, 0, 255, 0);
		leds.setPixelColor(6, 0, 255, 0);
 		leds.setPixelColor(7, 0, 255, 0);
 		leds.setPixelColor(8, 0, 255, 0);
 		leds.setPixelColor(9, 0, 255, 0);
    	leds.setPixelColor(10, 0, 255, 0);
		leds.setPixelColor(11, 0, 255, 0);
  		leds.show();
  		}
}
