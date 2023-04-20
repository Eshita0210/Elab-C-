#include<iostream>
#define T  void operator ==(compare) int isPalindrome()
using namespace std;
int main()    
{int n,r,sum=0,temp;    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("Palindrome number");    
else    
printf("Not a Palindrome number");   
return 0;  
}
