#include <iostream>
using namespace std;

int main() {
    string name;
    int num1, num2, sum;

    // Ask for user's name
    cout << "Enter your name: ";
    cin >> name;

    // Greet the user
    cout << "Hello, " << name << "! Let's add two numbers." << endl;

    // Get two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;

    return 0;
}