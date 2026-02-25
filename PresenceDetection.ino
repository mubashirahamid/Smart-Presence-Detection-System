const int TRIG_PIN = 9;

const int ECHO_PIN = 10;

const int LED_RED  = 13;

const int LED_GREEN = 12;

const int THRESHOLD = 40;
const int SAMPLES = 5;

void setup() {
pinMode(TRIG_PIN, OUTPUT);
pinMode(ECHO_PIN, INPUT);
pinMode(LED_RED, OUTPUT);
pinMode(LED_GREEN, OUTPUT);
Serial.begin(9600);
Serial.println("SYSTEM_START: Professional Mode Active");
}

void loop() {
long durationSum = 0;
for(int i=0; i<SAMPLES; i++) {
digitalWrite(TRIG_PIN, LOW); delayMicroseconds(2);
digitalWrite(TRIG_PIN, HIGH); delayMicroseconds(10);
digitalWrite(TRIG_PIN, LOW);
durationSum += pulseIn(ECHO_PIN, HIGH);
delay(5);
}
int distance = (durationSum / SAMPLES) * 0.034 / 2;

if (distance > 0 && distance < THRESHOLD) {
digitalWrite(LED_GREEN, HIGH);
digitalWrite(LED_RED, LOW);
Serial.print("TARGET_DETECTED: "); Serial.print(distance); Serial.println("cm");
} else {
digitalWrite(LED_GREEN, LOW);
digitalWrite(LED_RED, HIGH);
Serial.println("STATUS: IDLE_SCANNING");
}
}
