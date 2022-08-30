#include <iostream>
#include <string>
#include <map>
using namespace std;

//string s ="{]}";
//map=
bool isValid(string s){
    std::map<char, int> dict = {{'(',1},{'[',2},{'{',3},{'}',4},{']',5},{')',6}};

    bool valid = true;
    string map = "3";

    for (int i = 0; i < s.length(); i++) //i=3
    {
       int num = dict[s[i]];//5
       if(num<4){
            map+=std::to_string(num);
       }else if (num>=4)
       {
            //char prev_char[map[0].length()] = map[0];
            if (map.length()==0) // false
            {
                valid = false;
                break;
            }
            
            int index =map.length()-1; // 0
            
            int prev = map[index]-'0'; // int 3
            
            if (prev+num == 7) // 3+5
            {
                map.erase(index,1);
            }else{
                valid = false;
                break;
            }
            
            
       }
       
    }
    if (map.length()!=0)
    {
        valid = false;
    }
    

    return valid;
    
};

int main(){
    string s ="({[]})";
    //map=132
    bool answer=isValid(s);
    cout<<answer<<endl;
    return 0;
}