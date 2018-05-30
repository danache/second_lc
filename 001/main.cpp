#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> mp;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++){
        if (!mp.empty() && mp.count(target - nums[i]) > 0){
            res.push_back(mp[target - nums[i]]);
            res.push_back(i);
            return res;
        }
        else{

            mp[nums[i]] = i;
        }
    }
    return res;
}
int main() {
    vector<int> a = {3,2,4};
    twoSum(a,6);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}