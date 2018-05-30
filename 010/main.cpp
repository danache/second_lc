#include <iostream>
#include <map>
#include <vector>
using namespace std;


bool isMatch(string s, string p) {
    int m = s.length(), n = p.length();
    vector<vector<bool> > dp(m + 1, vector<bool> (n + 1, false));
    dp[0][0] = true;
    for(int i = 0; i <= m; i++){                        //i从0到m？
        for(int j = 1; j <= n; j++ ){
            if(p[j - 1] == '*'){
                dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i-1][j]);
                //如果当前指向值为×，那么三种情况，没出现，出现一次。？？？
            }
            else
                dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
        }
    }
    return dp[m][n];
}

//记住！
int main() {

    for (int i = 0; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (p[j - 1] == '*')
                dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
            else dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');

    string s;
    string o;

    while (cin >> s >> o){
        cout << isMatch(s,o) << endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}