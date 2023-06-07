#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        //Function to merge the arrays.
        static void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int left = n - 1;
            int right = 0;
            while(left >= 0 and right < m)
            {
                if(arr1[left] > arr2[right])
                {
                    int temp = arr1[left];
                    arr1[left] = arr2[right];
                    arr2[right] = temp;
                    
                }
                left--;
                right++;
            }
            sort(arr1, arr1 + n);
            sort(arr2, arr2 + m);
        } 
};
int main()
{
	long long arr1[] = {1, 35};
	long long arr2[] = {6, 9, 13, 15, 20, 25, 29, 46};
	int n = 2, m = 8;
    Solution::merge(arr1, arr2, n, m);
	for(int i = 0; i < n; i++)
	{
		cout<<arr1[i]<<" ";
	}
	for(int i = 0; i < m; i++)
	{
		cout<<arr2[i]<<" ";
	}
	return 0;
}