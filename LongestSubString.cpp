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
        vector<char> subString;
        subString.push_back(s[root_pos]);
        for(int j=root_pos+1;j<=length+1;j++){
            //cout<<subString.at(0)<<endl;
            if(!(count(subString.begin(),subString.end(),s[j]))){
                subString.push_back(s[j]);
            }else{
                root_pos = j;
                if (longestLength<subString.size())
                {
                    longestLength = subString.size();
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