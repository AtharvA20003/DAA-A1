#include <iostream>
#include <unordered_map>

using namespace std;

void findDuplicates(int n) {
    unordered_map<int, int> outputFrequency;

    // Say the function f(i) = n % i
    for (int i = 1; i <= n; ++i) {
        int output = n % i;
        if (outputFrequency.find(output) != outputFrequency.end()) {
            cout << "Inputs: " << outputFrequency[output] << " and " << i << " have the same output: " << output << endl;
            return;
        }
        outputFrequency[output] = i;
    }

    cout << "No inputs a and b found such that f(a) = f(b)." << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    findDuplicates(n);

    return 0;
}
