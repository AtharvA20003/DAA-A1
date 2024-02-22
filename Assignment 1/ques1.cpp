#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Enter the positive integers: ";
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
        if (nums[i] <= 0)
        {
            cout << "Invalid input. Please enter positive integers only." << endl;
            return 1;
        }
    }

    sort(nums.begin(), nums.end());

    double median;
    if (n % 2 == 0)
    {
        median = (static_cast<double>(nums[n / 2 - 1]) + static_cast<double>(nums[n / 2])) / 2.0;
    }
    else
    {
        median = static_cast<double>(nums[n / 2]);
    }

    cout << "Median: " << median << endl;

    return 0;
    return 0;
}