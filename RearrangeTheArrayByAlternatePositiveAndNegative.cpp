#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos;
	    vector<int> neg;
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] < 0)
	            neg.push_back(arr[i]);
	        else
	            pos.push_back(arr[i]);
	    }
	    int i = 0, j = 0;
	    int k = 0;
	    while(i < pos.size() && j < neg.size())
	    {
	       arr[k] = pos[i];
	       arr[k + 1] = neg[j];
	       i++;
	       j++;
	       k+=2;
	    }
	    if(i == pos.size())
	    {
	        while(j < neg.size())
	        {
	            arr[k] = neg[j];
	            j++;
	            k++;
	        }	            
	    }
	    else
	        {
	            while(i < pos.size())
	        {
	            arr[k] = pos[i];
	            i++;
	            k++;
	        }
	        }
	}
};
class Solution1{
public:
	static void rearrangeTheArray(vector<int>& nums)
	{
		int l = 0;
		int h = nums.size() - 1;
		while(l <= h)
		{
			if(nums[l] < 0 and nums[h] >= 0)
			{
				swap(nums[l], nums[h]);
				l++;
				h--;
			}
			if(nums[l] >= 0)
			{
				l++;
			}
			if(nums[h] < 0)
			{
				h--;
			}
		}
		h = nums.size() - 1;
		int n = nums.size();
		for(int i = 0; i < nums.size(); i += 2)
		{
			int neg = nums[h];
			if(neg < 0)
			{
				for(int j = n - 2; j >= i; j --)
					nums[j + 1] = nums[j];
			}
			nums[i] = neg;
		}
	}
};
int main()
{				
	vector<int> v{1, 2, 3, -4, -1, 4};
	Solution::rearrangeTheArray(v);
	for(auto i : v)
		cout<<i<<" ";
	return 0;
}