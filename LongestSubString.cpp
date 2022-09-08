#include<iostream>
using namespace std;
#include<string.h>
#include <vector>
#include <algorithm>



//pwyx y wkew

int lengthOfLongestSubString(string s){
    if(s.length()==1){
        return 1;
    }
    int longestLength=0;
    string longestSubString = ""; // xy
    longestSubString+=s[0];

    for (int i = 1; i < s.length(); i++) // i=2
    {
        char curr = s[i]; // curr = w
    
        for (int j = 0; j < longestSubString.length(); j++)
        {
            char item = longestSubString[j]; // w
            if (curr==item)
            {
                longestSubString.erase(0,j+1);
                break; 
            }
            
        }
        
        longestSubString+=curr; // pw
        if (longestLength<longestSubString.length())
        {
            longestLength = longestSubString.length();
        }
        
    }
    
    return longestLength;
}

int main(){
    int length = lengthOfLongestSubString("pwyxywkew");
    cout<<"Longest length: "<<length<<endl;
}