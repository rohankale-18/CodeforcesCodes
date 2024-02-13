#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    double n,x,y;
    cin>>n>>x>>y;
    double z=(y*n)/100;
    double a=ceil(z);
    cout<<max(0.0,a-x)<<endl;
    return 0;
}