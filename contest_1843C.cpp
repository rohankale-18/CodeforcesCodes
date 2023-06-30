#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int solve(int n){
    if(n==1) { 
    return 1;
    }
    else{
        return n+solve(n/2);
    }
}


int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n,ans=0;
       cin>>n;
       int x;
       x=solve(n);
       cout<<x<<endl;
    }
    return 0;
}