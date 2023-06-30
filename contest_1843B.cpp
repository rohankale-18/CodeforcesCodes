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
       int n,neg=0;
       cin>>n;
       vector<int> v;
       vector<int> m;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
       }
       for(int i=0;i<n;i++){
        if(v[i]<0){
            neg++;
        }
        else if(v[i]==0){
            continue;
        }
        else{
            if(neg!=0){
                m.push_back(neg);
            }
            neg=0;
        }
       } 
       if(neg!=0){
        m.push_back(neg);
       }
       for(int i=0;i<n;i++){
        v[i]=abs(v[i]);
       }
       int sum=0;
       cout<<accumulate(v.begin(),v.end(),sum)<<" "<<m.size()<<endl;
    }
    return 0;
}