#include<iostream>
using namespace std;
#include<map>
#include<vector>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// 1 2 3 4
// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//     map<int,ListNode**> addressMap;
//     int nodeIndex = 0;
//     ListNode* intersectingNode;
//     while (headA->next!=NULL)
//     {
//         int val = headA->val;
//         addressMap[val] = &headA;
//         headA = headA->next; 
//     }

//     while (headB->next!=NULL)
//     {
//         int valB = headB->val;
    
//         if(addressMap.find(valB)!=addressMap.end()){
//             if(&headB == addressMap[valB]){
//                 intersectingNode = headB;
//             }
            
//         }
        
//         headB = headB->next;
//     }

//     return intersectingNode;
    

    
// }

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    vector<ListNode**> addressListA;
    vector<ListNode**> addressListB;
    ListNode* intersectingNode;

    while (headA->next!=NULL && headB->next!=NULL)
    {
        ListNode** addressA = &headA;
        ListNode** addressB = &headB;

        if(count(addressListB.begin(),addressListB.end(),addressA)){
            intersectingNode = headA;
            break;
        }else{
            addressListA.push_back(addressA);
        }
        
        
        if(count(addressListA.begin(),addressListA.end(),addressB)){
            intersectingNode = headB;
            break;
        }else{
            addressListB.push_back(addressB);
        }

        headA= headA->next;
        headB= headB->next;

    }
    

    return intersectingNode;
    

    
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
    ListNode *linkedList2;
    linkedList2=new ListNode(1,new ListNode(3,new ListNode(4)));

    ListNode *result=getIntersectionNode(linkedList1,linkedList2);
    
    printList(result);
    return 0;
}