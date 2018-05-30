#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int lengthOfLongestSubstring(string s) {
    map<char,int> mp;
    int l =0, r= 0;
    int maxlen = 0;
    for(;r < s.size(); r++){
        char c = s[r];
        if (mp.count(c) > 0){
            maxlen = max(maxlen, r-l);
            while(s[l] != c) {
                mp.erase(s[l]);
                l++;
            }
            l++;
            mp[c] = r;
        }
        else{
            mp[c] = r;
        }

    }
    maxlen = max(maxlen, int(mp.size()));
    return maxlen;
}
int main() {
    cout << lengthOfLongestSubstring("tmmzux");
    cout << lengthOfLongestSubstring("bbbbb");
    cout << lengthOfLongestSubstring("pwwkew");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}