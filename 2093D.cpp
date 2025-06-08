#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for(int(a) = 0;(a) <(c);(a)++) 
#define FORL(a, b, c) for(int(a) =(b);(a) <=(c);(a)++) 
#define FORR(a, b, c) for(int(a) =(b);(a) >=(c);(a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

ll query1(ll n, ll x, ll y){
    if(n==1) {
        if(x==1 && y==1) return 1;
        if(x==2 && y==2) return 2;
        if(x==2 && y==1) return 3;
        return 4;
    }

    ll h(pow(2, n - 1)), num(pow(4, n-1));

    if(x > h){
        if(y > h) return num + query1(n-1, x-h, y-h);
        else return 2*num + query1(n-1, x-h, y);
    }else{
        if(y > h) return 3*num + query1(n-1, x, y-h);
        else return query1(n-1, x, y);
    }
}

pi query2(ll n, ll x){
    if(n==1){
        if(x==1) return MP(1,1);
        if(x==2) return MP(2,2);
        if(x==3) return MP(2,1);
        return MP(1, 2);
    }

    ll h(pow(2, n - 1)), num(pow(4, n-1));

    if(x <= num) return query2(n-1, x);
    else if(x <= 2*num){
        pi p(query2(n-1, x-num));
        return MP(p.first+h, p.second+h);
    }else if(x <= 3 * num){
        pi p(query2(n-1, x-2 * num));
        return MP(p.first + h, p.second);
    }else{
        pi p(query2(n-1, x-3 * num));
        return MP(p.first, p.second+h);
    }
}

void solve(){
    ll n, q; cin >> n >> q;
    while(q--){
        string s; cin >> s;
        if(s=="->"){
            ll x, y; cin >> x >> y;
            cout << query1(n, x, y) << endl;
        }else{
            ll x; cin >> x;
            pi ans(query2(n, x));
            cout << ans.first << " " << ans.second << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
        cout << (t==1 ? "" : "\n");
    }

    return 0;
}