#include <bits/stdc++.h>
using namespace std;

int maxEvenSumPair(int arr[], int n)
{
	int firstEvenMax = -1, secondEvenMax = -1,
		firstOddMax = -1, secondOddMax = -1;

	for (int i = 0; i < n; i++) {
		if (arr[i] & 1)
			firstOddMax = max(firstOddMax, arr[i]);
		else
			firstEvenMax = max(firstEvenMax, arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] & 1) {
			if (arr[i] != firstOddMax)
				secondOddMax = max(secondOddMax, arr[i]);
		}
		else {
			if (arr[i] != firstEvenMax)
				secondEvenMax = max(secondEvenMax, arr[i]);
		}
	}

	int sumOdd = 0, sumEven = 0;

	
	if (firstEvenMax != -1 and secondEvenMax != -1)
		sumEven = firstEvenMax + secondEvenMax;

		if (firstOddMax != -1 and secondOddMax != -1)
		sumOdd = firstOddMax + secondOddMax;

	int res = max(sumEven, sumOdd);

	if (res == 0)
		return -1;

	return res;
}

int main()
{
	int arr[] = { 2, 3, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	
	cout << maxEvenSumPair(arr, size);

	return 0;
}
