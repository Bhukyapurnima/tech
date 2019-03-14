/*
 *
 * Created:   Wed Mar 13 2019
 * Processor: Arduino Uno
 * Compiler:  Arduino AVR (Proteus)
 * Author : purnima
 */
#define gas_Pin 12

int gas_value;
//int flex_value;

void setup()
 { 
 Serial.begin(9600);
 pinMode(2,OUTPUT);
 pinMode(1,OUTPUT);
 
 }

void loop()
 { // put your main code here, to run repeatedly:
gas_value=digitalRead(gas_Pin);
//flex_value=digitalRead(flex_value);
Serial.print(gas_value);
//Serial.print(flex_value);

if(gas_value==1)
{
digitalWrite(2,HIGH);
Serial.print(gas_value);
Serial.print("HIGH VALUE");
digitalWrite(1,HIGH);
//digitalWrite(4,HIGH);
//Serial.print(flex_value);
//Serial.print("HIGH VALUE");
}
else{
digitalWrite(2,LOW);
Serial.print("LOW VALUE");
digitalWrite(1,LOW);
//digitalWrite(4,LOW);
//Serial.print("LOW VALUE");
}
delay(1000);
}
