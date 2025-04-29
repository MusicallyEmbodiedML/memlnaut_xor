#include "src/memlp/MLP.h"
#include "src/memlp/Dataset.hpp"

// Define minimal network parameters
const int INPUT_SIZE = 3;
const int HIDDEN_SIZE = 3;
const int OUTPUT_SIZE = 1;
const float LEARNING_RATE = 0.1f;

// Network architecture
const std::vector<size_t> LAYERS = {INPUT_SIZE, HIDDEN_SIZE, OUTPUT_SIZE};
const std::vector<ACTIVATION_FUNCTIONS> ACTIVATIONS = {
    ACTIVATION_FUNCTIONS::RELU,
    ACTIVATION_FUNCTIONS::SIGMOID
};

// XOR training data
const std::vector<std::vector<float>> XOR_INPUTS = {
    {0.0f, 0.0f},
    {0.0f, 1.0f},
    {1.0f, 0.0f},
    {1.0f, 1.0f}
};
const std::vector<std::vector<float>> XOR_OUTPUTS = {
    {0.0f},
    {1.0f},
    {1.0f},
    {0.0f}
};

void setup() {
    Serial.begin(115200);
    while (!Serial) {
        ; // Wait for serial port to connect. Needed for native USB port only
    }

    /// YOUR CODE HERE


    /// YOUR CODE ENDS HERE

    // Initialise LED 33
    pinMode(33, OUTPUT);
}

void loop() {
    digitalWrite(33, HIGH); // Turn on LED
    delay(1000); // Wait for a second
    digitalWrite(33, LOW); // Turn off LED
    delay(1000); // Wait for a second
}
