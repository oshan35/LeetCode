#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// 1 2 3 4


ListNode* swapPairs(ListNode* head) {
    if(head==NULL || head->next==NULL){

        return head;
    }
    
    ListNode *first=head,* second= head->next;
    first->next =swapPairs(head->next->next);
    
    second->next =first;
    return second;
    
}

void printList(ListNode* node)
{
    while (node != NULL) 
    {
        printf("%d  ", node->val);
        node = node->next;
    }
}


int main(){
    ListNode *linkedList1;
    linkedList1=new ListNode(1,new ListNode(2, new ListNode(3,new ListNode(4))));
    // ListNode *linkedList2;
    // linkedList2=new ListNode(1,new ListNode(3,new ListNode(4)));

    ListNode *result=swapPairs(linkedList1);
    
    printList(result);
    return 0;
}