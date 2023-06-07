#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	static vector<int> maxSum(vector<int> arr)
	{
		int maxsum = INT_MIN;
		int sum = 0;
		int s = 0;
		int l = arr.size() - 1;
		int anss = 0;
		for(int i = 0; i < arr.size(); i++)
		{
			sum += arr[i];
			if(sum < 0)
			{
				sum = 0;
				s = i + 1;
			}
			if(maxsum <= sum)
			{
				maxsum = sum;
				anss = s;
				l = i;
			}
		}
		vector<int> ans;
		for(int i = s; i <= l; i ++)
		{
			ans.push_back(arr[i]);
		}
		return ans;
	}
};
int main()
{
	vector<int> arr{1, 3, 5, -6, 5, 7};
	arr = Solution::maxSum(arr);
	for(int i = 0; i < arr.size(); i++)
		cout<<arr[i]<<" ";
	return 0;
}