/*
MIT License

Copyright (c) 2023 Arghyadeep Debnath

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/



const int ledPin = 13;  // Assuming the LED is connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  // Blink the LED 10 times
  for (int i = 0; i < 10; i++) {  // led automation starting for 0th times and increament by 1 and stop on 9th time means total 10 times
    digitalWrite(ledPin, HIGH);  // Turn the LED on
    delay(100);  // Wait for 0.1 seconds (100 milliseconds)
    digitalWrite(ledPin, LOW);   // Turn the LED off
    delay(100);  // Wait for another 0.1 seconds
  }

  // Turn off the LED for 5 seconds
  digitalWrite(ledPin, LOW);   // Turn the LED off
  delay(5000);  // Wait for 5 seconds
}
