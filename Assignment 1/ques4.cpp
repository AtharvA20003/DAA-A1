#include <iostream>
using namespace std;

int binomialCoefficientIterative(int n, int k) {
    int res = 1;
    if (k > n - k) {
        k = n - k;
    }
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int binomialCoefficientRecursive(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoefficientRecursive(n - 1, k - 1) + binomialCoefficientRecursive(n - 1, k);
}

int main() {
    int n, k;
    cout << "Enter values of n and k (separated by space): ";
    cin >> n >> k;
    if (n < k || n < 0 || k < 0) {
        cout << "Invalid input: n should be greater than or equal to k, and both should be non-negative.\n";
    }
    cout << "Binomial coefficient C(" << n << ", " << k << ") = " << binomialCoefficientIterative(n, k) << endl;
    cout<<"The time complexity of iterative solution is O(k) and space comlpexity is O(1)."<<endl;
    cout << "Binomial coefficient C(" << n << ", " << k << ") (by recursive way) = " << binomialCoefficientRecursive(n, k) << endl;
    cout<<"The time complexity of iterative solution is O(2^n) (because of each n gets split in 2 calls) and space comlpexity is O(n) because of recursive call stack."<<endl;
    return 0;
}
