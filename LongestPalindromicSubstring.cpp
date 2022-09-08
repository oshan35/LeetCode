#include<iostream>
using namespace std;
#include<string>

//s = "babad"
//s = "cbbd"

string longestPalindrome(string s) {

    // int longestPaldromicSubstringLength=0;
    string longestPaldromicSubstring ="";

    if (s.length()==1)
    {
        longestPaldromicSubstring=s;
        return longestPaldromicSubstring;
    }
    

    for (int i = 0; i < s.length()-1; i++)
    {
        int left = i;
        int right = s.length() - left-1;

        int travers;
        int traversDirection;
        if (left<right)
        {
            travers = left;
            //traversDirection = -1;
        }else{
            travers = right;
            //traversDirection = 1;
        }
        // cout<<"Start: "<<s[i]<<endl;
        string substringeven="";
        substringeven+=s[i];
        string substringodd="";

        for (int j=1;j<=travers;j++)
        {
        
            // cout<<"odd number"<<endl;
            // cout<<"left: "<<s[i-j]<<" travers no: "<<travers<<" right: "<<s[i+j]<<endl;
            if (s[i-j]==s[i+j])
            {
                substringeven =  s[i-j]+substringeven+s[i+j];
                /* code */
            }
            

            //int index = i + (travers*traversDirection);
            //char ch = s[index];
            
        }
        
        for (int k = 0; k <= travers; k++)
        {
            // cout<<"Even number"<<endl;
            // cout<<"left: "<<s[i-k]<<" travers no: "<<travers<<" right: "<<s[i+k+1]<<endl;
            if (s[i-k]==s[i+k+1])
            {
                substringodd = s[i-k]+substringodd+s[i+k+1];
                /* code */
            }
        }

        if (longestPaldromicSubstring.length()<substringeven.length())
        {
            longestPaldromicSubstring = substringeven;
        }
        
        if (longestPaldromicSubstring.length()<substringodd.length())
        {
            longestPaldromicSubstring = substringodd;
        }

        // cout<<"----------"<<endl;
        
        
        
        
        
    }
    return longestPaldromicSubstring;
    
}

int main(){
    string s="aacabdkacaa";
    string reslut=longestPalindrome(s);
    cout<<reslut<<endl;
    return 0;
}