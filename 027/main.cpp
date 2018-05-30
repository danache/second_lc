#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    if(nums.empty())
        return 0;
    int idx = nums.size() - 1;
    while(idx >= 0 &&nums[idx] == val)
        idx--;
    if(idx < 0)
        return 0;

    int i = 0;
    while (i < idx){
        while(i < nums.size() && nums[i] != val)
            i++;
        while(idx >= 0 && nums[idx] == val)
            idx--;
        if(i >= idx)
            break;
        swap(nums[i],nums[idx]);
        i++;
        idx--;
    }
    if(i >= nums.size())
        return nums.size();
    if(nums[i] == val)
        return i;
    else
        return i + 1;


}
int main() {
    vector<int> a = {3,3};
    cout << removeElement(a,5) << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}