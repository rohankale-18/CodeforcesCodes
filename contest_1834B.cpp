#include<bits/stdc++.h>
#include<string.h>
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
       string l,r;
       cin>>l>>r;
       int ind;
       int ans;
       if(l==r){
        cout<<0<<endl;
       }
       else{
        while(l.size()<r.size()){
            l='0'+l;
        }
        for(int i=0;i<l.size();i++){
            if(l[i]!=r[i]){
                ind=i;
                ans=r[i]-l[i];
                break;
            }
        }
            cout<<ans+9*(r.size()-ind-1)<<endl;
        
       }
    }
    return 0;
}