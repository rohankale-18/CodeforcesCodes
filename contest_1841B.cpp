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
       int q,first,second;
       cin>>q;
       vector<int> v;
       for(int i=0;i<q;i++){
        int x;
        cin>>x;
        v.push_back(x);
       }
       if(q==1){
        cout<<1;
       }else{
        first=v[0];
        second=v[1];
        cout<<11;
       }
       for(int i=2;i<q;i++){
        if(first<=second){
            if(v[i]>=second){
                cout<<1;
                second=v[i];
            }
            else if(v[i]<=first){
                cout<<1;
                first=v[i];
            }
            else{
                cout<<0;
            }
        }
        else{
            //second<first
            if(v[i]<=second && v[i]>=first){
                cout<<1;
                if(v[i])
            }
            else{
                cout<<0;
            }
        }
       }cout<<endl;
    }
    return 0;
}