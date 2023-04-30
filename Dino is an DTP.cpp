#include <iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
       char str[2];
       for(int i=0;i<2;i++){
           cin>>str[i];
           try{
               if(isalpha(str[i]))
               cout<<str[i]<<" is alphabetic"<<endl;
               else 
               throw str[i];
           }
           catch (char f){
               cout<<str[i]<<" is not alphabetic"<<endl;
           }
       }
}
