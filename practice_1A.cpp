#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int n,m,a;
    cin>>n>>m>>a;
    int x=n/a;
    if(n%a!=0){
        x++;
    }
    int y=m/a;
    if(m%a!=0){
        y++;
    }
    cout<<x*y<<endl;
    return 0;
}