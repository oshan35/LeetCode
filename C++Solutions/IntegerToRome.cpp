#include<iostream>
#include<map>
#include<vector>
using namespace std;

string intToRoman(int num) {
    map<int,string> map = {{1000,"I"}, {500,"D"}, {100,"C"}, {50,"L"}, {10, "X"}, {5, "V"}, {1, "I"}};
    vector<int> keys;
    for (auto it = map.begin(); it != map.end(); it++) {
        keys.push_back(it->first);
    }

    string s="";

    for (int i = 0; i < keys.size(); i++)
    {
        int count = num/keys[i];
        
        if (count!=0)
        {
            s+=map[i];
        }
        

    }
    
    return s;
    

}
int main(){
    int num = 5;
    cout<<intToRoman(num)<<endl;
    return 0;
}