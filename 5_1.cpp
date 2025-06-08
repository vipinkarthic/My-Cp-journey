#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
#define pdd pair<double, double>

void lfp(pdd P, pdd Q, double &a, double &b, double &c) {
    a = Q.second - P.second;
    b = P.first - Q.first;
    c = a * P.first + b * P.second;
}

void pbl(pdd P, pdd Q, double &a, double &b, double &c) {
    pdd m = MP((P.first + Q.first) / 2, (P.second + Q.second) / 2);
    c = -b * m.first + a * m.second;
    swap(a, b);
    b = -b;
}

pdd lli(double a1, double b1, double c1, double a2, double b2, double c2) {
    double d = a1 * b2 - a2 * b1;
    return d == 0 ? MP(DBL_MAX, DBL_MAX) : MP((b2 * c1 - b1 * c2) / d, (a1 * c2 - a2 * c1) / d);
}

void fcc(pdd P, pdd Q, pdd R) {
    double a, b, c;
    lfp(P, Q, a, b, c);

    double e, f, g;
    lfp(Q, R, e, f, g);

    pbl(P, Q, a, b, c);
    pbl(Q, R, e, f, g);

    pdd circumcenter = lli(a, b, c, e, f, g);

    if (circumcenter.first == DBL_MAX && circumcenter.second == DBL_MAX) {
        cout << "The two perpendicular bisectors are parallel, so the points are collinear and do not form a triangle";
    } else {
        cout << "The circumcenter of the triangle PQR is: (" << abs(circumcenter.first) << ", " << abs(circumcenter.second) << ")";
    }
}

void solve() {
    pi P, Q, R;
    int a, b;
    cin >> a >> b; 
    P = MP(a,b);
    cin >> a >> b; 
    Q = MP(a,b);
    cin >> a >> b; 
    R = MP(a,b);

    fcc(P, Q, R);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t = 1;
    while(t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
