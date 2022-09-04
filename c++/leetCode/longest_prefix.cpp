#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;



 string longestCommonPrefix(vector<string>& strs) {
      string s="";
        int n = strs.size();
        
      

        for(int i=0;i<strs[0].length();i++)
        {
            
            char ch = strs[0][i];
            
            bool match=true;
            
            for(int j=1;j<n;j++)
            {
                if(strs[j][i]!=ch||strs[j].length()<i)
                    match=false;
            }
            if(match)
                s+=ch;
            else
                break;
            
        }
        return s;
    }

int main()
{
system("cls");

// string strs[]={"honor","honour","honourable","horns","horny","house"};
// int n= sizeof(strs)/sizeof(strs[0]);
// string name="Illa";
// //cout<<endl<<longestPrefix(strs,n);
// sort(strs,strs+n);
// for(int i=0;i<n;i++)
// {
//     cout<<endl<<strs[i];
// }

vector<string> strs= {"flower","flow","flew"};
cout<<longestCommonPrefix(strs);

return 0;
}