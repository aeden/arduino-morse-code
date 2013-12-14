/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int ditDelay = 150;
int daDelay = 500;
int letterDelay = 400;
int loopDelay = 1000;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);  
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  String text = "abcdefghijklmnopqr";
  for (int index = 0; index < text.length(); index++) {
    switch (text[index]) {
    case 'a':
      a();
      break;
    case 'b':
      b();
      break;
    case 'c':
      c();
      break;
    case 'd':
      d();
      break;
    case 'e': 
      e();
      break;
    case 'f':
      f();
      break;
    case 'g':
      g();
      break;
    case 'h':
      h();
      break;
    case'i':
      i();
      break;
    case'j':
      j();
      break;
    case'k':
      k();
      break;
    case'l':
      l();
      break;
    case'm':
      m();
      break;
    case'n':
      n();
      break;
    case'o':
      o();
      break;
    case'p':
      p();
      break;  
    case'q':
      q();
      break;
    case 'r':
      r();
      break; 
    case 's':
      s();
      break;
    case 't':
      t();
      break;
    case 'u':
      u();
      break;
    case 'v':
      v();
      break;


    default:
      break; 
    }
    delay(letterDelay);
  }
  delay(loopDelay);               // wait for a second
}

void dit() {
  digitalWrite(led, HIGH);
  delay(ditDelay);
  digitalWrite(led, LOW);
  delay(ditDelay);
}

void da() {
  digitalWrite(led, HIGH);
  delay(daDelay);
  digitalWrite(led, LOW);
  delay(daDelay);
}

void a() {
  Serial.println("a . -");
  dit();
  da();
}

void b() {
  Serial.println("b - . . .");
  da();
  dit();
  dit();
  dit(); 
}

void c() {
  Serial.println("c - . - .");
  da();
  dit();
  da();
  dit();
}

void d() {
  Serial.println("d-..");
  da();
  dit();
  dit();
}

void e() {
  Serial.println("e.");
  dit();
}
void f() {
  Serial.println("f..-.");
  dit();
  dit(); 
  da();
  dit();
}

void g() {
  Serial.println("g--.");
  da();
  da();
  dit();
}

void h() {
  Serial.println("h....");
  dit();
  dit();
  dit();
}

void i(){
  Serial.println("i..");
  dit();
  dit(); 
}

void j(){
  Serial.println("j.---");
  dit();
  da();
  da();
  da();
}  

void k(){
  Serial.println("k-.-");
  da();
  dit();
  da();
}

void l(){
  Serial.println("l.-..");
  dit();
  da();
  dit();
  dit();
}  
void m(){
  Serial.println("m--");
  da();
  da();
}    

void n(){
  Serial.println("n-.");
  da();
  dit();
} 

void o(){
  Serial.println("o---");
  da();
  da();
  da();
}

void p(){
  Serial.println("p.--.");
  dit();
  da();
  da();
  dit();
}

void q(){
  Serial.println("q--.-");
  da();
  da();
  dit();
  da();
}

void r(){
  Serial.println("r.-.");
  dit();
  da();
  dit();
}   

void s(){
  Serial.println("s...");
  dit();
  dit();
  dit();
}

void t(){
  Serial.println("t-");
  da();
}  
void u(){
  Serial.println("u..-");
  dit();
  dit();
  da();
}

void v() {
  Serial.println("v...-");
  dit();
  dit();
  dit();
  da();
}

