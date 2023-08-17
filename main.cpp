// Initialization
int p13 = 0; 
int p16 = 0;
int p23 = 0;
int p25 = 0;

void initialize() {
    // Initialize digitIn on p13, p16
    p13 = 0;
    p16 = 0;

    // Initialize digitOut on p23, p25
    p23 = 0;
    p25 = 0;
}

void turnOn(int *pin) {
    *pin = 1;
}

void turnOff(int *pin) {
    *pin = 0;
}

int main() {
    initialize();

    while (1) {
        if (p13) {
            turnOn(&p23);
            turnOff(&p25);
        } else if (p16) {
            turnOn(&p25);
            turnOff(&p23);
        } else {
            turnOff(&p23);
            turnOff(&p25);
        }
    }

    return 0;
}
