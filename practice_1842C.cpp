#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x = v.size();
        for (int i = 0; i < v.size() - 1; i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[i] == v[j])
                {
                    vector<int>::iterator it1, it2;
                    it1 = v.begin()+i;
                    it2 = v.begin()+j+1;
                    v.erase(it1,it2);
                    i=0;
                }
            }
        }
        cout<<x-v.size()<<endl;
    }
    return 0;
}