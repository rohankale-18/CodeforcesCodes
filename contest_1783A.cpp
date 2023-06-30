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
      cin>>n;
      vector <int> v,a(n,0);
      for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
      }
      int temp=v[n-1];
      for(int i=0;i<n-1;i++){
        a[i+1]=v[i];
      }
      a[0]=temp;
      if(a[0]==a[1]){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
        }cout<<endl;
      }
    }
    return 0;
}