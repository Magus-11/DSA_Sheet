#include<bits/stdc++.h>
using namespace std;
class UnI{
public:
	static vector<int> doUnion(vector<int> a, vector<int> b)
	{
		unordered_set<int> s;
		for(auto i : a)
		{
			s.insert(i);
		}
		for(auto i : b)
		{
			s.insert(i);
		}
		vector<int> ans;
		for(auto i : s)
			ans.push_back(i);
		return ans;
	}
	static vector<int> doIntersection(vector<int> a, vector<int> b)
	{
		unordered_map<int, int> un_mp;
		for(auto i : a)
		{
			if(un_mp.find(i) == un_mp.end())
			{
				un_mp[i] = 1;
			}
			else
			{
				un_mp[i]++;
			}
		}
		vector<int> ans;
		for(auto i : b)
		{
			if(un_mp.find(i) != un_mp.end())
			{
				un_mp[i]--;
				ans.push_back(i);
				if(un_mp[i] == 0)
				{
					un_mp.erase(i);
				}
			}
		}
		return ans;
	}
};
int main()
{
	vector<int> a{1, 2, 3, 4, 5};
	vector<int> b{1, 2, 3};
	vector<int> ans;
	ans = UnI::doUnion(a, b);
	for(auto i : ans)
		cout<<i<<" ";
	cout<<endl;
	ans = UnI::doIntersection(a, b);
	for(auto i : ans)
		cout<<i<<" ";
	return 0;
}