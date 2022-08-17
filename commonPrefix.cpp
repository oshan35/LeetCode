#include <iostream>
using namespace std;
#include <vector>

string longestCommonPrefix(vector<string>& strs){
    string shortestStr=strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        if (strs[i].length()<shortestStr.length())
        {
            shortestStr = strs[i];
        }
        
    }
    //bool flag = true;
    int j = 0;
    while(j<strs.size())
    {
        int shortestLength = shortestStr.length();
        if (strs[j].substr(0,shortestLength)!= shortestStr)
        {
            j = 0;
            shortestStr.erase(shortestLength-1);
        }else{
            j++;
        }

 
        
    }
    return shortestStr;
    

    
    
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    string str=longestCommonPrefix(strs);
    cout<<str<<endl;
    return 0;
}