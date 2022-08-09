#include<iostream>
using namespace std;
#include<string.h>
#include <vector>
#include <algorithm>


//abca
int lengthOfLongestSubString(string s){
    if(s.length()==1){
        return 1;
    }
    int length = s.length()-1;
    
    int longestLength = 0;
    //string longestString = "";
    int root_pos = 0;
    while(root_pos<length){
        if(longestLength>(length-root_pos)){
            break;
        }
        string subString;
        subString+=s[root_pos];
        for(int j=root_pos+1;j<=length+1;j++){
            //cout<<subString.at(0)<<endl;
            if(!(count(subString.begin(),subString.end(),s[j]))){
                subString+=s[j];
            }else{
                root_pos = j;
                if (longestLength<subString.length())
                {
                    longestLength = subString.length();
                }
                
                break;
            }
 
        
        }

    }

    

    return longestLength;
}

int main(){
    int length = lengthOfLongestSubString(" ");
    cout<<"Longest length: "<<length<<endl;
}