
void setup() {
Serial.begin(9600);
pinMode(2, OUTPUT);
digitalWrite(2, HIGH);
pinMode(3, OUTPUT);
digitalWrite(3, HIGH);
pinMode(4, OUTPUT);
digitalWrite(4, HIGH);
pinMode(5, OUTPUT);
digitalWrite(5, HIGH);
pinMode(6, OUTPUT);
digitalWrite(6, HIGH);
pinMode(7, OUTPUT);
digitalWrite(7, HIGH);
pinMode(8, OUTPUT);
digitalWrite(8, HIGH);
pinMode(9, OUTPUT);
digitalWrite(9, HIGH);
pinMode(10, OUTPUT);
digitalWrite(10, HIGH);
pinMode(11, OUTPUT);
digitalWrite(11, HIGH);
pinMode(12, OUTPUT);
digitalWrite(12, HIGH);
pinMode(13, OUTPUT);
digitalWrite(13, HIGH);
pinMode(A0, OUTPUT);
digitalWrite(A0, HIGH);
pinMode(A1, OUTPUT);
digitalWrite(A1, HIGH);
pinMode(A2, OUTPUT);
digitalWrite(A2, HIGH);
pinMode(A3, OUTPUT);
digitalWrite(A3, HIGH);
pinMode(A4, OUTPUT);
digitalWrite(A4, HIGH);
pinMode(A5, OUTPUT);
digitalWrite(A5, HIGH);
}

void loop() {
char c = Serial.read();
if (c == 'A') pinMode(2, HIGH);
if (c == 'a') pinMode(2, LOW);

if (c == 'B') pinMode(3, HIGH);
if (c == 'b') pinMode(3, LOW);

if (c == 'C') pinMode(4, HIGH);
if (c == 'c') pinMode(4, LOW);

if (c == 'D') pinMode(5, HIGH);
if (c == 'd') pinMode(5, LOW);

if (c == 'E') pinMode(6, HIGH);
if (c == 'e') pinMode(6, LOW);

if (c == 'F') pinMode(7, HIGH);
if (c == 'f') pinMode(7, LOW);

if (c == 'G') pinMode(8, HIGH);
if (c == 'g') pinMode(8, LOW);

if (c == 'H') pinMode(9, HIGH);
if (c == 'h') pinMode(9, LOW);

if (c == 'I') pinMode(10, HIGH);
if (c == 'i') pinMode(10, LOW);

if (c == 'J') pinMode(11, HIGH);
if (c == 'j') pinMode(11, LOW);

if (c == 'L') pinMode(12, HIGH);
if (c == 'l') pinMode(12, LOW);

if (c == 'M') pinMode(13, HIGH);
if (c == 'm') pinMode(13, LOW);

if (c == 'N') pinMode(A0, HIGH);
if (c == 'n') pinMode(A0, LOW);

if (c == 'O') pinMode(A1, HIGH);
if (c == 'o') pinMode(A1, LOW);

if (c == 'P') pinMode(A2, HIGH);
if (c == 'p') pinMode(A2, LOW);

if (c == 'Q') pinMode(A3, HIGH);
if (c == 'q') pinMode(A3, LOW);

if (c == 'R') pinMode(A4, HIGH);
if (c == 'r') pinMode(A4, LOW);

if (c == 'S') pinMode(A5, HIGH);
if (c == 's') pinMode(A5, LOW);

}
