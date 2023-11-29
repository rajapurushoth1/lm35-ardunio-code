
const int temperaturePin = A0; 
const int ledPin = 13; 
const int temperature = 30;
int temperatureValue = 0;
int blink = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  temperatureValue = analogRead(temperaturePin);
  float temperatureCelsius = (temperatureValue * 5.0) / 1023.0 * 100.0;
  if (temperatureCelsius < temperature) {
    blink = 250;
  } else {
    blink = 500;
  }

  digitalWrite(ledPin, HIGH);
  delay(blink);
  digitalWrite(ledPin, LOW);
  delay(blink);

}
