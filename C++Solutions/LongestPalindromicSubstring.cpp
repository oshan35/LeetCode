#include<iostream>
using namespace std;
#include<string>

//s = "babad"
//s = "cbbd"
// aacabdkacaa

// string longestPalindrome(string s) {

//         string longestPaldromicSubstring ="";

//         if (s.length()==1)
//         {
//             longestPaldromicSubstring=s;
//             return longestPaldromicSubstring;
//         }


//         for (int i = 0; i < s.length()-1; i++)
//         {
//             int left = i;
//             int right = s.length() - left-1;

//             int travers;

//             if (left<right)
//             {
//                 travers = left;
              
//             }else{
//                 travers = right;
           
//             }


//             string substringeven="";
//             substringeven+=s[i];

//             string substringodd="";

//             for (int j=1;j<=travers;j++)
//             {

//                 if (s[i-j]==s[i+j] && (i+j<s.length()))
//                 {
//                     substringeven =  s[i-j]+substringeven+s[i+j];

//                 }else{
//                     break;
//                 }

//             }

//             for (int k = 0; k <= travers; k++)
//             {   

//                 if (s[i-k]==s[i+k+1] && (i+k+1 < s.length()))
//                 {
//                     substringodd = s[i-k]+substringodd+s[i+k+1];
                   
//                 }else{
//                     break;
//                 }
//             }

//             if (longestPaldromicSubstring.length()<substringeven.length())
//             {
//                 longestPaldromicSubstring = substringeven;
//             }

//             if (longestPaldromicSubstring.length()<substringodd.length())
//             {
//                 longestPaldromicSubstring = substringodd;
//             }


//         }
//         return longestPaldromicSubstring;
    
// }

string longestPalindrome(string s) {

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

            if (left<right)
            {
                travers = left;
              
            }else{
                travers = right;
           
            }
            string substring="";

            if(s[i]==s[i+1]){
                //substring+=s[i];
                for (int k = 0; k <= travers; k++)
                {   

                    if (s[i-k]==s[i+k+1] && (i+k+1 < s.length()))
                    {
                        substring= s[i-k]+substring+s[i+k+1];
                    
                    }else{
                        break;
                    }
                }
            }else if(s[i-1]==s[i+1]){
                for (int j=1;j<=travers;j++)
                {

                    if (s[i-j]==s[i+j] && (i+j<s.length()))
                    {
                        substring =  s[i-j]+substring+s[i+j];

                    }else{
                        break;
                    }

                }

            }

            if (longestPaldromicSubstring.length()<substring.length())
            {
                longestPaldromicSubstring = substring;
            }


        }
        return longestPaldromicSubstring;
    
}

// iabba




int main(){
<<<<<<< HEAD
    string s="babad";
=======
    string s="aacabdkacaa";
>>>>>>> 2f3883d68b29eaae5ef3aed9afc20b057d26e453
    string reslut=longestPalindrome(s);
    cout<<reslut<<endl;
    return 0;
}