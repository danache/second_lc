#include <iostream>
#include <vector>
using namespace std;
vector<int> get_next(string s ){
    vector<int> res(s.size());
    int j = 0, t = -1;
    res[0] = -1;
    while(j < s.size() - 1){
        if(t < 0 || s[j] == s[t]){
            t++;
            j++;
            res[j] = t;
        }
        else
            t = res[t];
    }
    return res;
}
int strStr(string haystack, string needle) {
    if(needle.empty())
        return 0;
    if(haystack.size() < needle.size())
        return -1;
    int i = 0, j = 0;
    int m = haystack.size(), n = needle.size();
    vector<int> next = get_next(needle);
    while(i < m && j < n){
        if(j < 0 || haystack[i] == needle[j]){
            i++;j++;
            if(j == n)
                return i - j;

        }
        else
            j = next[j];
    }
    return -1;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << strStr("hello","lls")<<endl;
    return 0;
}