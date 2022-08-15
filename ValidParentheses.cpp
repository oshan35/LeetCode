#include <stdio.h>
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main()
{
    string s="()[]{}";
    std::map<char, char> dict = {{'(','1'},{'[','2'},{'{','3'},{'}','4'},{']','5'},{')','6'}};

    string map ="";

    for (int  i = 0; i < s.length(); i++)
    {
        map+=dict[s[i]];
    }

    for(int j=0;j<map.length();j++){
        int pos = (int) map[j];
        cout<<pos<<endl;
    }
    
    
    return 0;
}