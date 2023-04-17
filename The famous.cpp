#include <iostream>
using namespace std;
class Contest{
 public:
 int a;
 Contest(int z){
 a=z;
 }
 Contest operator ++ (){
 if(a >= 1 && a <= 125)
 cout<<"4";
 else if( a >=126 && a <= 211)
 cout<<"6";
 else
 cout<<"8";
 return 1;
 }
};
int main()
{
 int n;
 cin>>n;
 Contest obj(n);
 ++obj;
return 0;
}
