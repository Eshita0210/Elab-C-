#include <iostream>
using namespace std;
class Student {
public:
void Identity (string name, int id)
{
    cin>>name>>id; 
    cout<<name<<" "<<id<<endl;
}
void Identity (int id, string name) 
{
    cin>>id>>name;
cout<<name<<" "<<id;
}};
int main()
{
int id=8;
string name;
Student Details;
Details.Identity(name,id);
Details.Identity(id,name);
return 0;}
