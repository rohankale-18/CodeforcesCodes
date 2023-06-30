#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2){
            cout<<2*k-1<<endl;
        }
        else{
            cout<<2*k-n<<endl;
        }
    }
    else{
        if(k<=(n/2)+1){
            cout<<2*k-1<<endl;
        }
        else{
            cout<<2*k-n-1<<endl;
        }
    }
    return 0;
}