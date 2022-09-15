#include <iostream>
using namespace std;
#include <vector>

string longestCommonPrefix(vector<string>& strs) {
    bool common = true;
    string commonPrefix = "";
    int index= 0;
    while(common){
        if (strs.at(0).length() == index)
        {
            break;
        }
        
        char ch = strs.at(0)[index];
        for (int i = 1; i < strs.size(); i++)
        {   
            string word = strs.at(i);
            if (word.length() == index)
            {
                common = false;
                break;
            
            }
            
            char ch2 =  word[index];
            if (ch2!=ch)
            {
                common = false;
            }
            
        }
        if (common)
        {
            commonPrefix+=ch;
        }
        index++;
        
    }
    return commonPrefix;  
}

int main(){
    vector<string> test = {"ab","a"};
    string commonPrifix = longestCommonPrefix(test);
    cout<<"Longest common prifix: "<<commonPrifix;
    return 0;
}