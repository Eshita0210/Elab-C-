#include <iostream>
using namespace std;
class triangle{
    public:
    int a,b,c;
    void read(){
        cin>>a>>b>>c;
    }
    void check(){
        if(a==b || b==c || a==c)
        cout<<"ISOSCELES";
        else
        cout<<"NOT ISOSCELES";
    }
};
class isosceles : public triangle {
};
int main()
{
    isosceles obj;
    obj.read();
    obj.check();
	return 0;
}
