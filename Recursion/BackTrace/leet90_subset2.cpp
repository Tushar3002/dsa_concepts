#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets)
{
    if (i == nums.size())
    {
        allSubsets.push_back(ans);
        return;
    }

    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i + 1, allSubsets);

    ans.pop_back();

    int idx = i + 1;
    while (idx < nums.size() && nums[idx] == nums[idx - 1])
        idx++;

    getAllSubsets(nums, ans, idx, allSubsets);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);
    return allSubsets;
}

int main(){
    vector<int> v={1,2,2};
    vector<vector<int>> ans=subsetsWithDup(v);
    for(auto i:ans){
        for(int j:i){
            cout << j <<" ";
        }cout << endl;
    }
    cout << 123;    
    return 0;
}