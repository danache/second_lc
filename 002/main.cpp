#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int jinwei = 0;
    stack<int> sta;

    while(l1 && l2){
        int tmp = l1 -> val + l2 ->val + jinwei;
        sta.push(tmp % 10);
        jinwei = tmp / 10;
    }
    ListNode* n = (l1 == NULL ?  l1 : l2);
    while(n != NULL || jinwei != 0){
        int tmp = n ->val + jinwei;
        sta.push(tmp % 10);
        jinwei = tmp / 10;
    }
    ListNode* res;
    ListNode* shaobing;
    shaobing -> next = res;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}