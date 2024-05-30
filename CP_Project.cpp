#include <iostream>
using namespace std;

// Function to calculate the average
double calculateAverage(double* inputs, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += inputs[i];
    }
    return sum / size;
}

int main() {
    int Inputs;
    cout << "How many inputs do you have? " << endl;
    cin >> Inputs;

    // Dynamically allocate memory for the inputs
    double* inputs = new double[Inputs];

    // ask the user to enter the inputs for the average
    for (int i = 0; i < Inputs; ++i) {
        cout << "Enter input " << i + 1 << ": ";
        cin >> inputs[i];
    }

    // Calculate the average for the number given by user
    double average = calculateAverage(inputs, Inputs);

    // Output the result
    cout << "The average of the inputs is: " << average << endl;


    delete[] inputs;

    return 0;

}
