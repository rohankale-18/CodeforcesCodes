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
       int n,m,h;
       cin>>n>>m>>h;
       vector<vector<int>> v(n,vector<int> (m));
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v[i][j]=x;
        }
       }
       vector<pair<int,int>> ans;
       for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
       }
       for(int i=1;i<n;i++){
        int sum=0,points=0,penalty=0;
        for(int j=0;j<m;j++){
            sum+=v[i][j];
            if(sum<=h){
                points--;
                penalty+=sum;
            }else{
                break;
            }
        }
        ans.push_back(make_pair(points,penalty));
       }
       int sum=0,points=0,penalty=0;    
       for(auto i:v[0]){
        sum+=i;
        if(sum<=h){
            points--;
            penalty+=sum;
        }
        else{
            break;
        }
       }
       sort(ans.begin(),ans.end());
       while(ans.size() && (ans.back()>=make_pair(points,penalty))){
        ans.pop_back();
       }
       cout<<ans.size()+1<<endl;
    }
    return 0;
}