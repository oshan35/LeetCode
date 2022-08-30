#include<iostream>
using namespace std;
#include<string.h>
#include <vector>
#include <algorithm>




int lengthOfLongestSubString(string s){
    if(s.length()==1){
        return 1;
    }
    int longestLength=0;
    string longestSubString = "";
    longestSubString+=s[0];

    for (int i = 1; i < s.length(); i++)
    {
        char curr = s[i];
        bool flag = true;
        for (int j = 0; j < longestSubString.length(); j++)
        {
            char item = longestSubString[j];
            if (curr==item)
            {
                longestSubString.erase(0,j+1);
                break; 
            }
            
        }
        longestSubString+=curr;
        if (longestLength<longestSubString.length())
        {
            longestLength = longestSubString.length();
        }
        
    }
    
    return longestLength;
}

int main(){
    int length = lengthOfLongestSubString("aa");
    cout<<"Longest length: "<<length<<endl;
}