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
       int n,k,d,w;
       cin>>n>>k>>d>>w;
       vector<int> v(n,INT_MAX);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       int x=v[0],cnt=0,size=0;
       for(int i=0;i<n;i++){
        if(x+w>=v[i]-d){
            size++;
            if(k==size){
                int a=i;
                cnt++;
                size=0;
                x=v[a+1];
            }
        }
       }  
       if(size>0){
        cnt++;
       }     
       cout<<cnt<<endl;
    }
    return 0;
}