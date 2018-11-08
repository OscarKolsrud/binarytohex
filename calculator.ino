//Code written by Oscar S. Kolsrud

//Trykkknappene
const int knapp1 = 2;
const int knapp2 = 3;
const int knapp3 = 4;
const int knapp4 = 5;

//Stavene i displayet
const int a = 12;
const int b = 10;
const int c = 7;
const int d = 8;
const int e = 9;
const int f = 11;
const int g = 13;
const int h = 6;

int knapp1stat, knapp2stat, knapp3stat, knapp4stat;  // Variabler for statusen av knappene

int knapp1trykket, knapp2trykket, knapp3trykket, knapp4trykket;

int totalTrykk;

void setup()
{
  // La trykkknappene være input
  pinMode(knapp1, INPUT);
  pinMode(knapp2, INPUT);
  pinMode(knapp3, INPUT);
  pinMode(knapp4, INPUT);

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

void loop()
{
  knapp1stat = digitalRead(knapp1);
  knapp2stat = digitalRead(knapp2);
  knapp3stat = digitalRead(knapp3);
  knapp4stat = digitalRead(knapp4);

  if ((knapp1stat == LOW)) {
    knapp1trykket = 1;
  } else {
    knapp1trykket = 0;
  }

    if ((knapp2stat == LOW)) {
    knapp2trykket = 1;
  } else {
    knapp2trykket = 0;
  }

    if ((knapp3stat == LOW)) {
    knapp3trykket = 1;
  } else {
    knapp3trykket = 0;
  }

    if ((knapp4stat == LOW)) {
    knapp4trykket = 1;
  } else {
    knapp4trykket = 0;
  }

  totalTrykk = knapp1trykket + knapp2trykket + knapp3trykket + knapp4trykket;

    
  // Tall 1
  if ((knapp1stat == LOW) && (totalTrykk == 1)) {
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
      delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
  // Tall 2
  if ((knapp2stat == LOW) && (totalTrykk == 1)) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
    }
  //Tall 3
  if ((knapp2stat == LOW) && (knapp1stat == LOW) && (totalTrykk == 2)) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
    }
  //Tall 4
  if ((knapp3stat == LOW) && (totalTrykk == 1)) {
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
    }
  //Tall 5
  if ((knapp1stat == LOW) && (knapp3stat == LOW) && (totalTrykk == 2)){
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
  //Tall 6
  if ((knapp2stat == LOW) && (knapp3stat == LOW) && (totalTrykk == 2)) {
    digitalWrite(a, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
  //Tall 7
  if ((knapp1stat == LOW) && (knapp2stat == LOW) && (knapp3stat == LOW) && (totalTrykk == 3)) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
  //Tall 8
  if ((knapp4stat == LOW) && (totalTrykk == 1)) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
  //Tall 9
  if ((knapp1stat == LOW) && (knapp4stat == LOW) && (totalTrykk == 2)) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
  //Bokstav A
  if ((knapp4stat == LOW) && (knapp2stat == LOW) && (totalTrykk == 2)) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
   //Bokstav B
  if ((knapp4stat == LOW) && (knapp2stat == LOW) && (knapp1stat == LOW) && (totalTrykk == 3)) {
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
    //Bokstav C
  if ((knapp4stat == LOW) && (knapp3stat == LOW) && (totalTrykk == 2)) {
    digitalWrite(a, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
    //Bokstav D
  if ((knapp4stat == LOW) && (knapp3stat == LOW) && (knapp1stat == LOW) && (totalTrykk == 3)) {
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(g, HIGH);
        delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
    //Bokstav E
  if ((knapp4stat == LOW) && (knapp2stat == LOW) && (knapp3stat == LOW) && (totalTrykk == 3)) {
    digitalWrite(a, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
            delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
    //Bokstav F
  if ((knapp4stat == LOW) && (knapp2stat == LOW) && (knapp1stat == LOW) && (knapp3stat == LOW) && (totalTrykk == 4)) {
    digitalWrite(a, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
            delay(5);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, LOW);
  }
}
