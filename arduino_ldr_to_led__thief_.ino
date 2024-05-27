const int ledPin = 2;  // Pin where the LED is connected
const int ldrPin = A0;  // Pin where the LDR is connected
const int threshold = 677; // Threshold value for light detection

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Initialize serial communication for debugging
  Serial.begin(115200);
  Serial.println("LDR Sensor with LED control");
}

void loop() {
  // Read the value from the LDR
  int ldrValue = analogRead(ldrPin);
  
  // Print the LDR value to the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  
  // Check if the LDR value is above the threshold
  if (ldrValue > threshold) {
    // If the LDR value is above the threshold, turn on the LED
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
    
  } else {
    // If the LDR value is below the threshold, turn off the LED
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON");
    
  
  // Small delay to avoid flooding the Serial Monitor
  delay(2000);
}
}