#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) {
    int length=0;
    ListNode* temp;
    temp= head;
    
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    if(length == 1){
        return true;
    }
    
    //cout<<length/2<<endl;
    
    ListNode* curr = head;
    ListNode* next = NULL;
    ListNode* prev = NULL;
    
    int nodeNumber =0;
        while(curr != NULL){
            if(nodeNumber < length/2){
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;

            }else{
                int val1= prev->val;
                int val2= curr->val;

                //cout<< "val 1: "<< val1<<endl;
                //cout<< "val 2: "<< val2<<endl;

                if(val1 != val2){
                    return false;
                    break;
                }

                prev = prev -> next;
                curr = curr -> next;
            }
            nodeNumber++;


        }

        //cout<<prev->val<<endl;


        return true;

}


int main(){
    ListNode *linkedList1;
    linkedList1=new ListNode(1,new ListNode(2, new ListNode(5)));
    ListNode *linkedList2;
    linkedList2=new ListNode(1,new ListNode(3,new ListNode(4)));

    bool result=isPalindrome(linkedList1);
    
    cout<<result<<endl;
    return 0;
}