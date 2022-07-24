// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

// Def function search
int search(int arr[], int n, int x) {
	
	int i;
	
	for (i = 0; i < n; i++) 
	
		if (arr[i] == x) 
			return i;
		return -1;
		
} // End function search

// Driver code
int main(void) {
	
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 9;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, n, x);
	
	(result == -1) 
		
		?cout << "Element is not present in array"
	
		:cout << "Element is present at index " << result;
	
	return 0;

} // End driver
