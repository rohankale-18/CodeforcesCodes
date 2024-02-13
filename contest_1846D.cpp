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
       double d,h;
       cin>>n>>d>>h;
       vector<double> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       double area=(d*h)/2; 
       double com=0;
       double ans=area;
       for(int i=1;i<n;i++){
        if(v[i-1]+h>v[i]){ 
            com=((v[i-1]+h-v[i])*(v[i-1]+h-v[i])*d)/(2.0*h);
            ans-=com;
        }
        ans+=area;
       }
       cout<<fixed<<setprecision(10)<<ans<<endl;
    }
    return 0;
}
