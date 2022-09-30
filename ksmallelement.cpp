int kthSmallest(int arr[], int N, int K)
{
    // Sort the given array
    sort(arr, arr + N);
 
    // Return k'th element in the sorted array
    return arr[K - 1];
}