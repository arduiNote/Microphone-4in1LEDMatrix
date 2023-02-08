#include <MD_MAX72xx.h>


#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4

// Create an instance of the LED matrix
MD_MAX72XX mx = MD_MAX72XX(HARDWARE_TYPE, 10, 4);

void setup() 
{

  mx.begin();
}

void loop() 
{
  // Read the analog value from pin A0
  int sensorValue = analogRead(A0);

  mx.clear();
  if (sensorValue >= 50)
    mx.setRow(7, 0b11111111);
  if (sensorValue >= 100)
    mx.setRow(6, 0b11111111);
  if (sensorValue >= 200)
    mx.setRow(5, 0b11111111);
  if (sensorValue >= 300)
    mx.setRow(4, 0b11111111);
  if (sensorValue >= 400)
    mx.setRow(3, 0b11111111);
  if (sensorValue >= 500)
    mx.setRow(2, 0b11111111);
  if (sensorValue >= 600)
    mx.setRow(1, 0b11111111);
  if (sensorValue >= 700)
    mx.setRow(0, 0b11111111);

    
}
