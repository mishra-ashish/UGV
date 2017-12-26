int sensor1Pin = A0;    // select the input pin for the potentiometer
int sensor1Value = 0;  // variable to store the value coming from the sensor
int sensor2Pin = A1;    // select the input pin for the potentiometer
int sensor2Value = 0;  // variable to store the value coming from the sensor
int sensor3Pin = A2;    // select the input pin for the potentiometer
int sensor3Value = 0;  // variable to store the value coming from the sensor
int sensor4Pin = A3;    // select the input pin for the potentiometer
int sensor4Value = 0;  // variable to store the value coming from the sensor

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensor1Value = analogRead(sensor1Pin);
  sensor2Value = analogRead(sensor2Pin);
  sensor3Value = analogRead(sensor3Pin);
  sensor4Value = analogRead(sensor4Pin);
  Serial.println(sensor1Value);
  Serial.println(sensor2Value);
  Serial.println(sensor3Value);
  Serial.println(sensor4Value);
  Serial.println();
  delay(1);        // delay in between reads for stability
}
