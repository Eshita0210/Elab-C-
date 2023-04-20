#include <iostream>
using namespace std;
class staff{
    public:
    string name;
    int code, speed;
    void getdata();
    void display();
};
void staff::getdata(){
    cin>>name;
    cin>>code;
    cin>>speed;
}
void staff::display(){
   cout<<"Name:"<<name<<"\nCode:"<<code<<"\nSpeed:"<<speed;
}
class typist: public staff{
    public:
     void getdata();
    void display();
};
void typist::getdata(){
        cin>>name;
        cin>>code;
        cin>>speed;
}
void typist::display(){
     cout<<"Name:"<<name<<"\nCode:"<<code<<"\nSpeed:"<<speed;
}
int main()
{   typist t;
    t.getdata();
    t.display();


    return 0;
}
