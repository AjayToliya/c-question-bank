#include <iostream>

class AlphabetAscii {
private:
    int asciiValues[23]; // Array to store ASCII values, skipping 3 characters

public:
    AlphabetAscii() {
        int index = 0;
        for (char c = 'A'; c <= 'Z'; ++c) {
            if (c != 'D' && c != 'W' && c != 'Z') { // Skipping characters D, W, and Z
                asciiValues[index++] = static_cast<int>(c);
            }
        }
    }

    int* getAsciiValues() {
        return asciiValues;
    }
};

int main() {
    // Creating an object of AlphabetAscii class
    AlphabetAscii alphabet;

    // Getting the array of ASCII values
    int* asciiArray = alphabet.getAsciiValues();

    // Finding the sum of ASCII values
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += asciiArray[i];
    }

    // Determining if the sum is odd or even
    if (sum % 2 == 0) {
        std::cout << "Sum of ASCII values is even: " << sum << std::endl;
    } else {
        std::cout << "Sum of ASCII values is odd: " << sum << std::endl;
    }

    return 0;
}

