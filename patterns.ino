void pattern1() {
  analogWrite(mDr, 255);
  analogWrite(mDg, 255);
  analogWrite(mDb, 255);
  digitalWrite(sDb, HIGH);
  digitalWrite(sDr, HIGH);
  digitalWrite(ssDr, HIGH);
  digitalWrite(sDg, HIGH);
  digitalWrite(ssDg, HIGH);
  digitalWrite(ssDb, HIGH);
  digitalWrite(mUr, HIGH);
  digitalWrite(mUg, HIGH);
  digitalWrite(mUb, HIGH);
  digitalWrite(sUr, HIGH);
  digitalWrite(sUg, HIGH);
  digitalWrite(sUb, HIGH);
}

void pattern2() {
  analogWrite(mDr, 0);
  analogWrite(mDg, 0);
  analogWrite(mDb, 0);
  digitalWrite(sDb, LOW);
  digitalWrite(sDr, LOW);
  digitalWrite(ssDr, LOW);
  digitalWrite(sDg, LOW);
  digitalWrite(ssDg, LOW);
  digitalWrite(ssDb, LOW);
  digitalWrite(mUr, LOW);
  digitalWrite(mUg, LOW);
  digitalWrite(mUb, LOW);
  digitalWrite(sUr, LOW);
  digitalWrite(sUg, LOW);
  digitalWrite(sUb, LOW);
}

void pattern3() {
  analogWrite(mDr, 255);
  analogWrite(mDg, 0);
  analogWrite(mDb, 255);
  digitalWrite(sDb, HIGH);
  digitalWrite(sDr, LOW);
  digitalWrite(ssDr, HIGH);
  digitalWrite(sDg, LOW);
  digitalWrite(ssDg, HIGH);
  digitalWrite(ssDb, LOW);
  digitalWrite(mUr, HIGH);
  digitalWrite(mUg, LOW);
  digitalWrite(mUb, HIGH);
  digitalWrite(sUr, LOW);
  digitalWrite(sUg, HIGH);
  digitalWrite(sUb, LOW);
}

