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
       int n,even=0;
       cin>>n;
       vector <int> a;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
       }
       sort(a.begin(),a.end());
       for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
       }
       if(a[0]%2==1){
        cout<<"YES"<<endl;
       }
       else if(even==n){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;   
       }
    }
    return 0;
}