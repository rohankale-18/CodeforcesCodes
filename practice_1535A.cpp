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
       vector<int> a(2),b(2);
       for(int i=0;i<2;i++){
        cin>>a[i];
       }
       for(int i=0;i<2;i++){
        cin>>b[i];
       }
       int maxa=*max_element(a.begin(),a.end());
       int maxb=*max_element(b.begin(),b.end());    
       int mina=*min_element(a.begin(),a.end());
       int minb=*min_element(b.begin(),b.end());
       if(maxa>minb && maxb>mina){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}