void pattern4() {
  for (int x = 0; x < 5; x++) {

    digitalWrite(sDr, LOW);
    digitalWrite(ssDr, LOW);
    digitalWrite(mUr, LOW);
    digitalWrite(mDr, LOW);
    digitalWrite(sUr, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(ssDg, HIGH);
    digitalWrite(mUg, HIGH);
    digitalWrite(mDg, HIGH);
    digitalWrite(sUg, HIGH);
    digitalWrite(sDb, HIGH);
    digitalWrite(ssDb, HIGH);
    digitalWrite(mUb, HIGH);
    digitalWrite(mDb, HIGH);
    digitalWrite(sUb, HIGH);
    delay(500);
    digitalWrite(sDg, LOW);
    digitalWrite(ssDg, LOW);
    digitalWrite(mUg, LOW);
    digitalWrite(mDg, LOW);
    digitalWrite(sUg, LOW);
    digitalWrite(sDb, HIGH);
    digitalWrite(ssDb, HIGH);
    digitalWrite(mUb, HIGH);
    digitalWrite(mDb, HIGH);
    digitalWrite(sUb, HIGH);
    digitalWrite(sDr, HIGH);
    digitalWrite(ssDr, HIGH);
    digitalWrite(mUr, HIGH);
    digitalWrite(mDr, HIGH);
    digitalWrite(sUr, HIGH);
    delay(500);
    digitalWrite(sDb, LOW);
    digitalWrite(ssDb, LOW);
    digitalWrite(mUb, LOW);
    digitalWrite(mDb, LOW);
    digitalWrite(sUb, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(ssDg, HIGH);
    digitalWrite(mUg, HIGH);
    digitalWrite(mDg, HIGH);
    digitalWrite(sUg, HIGH);
    digitalWrite(sDr, HIGH);
    digitalWrite(ssDr, HIGH);
    digitalWrite(mUr, HIGH);
    digitalWrite(mDr, HIGH);
    digitalWrite(sUr, HIGH);
    delay(500);
  }
}

void pattern5() {
  for (int x = 0; x < 5; x++) {
    pattern1();
    delay(500);
    pattern2();
    delay(500);
  }
}

void pattern6() {
  for (int x = 0; x < 5; x++) {
    digitalWrite(mUr, HIGH);
    delay(100);
    digitalWrite(mUr, LOW);
    digitalWrite(mUg, HIGH);
    delay(100);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, HIGH);
    delay(100);
    digitalWrite(mUb, LOW);
    digitalWrite(sUr, HIGH);
    delay(100);
    digitalWrite(sUr, LOW);
    digitalWrite(sUg, HIGH);
    delay(100);
    digitalWrite(sUg, LOW);
    digitalWrite(sUb, HIGH);
    delay(100);
    digitalWrite(sUb, LOW);
    digitalWrite(sDb, HIGH);
    delay(100);
    digitalWrite(sDb, LOW);
    digitalWrite(sDr, HIGH);
    delay(100);
    digitalWrite(sDr, LOW);
    digitalWrite(ssDr, HIGH);
    delay(100);
    digitalWrite(ssDr, LOW);
    digitalWrite(sDg, HIGH);
    delay(100);
    digitalWrite(sDg, LOW);
    digitalWrite(ssDg, HIGH);
    delay(100);
    digitalWrite(ssDg, LOW);
    digitalWrite(ssDb, HIGH);
    delay(100);
    digitalWrite(ssDb, LOW);
    analogWrite(mDr, 255);
    delay(100);
    analogWrite(mDr, 0);
    analogWrite(mDg, 255);
    delay(100);
    analogWrite(mDg, 0);
    analogWrite(mDb, 255);
    delay(100);
    analogWrite(mDb, 0);
  }
}

void pattern7() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(mDr, HIGH);
    digitalWrite(mDb, LOW);
    digitalWrite(sDr, HIGH);
    digitalWrite(sDb, LOW);
    digitalWrite(ssDr, HIGH);
    digitalWrite(ssDb, LOW);
    digitalWrite(sUr, HIGH);
    digitalWrite(sUb, LOW);
    digitalWrite(mUr, HIGH);
    digitalWrite(mUb, LOW);
    delay(500);
    digitalWrite(mDr, LOW);
    digitalWrite(mDg, HIGH);
    digitalWrite(sDr, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(ssDr, LOW);
    digitalWrite(ssDg, HIGH);
    digitalWrite(sUr, LOW);
    digitalWrite(sUg, HIGH);
    digitalWrite(mUr, LOW);
    digitalWrite(mUg, HIGH);
    delay(500);
    digitalWrite(mDg, LOW);
    digitalWrite(mDb, HIGH);
    digitalWrite(sDg, LOW);
    digitalWrite(sDb, HIGH);
    digitalWrite(ssDg, LOW);
    digitalWrite(ssDb, HIGH);
    digitalWrite(sUg, LOW);
    digitalWrite(sUb, HIGH);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, HIGH);
    delay(500);
  }
}

void pattern8() {
  for (int i = 0; i < 5; i++) {
    analogWrite(mDr, random(256));
    analogWrite(mDg, random(256));
    analogWrite(mDb, random(256));
    digitalWrite(sDb, random(2));
    digitalWrite(sDr, random(2));
    digitalWrite(ssDr, random(2));
    digitalWrite(sDg, random(2));
    digitalWrite(ssDg, random(2));
    digitalWrite(ssDb, random(2));
    digitalWrite(mUr, random(2));
    digitalWrite(mUg, random(2));
    digitalWrite(mUb, random(2));
    digitalWrite(sUr, random(2));
    digitalWrite(sUg, random(2));
    digitalWrite(sUb, random(2));
    delay(500);
  }
}


