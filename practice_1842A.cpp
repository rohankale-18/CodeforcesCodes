#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] > b[j]) {
                a[i] -= b[j];
                j++;
            } else if (a[i] < b[j]) {
                b[j] -= a[i];
                i++;
            } else {
                i++;
                j++;
            }
        }

        if (i < n && j == m) {
            cout << "Tsondu" << endl;
        } else if (j < m && i == n) {
            cout << "Tenzing" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }

    return 0;
}
