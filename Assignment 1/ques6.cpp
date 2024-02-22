#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

bool isArmstrongIterative(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }
    return sum == originalNumber;
}

int countDigitsRecursive(int number) {
    if (number == 0) {
        return 0;
    }
    return 1 + countDigitsRecursive(number / 10);
}

int isArmstrongRecursive(int number, int originalNumber, int numDigits) {
    if (number == 0) {
        return originalNumber == 0;
    }
    int digit = number % 10;
    return pow(digit, numDigits) + isArmstrongRecursive(number / 10, originalNumber, numDigits);
}

bool isArmstrongRecursiveHelper(int number) {
    int numDigits = countDigitsRecursive(number);
    int result = isArmstrongRecursive(number, number, numDigits);
    return result == number;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isArmstrongIterative(number)) {
        cout << number << " is an Armstrong number.\n";
    } else {
        cout << number << " is not an Armstrong number.\n";
    }
    cout<<"The time complexity of iterative solution is O(log10(n)) and space complexity is O(1). "<<endl;

    if (isArmstrongRecursiveHelper(number)) {
        cout << number << " is an Armstrong number(checked recursively).\n";
    } else {
        cout << number << " is not an Armstrong number(checked recursively).\n";
    }
    cout<<"The time complexity is O(log10(n)) and the space complexity is also O(log10(n)). "<<endl;
    return 0;
}