void pattern9() {
  for (int i = 0; i < 5; i++) {

    digitalWrite(sDb, LOW);
    digitalWrite(ssDb, LOW);
    digitalWrite(mUb, LOW);
    digitalWrite(sUb, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(ssDg, HIGH);
    digitalWrite(mUg, HIGH);
    digitalWrite(sUg, HIGH);
    digitalWrite(sDr, HIGH);
    digitalWrite(ssDr, HIGH);
    digitalWrite(mUr, HIGH);
    digitalWrite(sUr, HIGH);

    for (int r = 0; r < 256; r++) {
      analogWrite(mDr, r);
      delay(5);
    }
    for (int g = 0; g < 256; g++) {
      analogWrite(mDg, g);
      delay(5);
    }

    digitalWrite(sDg, LOW);
    digitalWrite(ssDg, LOW);
    digitalWrite(mUg, LOW);
    digitalWrite(sUg, LOW);
    digitalWrite(sDb, LOW);
    digitalWrite(ssDb, LOW);
    digitalWrite(mUb, LOW);
    digitalWrite(sUb, LOW);
    digitalWrite(sDr, HIGH);
    digitalWrite(ssDr, HIGH);
    digitalWrite(mUr, HIGH);
    digitalWrite(sUr, HIGH);

    for (int b = 0; b < 256; b++) {
      analogWrite(mDb, b);
      delay(5);
    }
    for (int r = 255; r >= 0; r--) {
      analogWrite(mDr, r);
      delay(5);
    }

    digitalWrite(sDr, LOW);
    digitalWrite(ssDr, LOW);
    digitalWrite(mUr, LOW);
    digitalWrite(sUr, LOW);
    digitalWrite(sDg, LOW);
    digitalWrite(ssDg, LOW);
    digitalWrite(mUg, LOW);
    digitalWrite(sUg, LOW);
    digitalWrite(sDb, LOW);
    digitalWrite(ssDb, LOW);
    digitalWrite(mUb, LOW);
    digitalWrite(sUb, LOW);

    for (int g = 255; g >= 0; g--) {
      analogWrite(mDg, g);
      delay(5);
    }
    for (int b = 255; b >= 0; b--) {
      analogWrite(mDb, b);
      delay(5);
    }
  }
}

void pattern10() {
  for (int i = 0; i < 5; i++) {
    int delayTime = 150;
    for (int i = 0; i < 3; i++) {
      digitalWrite(sDr, HIGH);
      digitalWrite(ssDr, HIGH);
      digitalWrite(sUr, HIGH);
      digitalWrite(mDr, HIGH);
      digitalWrite(mUr, HIGH);
      delay(delayTime);
      digitalWrite(sDr, LOW);
      digitalWrite(ssDr, LOW);
      digitalWrite(sUr, LOW);
      digitalWrite(mDr, LOW);
      digitalWrite(mUr, LOW);
      digitalWrite(sDg, HIGH);
      digitalWrite(ssDg, HIGH);
      digitalWrite(sUg, HIGH);
      digitalWrite(mDg, HIGH);
      digitalWrite(mUg, HIGH);
      delay(delayTime);
      digitalWrite(sDg, LOW);
      digitalWrite(ssDg, LOW);
      digitalWrite(sUg, LOW);
      digitalWrite(mDg, LOW);
      digitalWrite(mUg, LOW);
      digitalWrite(sDb, HIGH);
      digitalWrite(ssDb, HIGH);
      digitalWrite(sUb, HIGH);
      digitalWrite(mDb, HIGH);
      digitalWrite(mUb, HIGH);
      delay(delayTime);
      digitalWrite(sDb, LOW);
      digitalWrite(ssDb, LOW);
      digitalWrite(sUb, LOW);
      digitalWrite(mDb, LOW);
      digitalWrite(mUb, LOW);
      digitalWrite(sDg, HIGH);
      digitalWrite(ssDg, HIGH);
      digitalWrite(sUg, HIGH);
      digitalWrite(mDg, HIGH);
      digitalWrite(mUg, HIGH);
      delay(delayTime);
      digitalWrite(sDg, LOW);
      digitalWrite(ssDg, LOW);
      digitalWrite(sUg, LOW);
      digitalWrite(mDg, LOW);
      digitalWrite(mUg, LOW);
      digitalWrite(sDr, HIGH);
      digitalWrite(ssDr, HIGH);
      digitalWrite(sUr, HIGH);
      digitalWrite(mDr, HIGH);
      digitalWrite(mUr, HIGH);
      delay(delayTime);
      digitalWrite(sDr, LOW);
      digitalWrite(ssDr, LOW);
      digitalWrite(sUr, LOW);
      digitalWrite(mDr, LOW);
      digitalWrite(mUr, LOW);
    }
  }
}

void pattern11() {
  // Random sparkle
  for (int i = 0; i < 5; i++) {
    int pin = random(11) + 2;  // Random pin between 2 and 12
    int state = random(2);     // Random state (HIGH or LOW)
    digitalWrite(pin, state);
    delay(50);
    digitalWrite(pin, LOW);
  }
}

void pattern12() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(mUg, HIGH);
    digitalWrite(mUb, LOW);
    digitalWrite(mUr, HIGH);
    digitalWrite(mDg, HIGH);
    digitalWrite(mDb, LOW);
    digitalWrite(mDr, HIGH);
    delay(500);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, HIGH);
    digitalWrite(mUr, LOW);
    digitalWrite(sUg, HIGH);
    digitalWrite(sUb, LOW);
    digitalWrite(sUr, HIGH);
    digitalWrite(mDg, LOW);
    digitalWrite(mDb, HIGH);
    digitalWrite(mDr, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(sDb, LOW);
    digitalWrite(sDr, HIGH);
    digitalWrite(ssDg, HIGH);
    digitalWrite(ssDb, LOW);
    digitalWrite(ssDr, HIGH);
    delay(500);
    digitalWrite(sUg, LOW);
    digitalWrite(sUb, HIGH);
    digitalWrite(sUr, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(sDb, HIGH);
    digitalWrite(sDr, LOW);
    digitalWrite(ssDg, HIGH);
    digitalWrite(ssDb, HIGH);
    digitalWrite(ssDr, LOW);
  }
}

