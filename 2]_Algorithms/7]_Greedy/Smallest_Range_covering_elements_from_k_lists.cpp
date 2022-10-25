// C++ program to finds out smallest range that includes
// elements from each of the given sorted lists.

#include <bits/stdc++.h>
using namespace std;

int ptr[501];

void findSmallestRange(vector<vector<int> >& arr, int N,int K)
{
	int i, minval, maxval, minrange, minel, maxel, flag,
		minind;

	for (i = 0; i <= K; i++)
		ptr[i] = 0;

	minrange = INT_MAX;

	while (1) 
    {
		minind = -1;
		minval = INT_MAX;
		maxval = INT_MIN;
		flag = 0;

		
		for (i = 0; i < K; i++) 
        {
			
			if (ptr[i] == N) 
            {
				flag = 1;
				break;
			}
			
            
			if (ptr[i] < N && arr[i][ptr[i]] < minval)
            {
				minind = i; 
				minval = arr[i][ptr[i]];
			}
			
			if (ptr[i] < N && arr[i][ptr[i]] > maxval) {
				maxval = arr[i][ptr[i]];
			}
		}

		
		if (flag)
			break;

		ptr[minind]++;

	
		if ((maxval - minval) < minrange) {
			minel = minval;
			maxel = maxval;
			minrange = maxel - minel;
		}
	}

	printf("The smallest range is [%d, %d]\n", minel,
		maxel);
}

int main()
{
	vector<vector<int> > arr = { { 4, 7, 9, 12, 15 },
								{ 0, 8, 10, 14, 20 },
								{ 6, 12, 16, 30, 50 } };

	int K = arr.size();
	int N = arr[0].size();
	
	findSmallestRange(arr, N, K);
	//returning 
	return 0;
}