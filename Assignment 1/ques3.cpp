#include <iostream>

using namespace std;

void fibonacciIterative(int n) {
    int prev = 0, curr = 1;
    cout << "Fibonacci series up to " << n << " terms (Iterative Method):\n";
    for (int i = 0; i < n; ++i) {
        cout << prev << " ";
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    cout << endl;
}

void fibonacciRecursive(int n, int prev = 0, int curr = 1, int count = 0) {
    if (count == n) {
        cout << endl;
        return;
    }
    cout << prev << " ";
    fibonacciRecursive(n, curr, prev + curr, count + 1);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }

    fibonacciIterative(n);
    cout<<"The time complexity of this method is O(n) and the space complexity of this method is O(1). "<<endl;

    cout << "Fibonacci series up to " << n << " terms (Recursive Method):\n";
    fibonacciRecursive(n);
    cout<<"The time complexity of this method is O(2^n) as each call branches into 2 separate calls and space complexity is O(n) because of recursive call stack. "<<endl;

    return 0;
}
