/*
MIT License

Copyright (c) 2024 Arghyadeep Debnath

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

YouTube Channel https://www.youtube.com/@soelectronics
*/


int analogPin = 5;   // A5 
int val = 0;          
int led = 13;        // LED connected to Digital pin D11

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // reads in the values from analog 5 and
  if(val >= 1){
    val = constrain(val, 1, 100);                                     
    val = map(val, 1, 100, 1, 255);
    analogWrite(led, val);
   }
   else
   {
    analogWrite(led, 0); // to turn off the light if there is no EMF detected
  }
  Serial.println(val);
}
