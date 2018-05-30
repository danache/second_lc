#include <iostream>
using namespace std;
int reverse(int x) {
    int res = 0;
    while(x != 0){
        if (abs(res) > INT32_MAX / 10)
            return 0;
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res;
}
int main() {
    reverse(-989);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}