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
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool check;
        int acount(0),bcount(0),o(0);
        for(int i = 0 ; i < n;i++){
            if(s[i] == 'A'){
                acount++;
            }else{
                bcount++;
            }

            if(n&2 == 0 && i == n/2 && (acount != n/2 || bcount != n/2)){
                o = 1;
            }
        }
        if(acount == bcount){
            check = true;
        }
        if(check && o == 1){
            cout<<"?"<<endl;
        }else if(s[n-1] == 'A'){
            cout << "A" << endl;
        }else if(s[n-1] == 'B'){
            cout << "B" << endl;
        }

    }

    return 0; 
} 
