//Arduino Uno
#define ProxSensor 2
int potPin= A0;  //Deklarasi pin potensiometer pin A0
int LEDPin= 9;  // Deklarasi pin LED ke pin 9
int inputVal = 0;
int readValue;  // Use this variable to read Potentiometer
int writeValue; // Use this variable for writing to LED
 
void setup() {
  pinMode(potPin, INPUT);  
  pinMode(LEDPin, OUTPUT);
  pinMode(ProxSensor,INPUT);
  Serial.begin(9600);      // turn on Serial Port
}
 
void loop() {
  if (digitalRead(ProxSensor)==HIGH)      //Check the sensor output
  {
    digitalWrite(13, readValue);   // tergantung potensio
  }
  else
  {
    digitalWrite(13, LOW);    // set the LED off
  }
inputVal = digitalRead(ProxSensor);
  
 readValue = analogRead(potPin);  //Read the voltage on the Potentiometer
 writeValue = (255./1023.) * readValue; //Calculate Write Value for LED
 analogWrite(LEDPin, writeValue);      //Write to the LED
 Serial.print("You are writing a value of ");  //for debugging print your values
 Serial.println(writeValue);
 
}
