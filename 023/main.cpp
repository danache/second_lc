#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {};
};
struct cmp{

    bool operator()(ListNode* a,  ListNode* b){

        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.empty())
        return NULL;
    if(lists[0] == NULL)
        return NULL;
    priority_queue<ListNode*, vector<ListNode*>, cmp>p;
    for(auto i : lists) {
        if(i)
            p.push(i);
    }
    ListNode* shaobing = new ListNode(-1);
    ListNode* now = shaobing;

    while(!p.empty()){
        ListNode* tmp = p.top();
        p.pop();
        now -> next = tmp;
        now = now -> next;
        if(tmp -> next)
            p.push(tmp -> next);
    }
    return shaobing -> next;

}

int main() {
    ListNode* a = new ListNode(1);
    ListNode* b = new ListNode(2);
    ListNode* c = new ListNode(3);
    ListNode* d = new ListNode(4);
    ListNode* e = new ListNode(5);
    ListNode* f = new ListNode(6);

    vector<ListNode*> lists = {f,a,NULL,e,c,d};
    ListNode* res = mergeKLists(lists);
    while(res){
        cout << res -> val << " ";
        res = res -> next;
    }



    return 0;
}