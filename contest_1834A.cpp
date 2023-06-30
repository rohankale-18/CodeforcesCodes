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
       int n,minus=0,plus=0,count=0;
       cin>>n;
       vector<int> v;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            minus++;
        }
        else{
            plus++;
        }
        v.push_back(x);
       }
       if(n<=3){
        cout<<minus<<endl;
       }
       else{
        if(minus%2==0){
            if(plus>=minus){
                cout<<0<<endl;
            }
            else{
                count=0;
                while(minus>plus){
                    minus-=2;
                    plus+=2;
                    count+=2;
                }
                cout<<count<<endl;
            }
        }
        else{
            if(plus>=minus-2){
                cout<<1<<endl;
            }
            else{
                count=0;
                while(minus>plus){
                    if(count==0){
                    minus-=1;
                    plus+=1;
                    count+=1;
                    }
                    else{
                        minus-=2;
                    plus+=2;
                    count+=2;
                    }
                }
                cout<<count<<endl;
            }
        }
       }
    }
    return 0;
}   