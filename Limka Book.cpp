#include <iostream>
using namespace std;
class Welcomemsg
{
public:
int msg(char fname[100])
{
cout<<"Hi "<<fname<<endl;
return 0;
}
int msg(char fname[100],char lname[100])
{
cout<<"Welcome "<<fname<<" "<<lname<<endl;
return 0;
}
};
int main()
{
Welcomemsg ob;
char fname1[100],fname[100],lname[100];
cin>>fname1>>fname>>lname;
ob.msg(fname);
ob.msg(fname,lname);
return 0;}
