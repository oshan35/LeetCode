#include <iostream>
#include <string>
#include <map>
using namespace std;
// "()[]{}"
bool isValid(string s){
    std::map<char, int> dict = {{'(',1},{'[',2},{'{',3},{'}',4},{']',5},{')',6}};

    bool valid = true;
    string map = "";

    for (int i = 0; i < s.length(); i++)
    {
       int num = dict[s[i]];
       if(num<4){
            map+=std::to_string(num);
       }else if (num>=4)
       {
            //char prev_char[map[0].length()] = map[0];
            int index =map.length()-1;
            
            int prev = map[index]-'0';
            {
                /* code */
            }
            
            if (prev+num == 7)
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
    string s ="]";
    bool answer=isValid(s);
    cout<<answer<<endl;
    return 0;
}