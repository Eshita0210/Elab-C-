#include <iostream>
using namespace std;
void hi(){
    cout<<"while";
}
int main()
{int number,a,b,c;
cin>>number;
    a=number/100;
    b=(number/10)-(a*10);
    c=(number)-(b*10)-(a*100);
    if((a*a*a)+(b*b*b)+(c*c*c)==number)
    cout<<"Part of Memorable Coin";
    else
    cout<<"Not a Part of Memorable Coin";
}
