#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n,flag=0,flag2=0;
       cin>>n;
       if (n%2==0 && isSquare(n/2))
        cout<<"YES"<<endl;
       else if (n%4==0 && isSquare(n/4))
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
    return 0;
}