void pattern13() {
  for (int i = 0; i < 5; i++) {
    for (int i = 0; i <= 255; i++) {
      int brightness = (exp(sin(i * 3.14 / 255)) - 0.36787944) * 108.0;
      analogWrite(mDr, brightness);
      analogWrite(mDg, brightness);
      analogWrite(mDb, brightness);
      digitalWrite(sDb, brightness > 127 ? HIGH : LOW);
      digitalWrite(sDr, brightness > 127 ? HIGH : LOW);
      digitalWrite(ssDr, brightness > 127 ? HIGH : LOW);
      digitalWrite(sDg, brightness > 127 ? HIGH : LOW);
      digitalWrite(ssDg, brightness > 127 ? HIGH : LOW);
      digitalWrite(ssDb, brightness > 127 ? HIGH : LOW);
      digitalWrite(mUr, brightness > 127 ? HIGH : LOW);
      digitalWrite(mUg, brightness > 127 ? HIGH : LOW);
      digitalWrite(mUb, brightness > 127 ? HIGH : LOW);
      digitalWrite(sUr, brightness > 127 ? HIGH : LOW);
      digitalWrite(sUg, brightness > 127 ? HIGH : LOW);
      digitalWrite(sUb, brightness > 127 ? HIGH : LOW);
      delay(15);
    }
  }
}

void pattern14() {
  for (int i = 0; i < 5; i++) {
    for (int i = 0; i < 256; i += 8) {
      analogWrite(mDr, i);
      delay(30);
    }
    for (int i = 0; i < 256; i += 8) {
      analogWrite(mDg, i);
      delay(30);
    }
    for (int i = 0; i < 256; i += 8) {
      analogWrite(mDb, i);
      delay(30);
    }
    digitalWrite(sDr, HIGH);
    delay(100);
    digitalWrite(sDr, LOW);
    digitalWrite(sDg, HIGH);
    delay(100);
    digitalWrite(sDg, LOW);
    digitalWrite(sDb, HIGH);
    delay(100);
    digitalWrite(sDb, LOW);
    digitalWrite(ssDr, HIGH);
    delay(100);
    digitalWrite(ssDr, LOW);
    digitalWrite(ssDg, HIGH);
    delay(100);
    digitalWrite(ssDg, LOW);
    digitalWrite(ssDb, HIGH);
    delay(100);
    digitalWrite(ssDb, LOW);
    digitalWrite(mUr, HIGH);
    delay(100);
    digitalWrite(mUr, LOW);
    digitalWrite(mUg, HIGH);
    delay(100);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, HIGH);
    delay(100);
    digitalWrite(mUb, LOW);
    digitalWrite(sUr, HIGH);
    delay(100);
    digitalWrite(sUr, LOW);
    digitalWrite(sUg, HIGH);
    delay(100);
    digitalWrite(sUg, LOW);
    digitalWrite(sUb, HIGH);
    delay(100);
    digitalWrite(sUb, LOW);
  }
}

