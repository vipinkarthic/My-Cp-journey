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

void solve(){
    ll i,j,a,b,c,n,k,ans,rem;
    while(cin>>n>>a>>b>>c)
    {
          ans=0;
       for(i=0;i*a<=n;++i)
       {
           for(j=0;i*a+j*b<=n;++j)
           {
                rem=n-i*a-j*b;
                if(rem%c==0)
                {
                    k=rem/c;
                ans=max(ans,i+j+k);}
           }

       }
       cout<<ans<<endl;
    }
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}