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
       int n,left=INT_MAX, right=INT_MAX, com=INT_MAX;
       cin>>n;
       for(int i=0;i<n;i++){
        int mins;
        string skills;
        cin>>mins>>skills;
        if(skills[0]=='1' && skills[1]=='1'){
            com=min(com,mins);
        }
        else if(skills[0]=='1'){
            left=min(left,mins);
        }
        else if(skills[1]=='1'){
            right=min(right,mins);
        }
       }
       if(com!=INT_MAX){
        if(left!=INT_MAX && right!=INT_MAX){
            cout<<min(com,left+right)<<endl;
        }
        else{
            cout<<com<<endl;
        }
       }
       else{
        if(left!=INT_MAX && right!=INT_MAX){
            cout<<left+right<<endl;
        }
        else{
            cout<<-1<<endl;
        }
       }
    }
    return 0;
}
