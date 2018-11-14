

//Stavene i displayet
const int a = 7;
const int b = 8;
const int c = 9;
const int d = 10;
const int e = 11;
const int f = 12;
const int g = 13;
const int h = 6;
void setup()
{

  // Sette stavene til output
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);  
  pinMode(h, OUTPUT);    
}



void loop() {
  
// Bokstav D
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, HIGH);
delay(800);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(g, LOW);
delay(20);  
  
// Bokstav E
    digitalWrite(a, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
delay(800);
    digitalWrite(a, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
delay(20);

//Bokstav S
    digitalWrite(a, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
delay(800);
    digitalWrite(a, LOW);
    digitalWrite(d, LOW);
    digitalWrite(c, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
delay(20);

// Bokstav P
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(e, HIGH);
delay(800);
    digitalWrite(a, LOW);
    digitalWrite(f, LOW);
    digitalWrite(b, LOW);
    digitalWrite(g, LOW);
    digitalWrite(e, LOW);
delay(20);

// Bokstav A
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(c, HIGH);
delay(800);
    digitalWrite(a, LOW);
    digitalWrite(f, LOW);
    digitalWrite(b, LOW);
    digitalWrite(g, LOW);
    digitalWrite(e, LOW);
    digitalWrite(c, LOW);
delay(20);

// Bokstav C
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
delay(800);
    digitalWrite(a, LOW);
    digitalWrite(f, LOW);
    digitalWrite(e, LOW);
    digitalWrite(d, LOW);
delay(20);

// Bokstav I
    digitalWrite(f, HIGH);
    digitalWrite(e, HIGH);
delay(800);
    digitalWrite(f, LOW);
    digitalWrite(e, LOW);
delay(20);

// Bokstav T
    digitalWrite(f, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(a, HIGH);
delay(800);
    digitalWrite(f, LOW);
    digitalWrite(e, LOW);    
    digitalWrite(a, LOW);
delay(20);

// Bokstav O
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(c, HIGH);
delay(800);
    digitalWrite(a, LOW);
    digitalWrite(f, LOW);
    digitalWrite(b, LOW);
    digitalWrite(e, LOW);
    digitalWrite(d, LOW);
    digitalWrite(c, LOW);
delay(20);


}
