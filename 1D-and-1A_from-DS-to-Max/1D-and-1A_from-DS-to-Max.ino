
const int analogInPin = A3;  // Analog input pin that the potentiometer is attached to
const int buttonPin = 12;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

//variables
int sensorValue = 0;  //value read from the analog in pin
int bstate = 0;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

    sensorValue = analogRead(analogInPin);  // read the analog in value of the potentiometer
    
    buttonState = digitalRead(buttonPin); // read the state of the pushbutton value
    
    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
     if (buttonState == HIGH) {
       bstate = 1;
      } else {
       bstate = 0;
      }


    Serial.print(sensorValue); // print the results to the serial monitor
    Serial.print(F(" "));      // put a space between what you are sending so we can extract each from a list in Max; F() doesn't waste RAM on this string that will be the same all the time anyway
    Serial.print(bstate);   // was Serial.print(bstate, 2); so testing if removing the 2 is ok

    Serial.println();  // Prints data to the serial port as human-readable ASCII text followed by a carriage return character (ASCII 13, or '\r') and a newline character (ASCII 10, or '\n').


}