//Simple way for Engineering Students to start to learn conditionals
//Uses Built in LED's on Arduino Board

int mood_level;
int built_in_led = 13;

void setup() {
  pinMode(built_in_led, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0)); // Adds better randomness
  mood_level = random(5); // <-- Now only runs once on startup
  Serial.print("Mood level: ");
  Serial.println(mood_level);
}

void loop() {
  if(mood_level == 0){
    slowBlink();
  } else if(mood_level == 1){
    mediumBlink();
  } else if(mood_level == 2){
    fastBlink();
  } else if(mood_level == 3){
    ultraBlink();
  } else {
    turnOn();
  }
}

void slowBlink(){
  digitalWrite(built_in_led, HIGH);
  delay(3000);
  digitalWrite(built_in_led, LOW);
  delay(3000);
}

void mediumBlink(){
  digitalWrite(built_in_led, HIGH);
  delay(1000);
  digitalWrite(built_in_led, LOW);
  delay(1000);
}

void fastBlink(){
  digitalWrite(built_in_led, HIGH);
  delay(300);
  digitalWrite(built_in_led, LOW);
  delay(300);
}

void ultraBlink(){
  digitalWrite(built_in_led, HIGH);
  delay(30);
  digitalWrite(built_in_led, LOW);
  delay(30);
}

void turnOn(){
  digitalWrite(built_in_led, HIGH);
  delay(2000); // pause before next mood
}
