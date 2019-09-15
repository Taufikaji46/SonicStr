//Arduino Uno
#define encoderA 3 // Pin 3
#define encoderB 5 // Pin 5
long encoder_pulse_counter = 0;
long direction = 1;

void encoderPinChangeA()
{
    encoder_pulse_counter += 1;
    direction = digitalRead(encoderA) == digitalRead(encoderB) ? -1 : 1;
}

void encoderPinChangeB()
{
    encoder_pulse_counter += 1;
    direction = digitalRead(encoderA) != digitalRead(encoderB) ? -1 : 1;
}

void setup() 
{
    Serial.begin(9600);
    pinMode(encoderA, INPUT_PULLUP);
    pinMode(encoderB, INPUT_PULLUP);
    attachInterrupt(0, encoderPinChangeA, CHANGE);
    attachInterrupt(1, encoderPinChangeB, CHANGE);
}

void loop()
{
    long speed = encoder_pulse_counter/1024.00*60; // For encoder plate with 1024 Pulses per Revolution
    Serial.print("RPM: ");
    Serial.println(direction*speed);
    encoder_pulse_counter = 0; // Clear variable just before counting again 
    delay(1000);
}
