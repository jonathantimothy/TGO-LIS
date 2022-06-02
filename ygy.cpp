/* Penyelesaian LIS TGO D */

#include <bits/stdc++.h>
using namespace std;

/* lis() untuk mencari LIS */
int lis(int arr[], int n)
{
	int lis[n];

	lis[0] = 1;

	/* Perhitungan LIS dengan metode iterasi */
	for (int i = 1; i < n; i++) {
		lis[i] = 1;
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;
	}

	// Return nilai max pada lis[]
	return *max_element(lis, lis + n);
}

int main()
{
	int arr[] = { 4, 1, 13, 7, 0, 2, 8, 11, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", lis(arr, n));

	return 0;
}


