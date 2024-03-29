#include <iostream>
using namespace std;

// Function to calculate cubes of elements in the array and store them in another array
void calculateCubes(const int input[], int output[], int size) {
    for (int i = 0; i < size; ++i) {
        output[i] = input[i] * input[i] * input[i];
    }
}

// Function to find the average value of elements in the array
double calculateAverage(const int array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

// Function to determine the type of the array based on its average value
string determineKind(double average) {
    if (average >= 22 && average <= 35) {
        return "TIGHT";
    } else if (average > 35 && average <= 50) {
        return "BALANCED";
    } else if (average > 50) {
        return "TOXIC";
    } else {
        return "LOOSE";
    }
}

int main() {
    const int size = 5;
    int input[size] = {1, 2, 3, 4, 5};
    int output[size];

    calculateCubes(input, output, size);

    double average = calculateAverage(output, size);

    string kind = determineKind(average);

    cout << "Average value: " << average << endl;
    cout << "Array kind: " << kind << endl;

    return 0;
}