void pattern15() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(mUr, HIGH);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, HIGH);
    digitalWrite(mDr, HIGH);
    digitalWrite(mDg, LOW);
    digitalWrite(mDb, HIGH);
    delay(500);
    digitalWrite(mUr, LOW);
    digitalWrite(mUg, HIGH);
    digitalWrite(mUb, LOW);
    digitalWrite(sUr, HIGH);
    digitalWrite(sUg, LOW);
    digitalWrite(sUb, HIGH);
    digitalWrite(mDr, LOW);
    digitalWrite(mDg, HIGH);
    digitalWrite(mDb, LOW);
    digitalWrite(sDr, HIGH);
    digitalWrite(sDg, HIGH);
    digitalWrite(sDb, HIGH);
    digitalWrite(ssDr, HIGH);
    digitalWrite(ssDg, HIGH);
    digitalWrite(ssDb, HIGH);
    delay(500);
    digitalWrite(sUr, LOW);
    digitalWrite(sUg, HIGH);
    digitalWrite(sUb, LOW);
    digitalWrite(sDr, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(sDb, LOW);
    digitalWrite(ssDr, LOW);
    digitalWrite(ssDg, HIGH);
    digitalWrite(ssDb, LOW);
  }
}

void pattern16() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(mUr, HIGH);
    delay(200);
    digitalWrite(mUr, LOW);
    digitalWrite(mUg, HIGH);
    delay(200);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, HIGH);
    delay(200);
    digitalWrite(mUb, LOW);
    digitalWrite(sUr, HIGH);
    delay(200);
    digitalWrite(sUr, LOW);
    digitalWrite(sUg, HIGH);
    delay(200);
    digitalWrite(sUg, LOW);
    digitalWrite(sUb, HIGH);
    delay(200);
    digitalWrite(sUb, LOW);
    digitalWrite(sDr, HIGH);
    delay(200);
    digitalWrite(sDr, LOW);
    digitalWrite(sDg, HIGH);
    delay(200);
    digitalWrite(sDg, LOW);
    digitalWrite(sDb, HIGH);
    delay(200);
    digitalWrite(sDb, LOW);
    digitalWrite(ssDr, HIGH);
    delay(200);
    digitalWrite(ssDr, LOW);
    digitalWrite(ssDg, HIGH);
    delay(200);
    digitalWrite(ssDg, LOW);
    digitalWrite(ssDb, HIGH);
    delay(200);
    digitalWrite(ssDb, LOW);
    analogWrite(mDr, 255);
    delay(200);
    analogWrite(mDr, 0);
    analogWrite(mDg, 255);
    delay(200);
    analogWrite(mDg, 0);
    analogWrite(mDb, 255);
    delay(200);
    analogWrite(mDb, 0);
  }
}

void pattern17() {
  for (int i = 0; i < 5; i++) {
    int pin = random(0, 3);  // Choose a random LED in RGB 5
    switch (pin) {
      case 0:
        digitalWrite(sUr, HIGH);
        digitalWrite(sDr, HIGH);
        digitalWrite(ssDr, HIGH);
        digitalWrite(mDr, HIGH);
        digitalWrite(mUr, HIGH);
        delay(50);
        digitalWrite(sUr, LOW);
        digitalWrite(sDr, LOW);
        digitalWrite(ssDr, LOW);
        digitalWrite(mDr, LOW);
        digitalWrite(mUr, LOW);
        break;
      case 1:
        digitalWrite(sUg, HIGH);
        digitalWrite(sDg, HIGH);
        digitalWrite(ssDg, HIGH);
        digitalWrite(mDg, HIGH);
        digitalWrite(mUg, HIGH);
        delay(50);
        digitalWrite(sUg, LOW);
        digitalWrite(sDg, LOW);
        digitalWrite(ssDg, LOW);
        digitalWrite(mDg, LOW);
        digitalWrite(mUg, LOW);
        break;
      case 2:
        digitalWrite(sUb, HIGH);
        digitalWrite(sDb, HIGH);
        digitalWrite(ssDb, HIGH);
        digitalWrite(mDb, HIGH);
        digitalWrite(mUb, HIGH);
        delay(50);
        digitalWrite(sUb, LOW);
        digitalWrite(sDb, LOW);
        digitalWrite(ssDb, LOW);
        digitalWrite(mDb, LOW);
        digitalWrite(mUb, LOW);
        break;
    }
  }
}

