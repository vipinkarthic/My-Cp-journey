#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a, b;

        FOR(i, n)
        {
            int temp = 0;
            cin >> temp;
            a.PB(temp);
        }

        FOR(i, n)
        {
            int temp = 0;
            cin >> temp;
            b.PB(temp);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        int check = 0;
        FOR(i, n - 1)
        {
            if (a[i] + b[i] != a[i + 1] + b[i + 1])
            {
                cout << "-1" << endl;
                check = 1;
                break;
            }
        }

        

        if (check)
        {
            continue;
        }
        else
        {
            for (int x : a)
            {
                cout << x << " ";
            }
            cout << endl;
            for (int x : b)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
