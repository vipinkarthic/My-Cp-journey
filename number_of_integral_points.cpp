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

int find_inside_triangle(int x1, int y1, int x2, int y2, int x3, int y3){
    int area2 = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)); 

    int edge_pts = __gcd(abs(x2 - x1), abs(y2 - y1)) + __gcd(abs(x3 - x2), abs(y3 - y2)) + __gcd(abs(x1 - x3), abs(y1 - y3));

    return (area2 - edge_pts + 2) / 2;

}

void solve(){
    // The two is added since its the point on the common edges
    cout <<  + find_inside_triangle(3,3,6,3,5,2);
}
 
 int main(){ 
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    t = 1;
    while(t--){
        solve();
        cout << "\n";
    }

    return 0;
}