void pattern18() {
  for (int i = 0; i < 5; i++) {
    for (int i = 0; i < 50; i++) {
      analogWrite(mDr, random(256));
      analogWrite(mDg, random(256));
      analogWrite(mDb, random(256));
      analogWrite(sDr, random(256));
      analogWrite(sDg, random(256));
      analogWrite(sDb, random(256));
      analogWrite(ssDr, random(256));
      analogWrite(ssDg, random(256));
      analogWrite(ssDb, random(256));
      analogWrite(mUr, random(256));
      analogWrite(mUg, random(256));
      analogWrite(mUb, random(256));
      analogWrite(sUr, random(256));
      analogWrite(sUg, random(256));
      analogWrite(sUb, random(256));
      delay(200);
    }
  }
}

void pattern19() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(mDr, HIGH);
    digitalWrite(mDg, HIGH);
    digitalWrite(mDb, HIGH);
    digitalWrite(sDb, HIGH);
    digitalWrite(sDr, HIGH);
    digitalWrite(ssDr, HIGH);
    digitalWrite(mUr, LOW);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, LOW);
    digitalWrite(sUb, LOW);
    digitalWrite(sUr, LOW);
    delay(500);
    digitalWrite(mDr, LOW);
    digitalWrite(mDg, LOW);
    digitalWrite(mDb, LOW);
    digitalWrite(sDb, LOW);
    digitalWrite(sDr, LOW);
    digitalWrite(ssDr, LOW);
    digitalWrite(ssDg, HIGH);
    digitalWrite(ssDb, HIGH);
    digitalWrite(mUr, HIGH);
    digitalWrite(mUg, HIGH);
    digitalWrite(mUb, HIGH);
    digitalWrite(sUb, HIGH);
    digitalWrite(sUr, HIGH);
    delay(500);
  }
}

void pattern20() {
  for (int i = 0; i < 5; i++) {
    for (int i = 0; i <= 255; i++) {
      analogWrite(sDr, i);
      analogWrite(sDg, i);
      analogWrite(sDb, i);
      analogWrite(ssDr, i);
      analogWrite(ssDg, i);
      analogWrite(ssDb, i);
      analogWrite(mDr, i);
      analogWrite(mDg, i);
      analogWrite(mDb, i);
      analogWrite(mUr, i);
      analogWrite(mUg, i);
      analogWrite(mUb, i);
      analogWrite(sUr, i);
      analogWrite(sUg, i);
      analogWrite(sUb, i);
      delay(10);
    }
    for (int i = 255; i >= 0; i--) {
      analogWrite(sDr, i);
      analogWrite(sDg, i);
      analogWrite(sDb, i);
      analogWrite(ssDr, i);
      analogWrite(ssDg, i);
      analogWrite(ssDb, i);
      analogWrite(mDr, i);
      analogWrite(mDg, i);
      analogWrite(mDb, i);
      analogWrite(mUr, i);
      analogWrite(mUg, i);
      analogWrite(mUb, i);
      analogWrite(sUr, i);
      analogWrite(sUg, i);
      analogWrite(sUb, i);
      delay(10);
    }
  }
}

