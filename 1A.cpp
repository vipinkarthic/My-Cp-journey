
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout.precision(22);
    long double n,m,a,x,y,total;
    cin >> n >> m >> a;
    if(n == 1 && m == 1){
        x = ceil(n/a);
        y = ceil(m/a); 
        total = x*y;
        cout <<total ;
    } else if ( n == 1) {
        y = ceil(m/a); 
        cout << y;
    }else if (m == 1) {
        x = ceil(n/a);
        cout << x;
    } else if (a == m){
        x = ceil(n/a);
        cout << x ;
    }else if ( a == n) {
        y = ceil(m/a); 
        cout <<y;
    }else {
        x = ceil(n/a);
        y = ceil(m/a); 
        total = x*y;
        cout << total;
    }
}
