#include <kipr/wombat.h>
#include <stdio.h>
#define PAGE 1
#include "variables.cpp"
#include "movement.cpp"

void intialization();

int main() {
    printf("Current Power Level: %d", power_level());
    intialization();
}

void intialization() {
    printf("Initializing...\n");
    for (int i = 0; i < 4; i++) {
        servoPos(i, 1500, 100);
    }
    clear_motor_position_counters();
    printf("Initialization Complete!\n");
}
