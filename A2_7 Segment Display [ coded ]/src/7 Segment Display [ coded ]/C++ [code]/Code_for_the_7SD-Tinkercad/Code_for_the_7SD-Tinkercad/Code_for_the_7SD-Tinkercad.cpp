﻿// C++ code

void setup()
{
	pinMode(1, OUTPUT);
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
}

void loop()
{
	digitalWrite(1, HIGH);//0
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(6, HIGH);
	digitalWrite(7, LOW);
	delay(1000);
	digitalWrite(1, LOW);//1
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, LOW);
	digitalWrite(5, LOW);
	digitalWrite(6, LOW);
	digitalWrite(7, LOW);
	delay(1000);
	digitalWrite(1, HIGH);//2
	digitalWrite(2, HIGH);
	digitalWrite(3, LOW);
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(6, LOW);
	digitalWrite(7, HIGH);
	delay(1000);
	digitalWrite(1, HIGH);//3
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(5, LOW);
	digitalWrite(6, LOW);
	digitalWrite(7, HIGH);
	delay(1000);
	digitalWrite(1, LOW);//4
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, LOW);
	digitalWrite(5, LOW);
	digitalWrite(6, HIGH);
	digitalWrite(7, HIGH);
	delay(1000);
	digitalWrite(1, HIGH);//5
	digitalWrite(2, LOW);
	digitalWrite(3, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(5, LOW);
	digitalWrite(6, HIGH);
	digitalWrite(7, HIGH);
	delay(1000);
	digitalWrite(1, HIGH);//6
	digitalWrite(2, LOW);
	digitalWrite(3, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(6, HIGH);
	digitalWrite(7, HIGH);
	delay(1000);
	digitalWrite(1, HIGH);//7
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, LOW);
	digitalWrite(5, LOW);
	digitalWrite(6, HIGH);
	digitalWrite(7, LOW);
	delay(1000);
	digitalWrite(1, HIGH);//8
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(6, HIGH);
	digitalWrite(7, HIGH);
	delay(1000);
	digitalWrite(1, HIGH);//9
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, LOW);
	digitalWrite(5, LOW);
	digitalWrite(6, HIGH);
	digitalWrite(7, HIGH);
	delay(1000);

	digitalWrite(8, HIGH);//0
	digitalWrite(9, HIGH);
	digitalWrite(10, HIGH);
	digitalWrite(11, HIGH);
	delay(1000);
	digitalWrite(8, HIGH);//n
	digitalWrite(9, HIGH);
	digitalWrite(10, HIGH);
	digitalWrite(11, LOW);
	delay(1000);

	digitalWrite(8, LOW);//
	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	delay(1000);
}