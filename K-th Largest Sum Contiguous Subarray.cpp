// C++ program to find the K-th largest sum
// of subarray
#include <bits/stdc++.h>
using namespace std;

// Function to calculate Kth largest element
// in contiguous subarray sum
int kthLargestSum(int arr[], int N, int K)
{
	vector<int> result;

	// Generate all subarrays
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = i; j < N; j++) {
			sum += arr[j];
			result.push_back(sum);
		}
	}

	// Sort in decreasing order
	sort(result.begin(), result.end(), greater<int>());

	// return the Kth largest sum
	return result[K - 1];
}

// Driver's code
int main()
{
	int a[] = { 20, -5, -1 };
	int N = sizeof(a) / sizeof(a[0]);
	int K = 3;

	// Function call
	cout << kthLargestSum(a, N, K);
	return 0;
}

// This code is contributed by hkdass001
