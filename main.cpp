// CPP program to find sum of maximum and
// minimum in any subarray of an array of
// positive numbers.
#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
	if (n < 2)
		return -1;
	int ans = arr[0] + arr[1];
	for (int i = 1; i + 1 < n; i++)
		ans = min(ans, (arr[i] + arr[i + 1]));
	return ans;
}

// Driver code
int main()
{
	int arr[] = {1, 12, 2, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n);
	return 0;
}
