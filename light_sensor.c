/*
    Project name: ESP32 Light Sensor (LDR)
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-light-sensor
*/

// Analog pin connected to LDR
const int ldrPin = 34; // GPIO 34 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from LDR
  int ldrValue = analogRead(ldrPin);

  // Print the raw LDR value to Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Convert analog value to voltage (0-3.3V)
  float voltage = ldrValue * (3.3 / 4095.0); // For ESP32 ADC, 12-bit resolution (0-4095)

  // Print the voltage value to Serial Monitor
  Serial.print("Voltage (V): ");
  Serial.println(voltage);

  // Add a delay before the next reading
  delay(1000);
}
