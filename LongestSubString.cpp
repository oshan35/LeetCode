#include<iostream>
using namespace std;
#include<string.h>
#include <algorithm>

//abca
int lengthOfLongestSubString(string s){
    int length = s.length();
    int longestLength = 0;
    //string longestString = "";
    for(int i=0;i<length;i++){
        for(int j=1;j<=length;j++){
            string sub;
            if(i+j <= length){
                sub = s.substr(i,j);
            }else{
                break;
            }
            bool canuse=true;

            for(int letter=0;letter<sub.length();letter++){
                size_t n= count(sub.begin(),sub.end(),sub[letter]);
                if(n>1){
                    canuse = false;
                    break;
                }
            }

  
            if(longestLength<sub.length() && canuse){
                longestLength = sub.length();
                //longestString = s.substr(i,j);
            }
        }

    }

    return longestLength;
}

int main(){
    int length = lengthOfLongestSubString("bbbbb");
    cout<<"Longest length: "<<length<<endl;
}