#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

// bool isValid(string s) {
//         int a=0,b=0,c=0;
//         for(int i=0;i<s.length();i++)
//         {
//             switch(s[i])
                
//             {
//                 case '(': a++; break;
//                 case ')': a--; break;
//                 case '{': b++; break;
//                 case '}': b--; break;
//                 case '[': c++; break;
//                 case ']': c--; break;
//             }
           
//         }
        
//         if(a==0 && b==0 && c==0)
//             return true;
//         return false;
        
//     }

bool validParenthesis(string s)
{
    string validation="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        validation.push_back('s');
        else if(s[i]=='{')
        validation.push_back('m');
        else if(s[i]=='[')
        validation.push_back('b');
        else if(s[i]==')')
        {
            if(s[s.length()-1]=='s')
            validation.pop_back();
            else
            return false;
        }
        else if(s[i]=='}')
        {
            if(s[s.length()-1]=='m')
            validation.pop_back();
            else
            return false;
        }
        else if(s[i]==']')
        {
            if(s[s.length()-1]=='b')
            validation.pop_back();
            else
            return false;
        }
    }
    
    if(validation=="")
    return true;
    else
    return false;
}


int main()
{
system("cls");

string s ="{}";
cout<<validParenthesis(s);


return 0;
}