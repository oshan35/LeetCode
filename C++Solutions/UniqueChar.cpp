#include<iostream>
using namespace std;

bool isUniqueCharacters(string s){

    if(s.length()>128){
        return false;
    }

    bool charset[128];

    for (int i = 0; i < s.length(); i++)
    {
        int aschiiVal = s[i];

        if(charset[aschiiVal]){
            return false;
        }

        charset[aschiiVal] = true;
        
    }
    return true;
}

int main(){
    string s ="abc";

    cout<<isUniqueCharacters(s)<<endl;
}

