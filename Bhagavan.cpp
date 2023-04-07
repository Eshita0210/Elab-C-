#include <iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float height;
    float weight;
    
  student(){name="Bhagavan";roll=1593;height=172.5;weight=60.4;}
 void getdata(){
     cin>>name>>roll>>height>>weight;
 }
  void displaydata(){
      cout<<name<<" "<<roll<<" "<<height<<" "<<weight<<endl;
  }
    
};
int main()
{student s1,s2;
s1.getdata();

s1.displaydata();
s2.displaydata();


	return 0;
}
