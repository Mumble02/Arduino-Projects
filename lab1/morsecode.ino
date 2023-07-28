//Name:Stephanie Caliwag
//Date:29/9/20
//Description:Initial Morse Code

int blueLED = 13;
int dot=100;
int dash=1000;
int offtime=700;
void setup()
{
	pinMode(blueLED, OUTPUT);
}
	void loop()
{
    // Letter S dot-dot-dot
	digitalWrite(blueLED, HIGH);
	delay(dot); // Wait for 1000 millisecond(s)
	digitalWrite(blueLED, LOW);
	delay(offtime); // Wait for 1000 millisecond(s)
      
    digitalWrite(blueLED, HIGH);
	delay(dot); // Wait for 1000 millisecond(s)
	digitalWrite(blueLED, LOW);
	delay(offtime); // Wait for 1000 millisecond(s)
      
    digitalWrite(blueLED, HIGH);
	delay(dot); // Wait for 1000 millisecond(s)
	digitalWrite(blueLED, LOW);
	delay(offtime); // Wait for 1000 millisecond(s)
      
    //Letter C dash-dot
    digitalWrite(blueLED, HIGH);
	delay(dash); // Wait for 1000 millisecond(s)
	digitalWrite(blueLED, LOW);
	delay(offtime); // Wait for 1000 millisecond(s)
    
    digitalWrite(blueLED, HIGH);
	delay(dot); // Wait for 1000 millisecond(s)
	digitalWrite(blueLED, LOW);
	delay(offtime); // Wait for 1000 millisecond(s)
}
