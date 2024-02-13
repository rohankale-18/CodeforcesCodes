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
       int n,k;
       cin>>n>>k;
       if(n==1){
        cout<<k<<endl;
       }
       else if(n<=k){
        int a=k/n;
        int b=k%n;
        if(b!=0) a++;
        cout<<a<<endl;
       }
       else{
        int a=n/k;
        int b=n%k;
        if(b!=0) a++;
        k*=a;
        a=k/n;
        b=k%n;
        if(b!=0) a++;
        cout<<a<<endl;
       }
    }
    return 0;
}