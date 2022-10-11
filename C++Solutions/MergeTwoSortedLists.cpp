#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){

    if (!list1)
    {
        return list2;
    }
    if (!list2)
    {
        return list1;
    }
    
    if (list1->val<list2->val)
    {
        list1->next = mergeTwoLists(list1->next,list2);
        return list1;
    }else
    {
        list2->next = mergeTwoLists(list1,list2->next);
        return list2;
    }


}

// ListNode* createLinkedList(int list[]){
//     if(sizeof(list)/sizeof(list[0])==0){
//         return
//     }

//     return ListNode()
// }

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
    linkedList1=new ListNode(1,new ListNode(2, new ListNode(5)));
    ListNode *linkedList2;
    linkedList2=new ListNode(1,new ListNode(3,new ListNode(4)));

    ListNode *result=mergeTwoLists(linkedList1,linkedList2);
    
    printList(result);
    return 0;
}