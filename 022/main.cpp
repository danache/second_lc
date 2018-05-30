#include <iostream>
#include <vector>

using namespace std;
void generate(int left, int right , string now, vector<string>& vec){
    if(left == 0 && right == 0){
        vec.push_back(now);
        return ;
    }
    if(left > 0)
        generate(left - 1, right, now + '(',vec);
    if(right > 0 && left < right)
        generate(left , right - 1, now + ')',vec);

}
vector<string> generateParenthesis(int n) {
    vector<string> vec;
    generate(n,n,"",vec);
    return vec;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}