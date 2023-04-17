#include <iostream>
using namespace std;
class Fraction
{public:int num,deno;
Fraction()
{num=0;
    deno=0;
}
void input()
{cin>>num>>deno;}
Fraction operator -(Fraction obj)
{Fraction temp;
    temp.num=(num*obj.deno)-(deno*obj.num);
    temp.deno=deno*+obj.deno;
    return temp;
}
};
int main()
{Fraction f1,f2,sub;
f1.input();
f2.input();
sub=f1-f2;
if(sub.deno==0)
cout<<"Error";
else if(sub.num%sub.deno==0)
cout<<sub.num/sub.deno;
else
cout<<sub.num<<"/"<<sub.deno;
	return 0;
}
