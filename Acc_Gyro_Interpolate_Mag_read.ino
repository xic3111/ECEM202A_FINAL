#include <Arduino_LSM9DS1.h>

const int numSamples = 6000;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }

  Serial.println("acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z");
}

void loop() {
  float acc_x, acc_y, acc_z, gyro_x, gyro_y, gyro_z;
  int samplesRead = 0;
  //Time = millis();

  while(samplesRead < numSamples) {
    if (IMU.accelerationAvailable()&&IMU.gyroscopeAvailable()) {
      IMU.readAcceleration(acc_x, acc_y, acc_z);
      IMU.readGyroscope(gyro_x, gyro_y, gyro_z);
      
//      if(IMU.magneticFieldAvailable()) {
//        IMU.readMagneticField(mag_x, mag_y, mag_z);
//      }
//      else {
//        //Keep previous values
//      }
      
      Serial.print(acc_x,3);
      Serial.print(',');
      Serial.print(acc_y,3);
      Serial.print(',');
      Serial.print(acc_z,3);
      Serial.print(',');
      Serial.print(gyro_x,3);
      Serial.print(',');
      Serial.print(gyro_y,3);
      Serial.print(',');
      Serial.print(gyro_z,3);
//      Serial.print(',');
//      Serial.print(mag_x,3);
//      Serial.print(',');
//      Serial.print(mag_y,3);
//      Serial.print(',');
//      Serial.print(mag_z,3);
      Serial.println();
      samplesRead++;
    }
  }
  
  delay(60000);
}
