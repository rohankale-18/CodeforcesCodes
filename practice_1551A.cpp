#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int x=n/3;
       int y=n/3;
       if(n%3==1) x++;
       if(n%3==2) y++;
       cout<<x<<" "<<y<<endl;
    }
    return 0;
}