/*
mDr - main down red
sDg - side down green
ssDb - side side down blue
mUr - main up red
sUg - side up green

in1 - input 01 (for motor)
in2 - input 02 (for motor)
enA - enable pin foe L298D motor driver
*/

const int in1 = 2;
const int enA = 3;
const int in2 = 4;

const int mDr = 5;
const int mDg = 6;
const int mDb = 9;
const int sDb = 10;
const int sDr = 11;
const int ssDr = A0;
const int sDg = A1;
const int ssDg = 12;
const int ssDb = 13;

const int mUr = A2;
const int mUg = A3;
const int mUb = A4;
const int sUr = A5;
const int sUg = 7;
const int sUb = 8;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(mDr, OUTPUT);
  pinMode(mDg, OUTPUT);
  pinMode(mDb, OUTPUT);
  pinMode(sDr, OUTPUT);
  pinMode(sDg, OUTPUT);
  pinMode(sDb, OUTPUT);
  pinMode(ssDr, OUTPUT);
  pinMode(ssDg, OUTPUT);
  pinMode(ssDb, OUTPUT);
  pinMode(mUr, OUTPUT);
  pinMode(mUg, OUTPUT);
  pinMode(mUb, OUTPUT);
  pinMode(sUr, OUTPUT);
  pinMode(sUg, OUTPUT);
  pinMode(sUb, OUTPUT);

  digitalWrite(mDr, HIGH);
  digitalWrite(mDg, HIGH);
  digitalWrite(mDb, HIGH);
  digitalWrite(sDr, HIGH);
  digitalWrite(sDg, HIGH);
  digitalWrite(sDb, HIGH);
  digitalWrite(ssDr, HIGH);
  digitalWrite(ssDg, HIGH);
  digitalWrite(ssDb, HIGH);
  digitalWrite(mUr, HIGH);
  digitalWrite(mUg, HIGH);
  digitalWrite(mUb, HIGH);
  digitalWrite(sUr, HIGH);
  digitalWrite(sUg, HIGH);
  digitalWrite(sUb, HIGH);

  analogWrite(enA, 180);
}

void loop() {

  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);

  pattern3();


  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(3000);

  pattern4();
  pattern5();
  pattern6();
  pattern7();
  pattern8();
  pattern9();
  pattern10();
  pattern11();
  pattern12();
  pattern13();
  pattern14();

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  pattern15();

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  pattern16();
  pattern17();
  pattern18();
  pattern19();
  pattern20();
  pattern21();
  pattern22();
  pattern23();
  pattern24();
}
