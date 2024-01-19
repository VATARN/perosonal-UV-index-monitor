#include <M5StickCPlus.h>

const int uvSensorPin = 0; // UV sensor connected to G0

void setup() {
  M5.begin();
  //Setting the display to make it clear and readable
  M5.Lcd.setRotation(3);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.setTextSize(2.5);
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(uvSensorPin); // Read the UV sensor value
  float voltage = sensorValue * (5.0 / 4095.0); // Convert to voltage assuming 5V reference

  // Calculate the slopes for the two linear regions
  float slope1 = 1.0 / 0.250; // Slope below 250mV
  float slope2 = (11.0 - 1.0) / (1.170 - 0.250); // Slope above 250mV

  // Initialize UV Index
  float uvIndex = 0;

  // Convert voltage (in mV) to UV Index using the two slopes
  if (voltage <= 0.250) {
    uvIndex = voltage * slope1;
  } else if (voltage > 0.250 && voltage <= 1.160) {
    uvIndex = 1.0 + (voltage - 0.250) * slope2;
  }

  //Including SPF calculations soon!!

  // Display the calculated UV Index
  M5.Lcd.setCursor(10, 30);
  M5.Lcd.printf("UV Index: %.2f", uvIndex);
  // Display the UV level category based on the UV Index
  M5.Lcd.setCursor(10, 60);
  if (uvIndex < 3) { 
    M5.Lcd.printf("Low UV Level");
  } else if (uvIndex < 6) { 
    M5.Lcd.printf("Medium UV Level");
  } else if (uvIndex < 8) {
    M5.Lcd.printf("High UV Level");
  } else {
    M5.Lcd.printf("Extreme UV Level");
  };

  // Print to serial for debugging
  Serial.print("sensorValue: ");
  Serial.print(sensorValue);
  Serial.print(", Voltage: ");
  Serial.print(voltage);
  Serial.print("V, UV Index: ");
  Serial.println(uvIndex);

  delay(2000); // Update every 2 seconds
  // Clear the previous readings on the screen
  M5.Lcd.fillRect(0, 0, 160, 80, BLACK);
}
