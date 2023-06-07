#include<bits/stdc++.h>
using namespace std;
class Rotate{
public:
	static void rotate(vector<int> &arr, int k)
	{
		vector<int> tem;
		int n = arr.size() - 1;
		for(int i = 0; i < k; i++)
		{
			tem.push_back(arr[n]);
			n--; 
		}
		n = arr.size() - 1;
		for(int i = arr.size() - k - 1; i >= 0; i--)
		{
			arr[n] = arr[i];
			n--;
		}
		reverse(tem.begin(), tem.end());
		for(int i = 0; i < k; i++)
		{
			arr[i] = tem[i];
		}
	}
};
int main()
{
	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 10;
	Rotate::rotate(arr, k);
	for(auto i : arr)
		cout<<i<<" ";
	return 0;
}