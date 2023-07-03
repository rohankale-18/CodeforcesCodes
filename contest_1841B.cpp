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
       int q,first,last,x;
       bool flag=false;
       cin>>q;
       vector<int> ans(q);
       cin>>first;
       last=first;
       ans[0]=1;
       for(int i=1;i<q;i++){
        cin>>x;
        if(flag){
            if(last<=x && x<=first){
                ans[i]=1;
                last=x;
            }
            else{
                ans[i]=0;
            }
        }
        else{
            if(last <= x){
                ans[i]=1;
                last=x;
            }
            else if(x<=first){
                ans[i]=1;
                last=x;
                flag=1;
            }
            else{
                ans[i]=0;
            }
        }
       }
       for(int i=0;i<q;i++){
        cout<<ans[i];
       }cout<<endl;
    }
    return 0;
}