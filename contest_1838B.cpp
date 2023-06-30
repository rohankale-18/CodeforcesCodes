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
       vector<int> v;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
       }
       auto it = std::minmax_element(v.begin(), v.end());
       int idx1 = std::distance(v.begin(), it.first);
       int idxn = std::distance(v.begin(), it.second);
       int idx2;
       for(int i=0;i<n;i++){
        if(v[i]==2){
            idx2=i;
        }
       }
    //    int min=*min_element(v.begin(),v.end());
       if(idxn>idx1 && idxn<idx2){
        cout<<idx1+1<<" "<<idx2+1<<endl;
       }
       else if(idxn<idx1 && idxn>idx2){
        cout<<idx1+1<<" "<<idx2+1<<endl;
       }
       else if(idxn<idx1 && idxn<idx2){
        int x=min(idx1,idx2);
        cout<<idxn+1<<" "<<x+1<<endl;
       }
       else if(idxn>idx1 && idxn>idx2){
        int x=max(idx1,idx2);
        cout<<idxn+1<<" "<<x+1<<endl;
       }
    }
    return 0;
}