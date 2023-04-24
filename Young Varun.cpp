#include <iostream>
using namespace std;
class Gift {
    public:virtual void Cubes()=0;
};
class Birthday:public Gift{
    public:
    int a[10],n;
    void Cubes(){
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n/2;i+=2)
            /*int temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;*/
            swap(a[i],a[n-i-1]);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
};
int main()
{
    Birthday obj;
    obj.Cubes();
	return 0;
}
