#include <Arduino.h>

void setup() {
    pinMode(13, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
    Serial.print(83, BIN);
    Serial.print("\n");
}
