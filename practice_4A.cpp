#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int w;
    cin>>w;
    if(w%2==0 && w>2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}