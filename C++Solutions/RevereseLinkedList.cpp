#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// 1 2 3 4 

// get the head 
// get head.next
// get head.next.next into var
// equal head into head.next
// equal head.next to head
// 
ListNode* reverse(ListNode* node)
{
    if (node == NULL)
        return NULL;
    if (node->next == NULL) {
        //head = node;
        return node;
    }
    ListNode* node1 = reverse(node->next);
    node1->next = node;
    node->next = NULL;
    return node;
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
    linkedList1=new ListNode(1,new ListNode(2, new ListNode(4, new ListNode(5))));
    ListNode *linkedList2;
    linkedList2=new ListNode(1,new ListNode(3,new ListNode(4)));

    ListNode *result=reverse(linkedList1);
    
    printList(result);
    return 0;
}