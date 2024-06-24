# ESP32 Light Sensor (LDR) Project

## Project Overview
The ESP32 Light Sensor (LDR) project demonstrates how to interface a Light Dependent Resistor (LDR) with an ESP32 microcontroller to measure ambient light levels. LDRs are analog sensors whose resistance changes based on the intensity of light falling on them. This project reads the analog value from the LDR, converts it to a voltage level, and displays the results on the Serial Monitor.

## Components Needed
- ESP32 Microcontroller
- Light Dependent Resistor (LDR)
- Resistor (optional, for voltage divider)
- Jumper Wires
- Breadboard

## Block Diagram
*(If available, provide a visual representation of your circuit setup)*

## Circuit Setup
1. **Connecting LDR to ESP32:**
   - Connect one leg of the LDR to GPIO pin 34 (analog input A2) on the ESP32.
   - Connect the other leg of the LDR to 3.3V or 5V (depending on your LDR specifications).
   - Optionally, use a resistor in series with the LDR to create a voltage divider for more accurate readings.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function with `Serial.begin(9600)`.
   - Define the LDR pin as an input using `pinMode(ldrPin, INPUT)`.

2. **Operation:**
   - In the `loop()` function:
     - Read the analog value from the LDR using `analogRead(ldrPin)`.
     - Print the raw analog value and converted voltage value to the Serial Monitor.
     - Convert the analog value to voltage using the formula `voltage = ldrValue * (3.3 / 4095.0)` (for ESP32 ADC, 12-bit resolution).
     - Add a delay between readings to avoid rapid serial output and allow time for the LDR to stabilize.

3. **Considerations:**
   - **Voltage Divider:** If using a voltage divider circuit, calculate the resistor value based on the LDR's resistance range and desired voltage range.
   - **Light Conditions:** Ensure the LDR is exposed to varying light conditions for testing and calibration.
   - **Calibration:** Calibrate the LDR readings based on the specific application requirements and ambient light levels.

## Applications
- **Automatic Lighting Control:** Adjust lighting based on ambient light levels.
- **Environmental Monitoring:** Monitor natural light intensity in outdoor environments.
- **Energy Efficiency:** Optimize energy usage by controlling lighting systems based on daylight levels.

## Notes
- **Analog Input:** ESP32 ADC has a 12-bit resolution (0-4095), converting to a voltage range of 0-3.3V.
- **Serial Output:** Use the Serial Monitor for real-time monitoring and debugging of LDR readings and voltage values.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Light Sensor (LDR)](https://projectslearner.com/learn/esp32-light-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner