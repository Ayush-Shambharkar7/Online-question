#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    int sum = 0;
    int digit;
    
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    
    cout << "The sum of the digits is: " << sum << endl;
    
    return 0;
}

/*
Enter a number: 789
The sum of the digits is: 24
*/