#include <iostream>

using namespace std;

unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    unsigned long long resultIterative = factorialIterative(n);
    cout << "Factorial of " << n << " using iterative method: " << resultIterative << endl;
    cout<<"The time complexity is O(n) and space complexity is O(1) for iterative solution."<<endl;

    unsigned long long resultRecursive = factorialRecursive(n);
    cout << "Factorial of " << n << " using recursive method: " << resultRecursive << endl;
    cout<<"The time complexity is O(n) and space complexity is also O(n) (because of recursive stack space needed) for recursive solution."<<endl;

    return 0;
}
