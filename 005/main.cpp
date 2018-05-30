#include <iostream>
#include <vector>
using namespace std;
string generateManacher(string s){
    string res = "@#";
    for(auto c: s)
        res  = res + c + "#";
    return res;
}
string longestPalindrome(string s){
    s = generateManacher(s);
    vector<int> len(s.size());
    int max_pos_idx = -1;
    int max_pos = -1;

    int max_len = -1;
    int max_len_idx = -1;

    for(int i = 0; i < s.size(); i++){
        if(max_pos_idx > i){
            len[i] = min(max_pos- i, len[2 * max_pos_idx - i]);
        }
        else
            len[i] = 1;
        while(i + len[i] < s.size() && s[i - len[i]] == s[i + len[i]] )
            len[i]++;
        if(len[i] + i > max_pos){
            max_pos = len[i] + i;
            max_pos_idx = i;
        }
        if(max_len < len[i]){
            max_len = len[i];
            max_len_idx = i;
        }
    }
    string res = "";
    cout << max_len << endl;
    for(int i = max_len_idx - (max_len - 1) ; i <= max_len_idx + (max_len - 1) ; i++){
        if(s[i] == '@' || s[i] == '#')
            continue;
        res += s[i];
    }
    return res;
}
int main() {
    std::cout << longestPalindrome("babad") << std::endl;
    return 0;
}