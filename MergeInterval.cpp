#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });
        vector<vector<int>> ans;
        vector<int> start = intervals[0];
        for(int i = 1; i < intervals.size(); i++)
        {
            if(start[1] >= intervals[i][0])
            start[1]= max(intervals[i][1], start[1]);
            else
            {
                vector<int> v;
                v.push_back(start[0]);
                v.push_back(start[1]);
                ans.push_back(v);
                start = intervals[i];
            }
        }
        ans.push_back(start);
        return ans;
    }
};
int main()
{
	vector<vector<int>> v{{1,4},{2,3}};
	v = Solution::merge(v);
	for(int i = 0; i < v.size(); i ++)
	{
		cout<<v[i][0]<<" "<<v[i][1]<<endl;
	}
	return 0;
}