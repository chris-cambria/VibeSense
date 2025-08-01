// Sound-to-Vibration Basic Demo (ESP32 + Mic + Motor)

const int micPin = 34;      
const int motorPin = 18;    

int threshold = 2000;       

void setup() {
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
  Serial.begin(115200);
}

void loop() {
  int micValue = analogRead(micPin);
  Serial.println(micValue);

  if (micValue > threshold) {
    digitalWrite(motorPin, HIGH);  
    delay(200);                    
    digitalWrite(motorPin, LOW);
  }

  delay(50); 
}
