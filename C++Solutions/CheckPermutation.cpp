#include<iostream>
using namespace std;

bool isPermutation(string s1, string s2){
    if(s1.length()!= s2.length() || s1 == s2){
        return false;
    }

    int sums1 = 0;
    int sums2 = 0;

    for(int i=0;i<s1.length();i++){
        int val1 = s1[i];
        int val2 = s2[i];

        sums1+=val1;
        sums2+=val2;
    }

    if (sums1 == sums2){
        return true;
    }
    return false;
    
}

int main(){
    string s1 = "abc";
    string s2 = "bca";

    cout<<"is permutation: "<<isPermutation(s1,s2)<<endl;


}