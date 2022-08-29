#include<iostream>
#include<string>
using namespace std;

int main(){
    string test = "Hello";
    cout<<"Before delete: "<<test<<endl;
    test.erase(0,1);
    cout<<"After delete: "<<test<<endl;

    return 0;
}