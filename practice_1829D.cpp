#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool solve(int n,int m){
    if(n==m){
        return true;
    }
    else if(n%3!=0){
        return false;
    }
    else{
        return (solve(n/3,m) || solve(2*n/3,m));
    }
}

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n,m;
       cin>>n>>m;
       if(solve(n,m)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}