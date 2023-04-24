#include<bits/stdc++.h>
using namespace std;
template <class Goodness>
Goodness Transform(Goodness N,Goodness K)
{
    string S;
    cin >> S;
    int cur_score = 0,i;
    for ( i = 0; i < N/2; i++) {
         cur_score += (S[i] != S[N-1-i]);
     }
     return abs((cur_score) - K) ;
}
int main() {
     int T;
     cin >> T;
     while(T--) {
         int N, K; 
    cin >> N >> K;
    cout <<Transform(N,K);
    cout<<endl;
    }
     return 0;
}
