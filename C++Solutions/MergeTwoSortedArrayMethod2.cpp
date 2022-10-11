#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){

//     if (!list1)
//     {
//         return list2;
//     }
//     if (!list2)
//     {
//         return list1;
//     }
    
//     if (list1->val<list2->val)
//     {
//         list1->next = mergeTwoLists(list1->next,list2);
//         return list1;
//     }else
//     {
//         list2->next = mergeTwoLists(list1,list2->next);
//         return list2;
//     }


// }
// [1, 2, 3, 4, 5]
// [1x2x4x5]

// 1 1 2 3 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* head;
    ListNode* curr = list1;
    head = curr;
    while (curr->next!=NULL && list2->next!=NULL)
    {
        int val1 = curr->val;

        int val2 = list2->val;

        int val3 = curr->next->val;

       if (val1<=val2 && val2 <val3)
       {
            ListNode* temp = curr->next;
            curr->next = list2;
            list2 = list2->next;
            curr = curr->next;
            curr ->next = temp;
       }else{
            curr = curr->next;

       }
        
        
    }
    
    return head;
};

// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//     ListNode* head = list1;
//     // head -> 2 1 3 5
//     // curr -> 2 4 6
//     ListNode* curr = list2;
//     while (list1->next!=NULL)
//     {
//         // ListNode* curr = list2;
//         curr->next = head;
//         int val1 = curr->val;
//         int val2 = head->val;
//         while (val1>val2)
//         {
//             // ListNode* temp = head->next;
//             // curr->next = temp;
//             // head->next = curr;
           
//         }
//         list2=list2->next;
        
        
//     }
    
// }

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