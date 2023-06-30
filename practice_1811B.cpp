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
       int n,x1,y1,x2,y2;
       cin>>n>>x1>>y1>>x2>>y2;
       if(x1>(n/2)){x1=n+1-x1;}
       if(y1>(n/2)){y1=n+1-y1;}
       if(x2>(n/2)){x2=n+1-x2;}
       if(y2>(n/2)){y2=n+1-y2;}
       int a=min(x1,y1);
       int b=min(x2,y2);
    //    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    //    cout<<a<<" "<<" "<<b<<endl;
       cout<<abs(a-b)<<endl;
    }
    return 0;
}