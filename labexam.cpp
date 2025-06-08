#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll; 
typedef double db;
typedef pair<int, int> pi; 
#define MP make_pair 
#define pdd pair<long long, long long>

void line_eqn(pdd P, pdd Q, db &a, db &b, db &c) {
    a = Q.second - P.second;
    b = P.first - Q.first;
    c = a * P.first + b * P.second;
}

void perpendicular_bs(pdd P, pdd Q, db &a, db &b, db &c) {
    pdd m = MP((P.first + Q.first) / 2, (P.second + Q.second) / 2);
    c = -b * m.first + a * m.second;
    swap(a, b);
    b = -b;
}

pdd intersection_coords(db a1, db b1, db c1, db a2, db b2, db c2) {
    db d = (ll)(a1 * b2 - a2 * b1);
    return d == 0 ? MP((db)LLONG_MAX * -1LL - 1, (db)LLONG_MAX * -1LL - 1) : MP((b2 * c1 - b1 * c2) / d, (a1 * c2 - a2 * c1) / d);
}

void fcc(pdd P, pdd Q, pdd R) {
    db a, b, c;
    line_eqn(P, Q, a, b, c);

    db e, f, g;
    line_eqn(Q, R, e, f, g);

    perpendicular_bs(P, Q, a, b, c);
    perpendicular_bs(Q, R, e, f, g);

    pdd circumcenter = intersection_coords(a, b, c, e, f, g);

    if (circumcenter.first == (LLONG_MAX * -1LL - 1) && circumcenter.second == (LLONG_MAX * -1LL - 1)) {
        cout << "Parallel Lines";
    } else {
        cout << "The circumcenter -> (" << abs(circumcenter.first) << ", " << abs(circumcenter.second) << ")";
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

    int t = 3;
    while(t--) {
        solve();
        cout << "\n";
    }

    return 0;
}
