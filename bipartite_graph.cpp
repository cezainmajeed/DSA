// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if the current
// sum is composite or not
bool checkComposite(int n)
{

	if (n == 1 || n == 2) {
		return false;
	}

	
	for (int i = 2; i < n; i++) {

		if (n % i == 0 && i != n) {
			return true;
		}
	}

	return false;
}

void largestCompositeSum(int arr[], int n)
{

	
	vector<int> temp;

	for (int i = 0; i < n; i++) {


		if (arr[i] % 2 == 0) {
			temp.push_back(arr[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		// Odd check
		if (arr[i] % 2 == 1) {
			temp.push_back(arr[i]);
		}
	}

	int cursum = 0;

	
	int maxlen = 0;

	for (int i = 0; i < n; i++) {
		cursum += temp[i];

		
		if (checkComposite(cursum)
			&& cursum > maxlen) {
			maxlen = i + 1;
		}
	}

	cout << maxlen << endl;
	return;
}

int main()
{

	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
	largestCompositeSum(arr, n);

	return 0;
}
