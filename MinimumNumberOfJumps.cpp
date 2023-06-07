#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	static int minJumps(int a[], int n)
	{
		int maxReach = arr[0];
		int step = arr[0];
		int jump = 1;
		if(n == 1)return 0;
		if(arr[0] == 0)return -1;
		for(int i = 1; i < n; i ++)
		{
			if(i == n - 1)return jump;
			maxReach = max(i + a[i], maxReach);
			step--;
			if(step == 0)
			{
				jump++;
				if(i >= maxReach)
					return -1;
				step = maxReach - i;
			}
		}
		return -1;
	}
};
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i ++)
	{
		cin>>arr[i];
	}
	cout<<Solution::minJumps(arr, n)<<endl;
	return 0;
}