void pattern21() {
  for (int i = 0; i < 100; i++) {
    digitalWrite(mUr, random(2) == 0 ? HIGH : LOW);
    digitalWrite(mUg, random(2) == 0 ? HIGH : LOW);
    digitalWrite(mUb, random(2) == 0 ? HIGH : LOW);
    digitalWrite(sUr, random(2) == 0 ? HIGH : LOW);
    digitalWrite(sUg, random(2) == 0 ? HIGH : LOW);
    digitalWrite(sUb, random(2) == 0 ? HIGH : LOW);
    digitalWrite(mDr, random(2) == 0 ? HIGH : LOW);
    digitalWrite(mDg, random(2) == 0 ? HIGH : LOW);
    digitalWrite(mDb, random(2) == 0 ? HIGH : LOW);
    digitalWrite(sDr, random(2) == 0 ? HIGH : LOW);
    digitalWrite(sDg, random(2) == 0 ? HIGH : LOW);
    digitalWrite(sDb, random(2) == 0 ? HIGH : LOW);
    digitalWrite(ssDr, random(2) == 0 ? HIGH : LOW);
    digitalWrite(ssDg, random(2) == 0 ? HIGH : LOW);
    digitalWrite(ssDb, random(2) == 0 ? HIGH : LOW);
    delay(50);
  }
}

void pattern22() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(mDr, HIGH);
    digitalWrite(mUr, HIGH);
    delay(100);
    digitalWrite(mDr, LOW);
    digitalWrite(sDr, HIGH);
    digitalWrite(mUr, LOW);
    digitalWrite(sUr, HIGH);
    delay(100);
    digitalWrite(sDr, LOW);
    digitalWrite(sUr, LOW);
    digitalWrite(ssDr, HIGH);
    delay(100);
    digitalWrite(ssDr, LOW);
    digitalWrite(mDg, HIGH);
    digitalWrite(mUg, HIGH);
    delay(100);
    digitalWrite(mDg, LOW);
    digitalWrite(sDg, HIGH);
    digitalWrite(mUg, LOW);
    digitalWrite(sUg, HIGH);
    delay(100);
    digitalWrite(sDg, LOW);
    digitalWrite(sUg, LOW);
    digitalWrite(ssDg, HIGH);
    delay(100);
    digitalWrite(ssDg, LOW);
    digitalWrite(mDb, HIGH);
    digitalWrite(mUb, HIGH);
    delay(100);
    digitalWrite(mDb, LOW);
    digitalWrite(sDb, HIGH);
    digitalWrite(mUb, LOW);
    digitalWrite(sUb, HIGH);
    delay(100);
    digitalWrite(sDb, LOW);
    digitalWrite(sUb, LOW);
    digitalWrite(ssDb, HIGH);
    delay(100);
    digitalWrite(ssDb, LOW);
  }
}

void pattern23() {
  int delayTime = 50;
  for (int i = 0; i < 5; i++) {
    digitalWrite(mUr, HIGH);
    delay(delayTime);
    digitalWrite(mUr, LOW);
    digitalWrite(mUg, HIGH);
    delay(delayTime);
    digitalWrite(mUg, LOW);
    digitalWrite(mUb, HIGH);
    delay(delayTime);
    digitalWrite(mUb, LOW);
    digitalWrite(sUr, HIGH);
    delay(delayTime);
    digitalWrite(sUr, LOW);
    digitalWrite(sUg, HIGH);
    delay(delayTime);
    digitalWrite(sUg, LOW);
    digitalWrite(sUb, HIGH);
    delay(delayTime);
    digitalWrite(sUb, LOW);
  }
}

void pattern24() {
    for (int i = 0; i <= 150; i++) {
      analogWrite(mDr, random(256));
      analogWrite(mDg, random(256));
      analogWrite(mDb, random(256));
      analogWrite(sDr, random(256));
      analogWrite(sDg, random(256));
      analogWrite(sDb, random(256));
      analogWrite(ssDr, random(256));
      analogWrite(ssDg, random(256));
      analogWrite(ssDb, random(256));
      analogWrite(mUr, random(256));
      analogWrite(mUg, random(256));
      analogWrite(mUb, random(256));
      analogWrite(sUr, random(256));
      analogWrite(sUg, random(256));
      analogWrite(sUb, random(256));
      delay(50);
  }
}