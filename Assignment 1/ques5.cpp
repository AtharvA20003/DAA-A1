// C++ program for implementation of 
// selection sort 
#include <bits/stdc++.h> 
using namespace std; 

// Function for Selection sort 
void selectionSort(vector<int>& v, int n) 
{ 
	int i, j, min_idx; 
	for (i = 0; i < n - 1; i++) {  
		min_idx = i; 
		for (j = i + 1; j < n; j++) { 
			if (v[j] < v[min_idx]) 
				min_idx = j; 
		} 

		if (min_idx != i) 
			swap(v[min_idx], v[i]); 
	} 
}  

int main() 
{ 
	int n;
    cout << "Enter the size of array: ";
    cin>>n;
    vector<int> v(n,0);
    cout<<"Enter the array elements you want to sort: "<<endl;
    for(int i=0; i<n; i++) cin>>v[i]; 

	selectionSort(v, n); 
    cout<<"The time complexity of selection sort algorithm is O(N^2) and required space complexity is O(1). "<<endl;
	cout << "Sorted array: \n"; 
	for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl; 
	return 0; 
} 

