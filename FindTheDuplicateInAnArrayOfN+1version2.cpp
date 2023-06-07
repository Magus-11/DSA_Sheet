#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	static int findDuplicate(vector<int> arr)
	{
		int s = arr[0];
		int f = arr[0];
		do{
			s = arr[s];
			f = arr[arr[f]];
		}while(s != f);
		f = arr[0];
		while(s != f)
		{
			s = arr[s];
			f = arr[f];
		}
		return f;
	}
};
int main()
{
	vector<int> arr{1, 2, 3, 4, 5, 6, 6, 7, 8, 9};
	cout<<Solution::findDuplicate(arr);
	return 0;
}