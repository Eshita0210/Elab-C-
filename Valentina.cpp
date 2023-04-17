#include <iostream>

using namespace std;

int power(int x,int p);
int power(int x,int y,int p);
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,odd=0;
        cin>>n;
        int z=power(n,odd);
        //cout<<n<<z;
        power(n,z,1);
}
	return 0;
}
int power(int x,int p){
    int a[2*x];
    for(int i=0;i<2*x;i++){
        cin>>a[i];
        if(a[i]%2==1)
        p++;
    }
    return p;
}
int power(int x,int y,int p){
    if(x==y)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 1;
}
