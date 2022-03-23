int col[] = {9, 8, 7, 6, 5, 4, 3, 2};
int row[] = {11, 12, 13, A0, A1, A2, A3, 10};

void setup() {
  for (int i=0; i<8 ; i++) {
    pinMode(row[i], OUTPUT);
    pinMode(col[i], OUTPUT);
    digitalWrite(col[i], LOW);
    digitalWrite(row[i], HIGH); 
  }

  welcomeAnimation();
  turnLeftAnimation();
  turnRightAnimation();
  turnUpAnimation();
  turnDownAnimation();
  snakeAnimation();
}

void loop() {
  thinkingAnimation();
}
