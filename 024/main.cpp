#include <iostream>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
ListNode* swapPairs(ListNode* head) {
    if(!head)
        return head;
    ListNode* shaobing = new ListNode(0);
    shaobing -> next = head;
    ListNode* p1 = head;
    ListNode* p2 = head -> next;
    ListNode* pre = shaobing;

    while(p1 && p2){
        pre -> next = p2;
        p1 -> next = p2 -> next;
        p2 -> next = p1;
        pre = pre -> next -> next;
        p1 = p1 -> next;
        if(p1)
            p2 = p2 -> next -> next -> next ;

    }
    if(p1)
        pre -> next = p1;
    return shaobing->next;
}
void printfunc(ListNode* head){
    while (head) {

        cout << head->val << " ";
        head = head -> next;
    }
    cout << endl;
}
int main() {
    ListNode* p1 = new ListNode(0);
    ListNode* p2 = new ListNode(1);
    ListNode* p3 = new ListNode(2);
    ListNode* p4 = new ListNode(3);
    p1 -> next = p2;
    p2 -> next = p3;
    p3 -> next = p4;
    printfunc(p1);
    ListNode* res = swapPairs(p1);
    printfunc(res);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}