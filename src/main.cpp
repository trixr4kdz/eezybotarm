#include <Arduino.h>
#include <Servo.h>

Servo end_effector_servo;
Servo l_side_servo;
Servo base_servo;
uint8 END_EFFECTOR_PIN = 4;  // D2
uint8 L_SIDE_PIN = 0;        // D3 - don't use yet
uint8 BASE_PIN = 2;          // D4

int DEG_ANGLE = 180;

void setup() {
    // put your setup code here, to run once:
    end_effector_servo.attach(END_EFFECTOR_PIN);
    end_effector_servo.write(0);

    l_side_servo.attach(L_SIDE_PIN);
    l_side_servo.write(0);

    base_servo.attach(BASE_PIN);
    base_servo.attach(0);

    delay(2000);
}

void loop() {
    // put your main code here, to run repeatedly:
    end_effector_servo.write(DEG_ANGLE);
    l_side_servo.write(DEG_ANGLE);
    base_servo.write(DEG_ANGLE);
    delay(5000);
    end_effector_servo.write(0);
    l_side_servo.write(0);
    base_servo.write(0);
    delay(5000);
}