//Nam:Stephanie Caliwag
//Date:29/9/20
//Description:Emergency Vehicle

int blueLED = 13;
int redLED=12;
void setup()
{
	pinMode(blueLED, OUTPUT);
	pinMode(redLED, OUTPUT);
}
	void loop()
{
    //Emergency vehicle
	digitalWrite(blueLED, HIGH);
	delay(100); // Wait for 1000 millisecond(s)
	digitalWrite(blueLED, LOW);
	delay(100); // Wait for 1000 millisecond(s)

	digitalWrite(redLED, HIGH);
	delay(100); // Wait for 1000 millisecond(s)
	digitalWrite(redLED, LOW);
	delay(100); // Wait for 1000 millisecond(s)
}
