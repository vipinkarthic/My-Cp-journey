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

	string s; cin >> s;
	int n = s.length();
	int count;
	bool check = false;
	vector<int> index;
	FOR(i,n){
		if(s[i]%2 == 0){
			check = true;
			index.PB(i);
			count++;
		}
	}

	if(!check){
		cout << "-1" << endl;
		return 0;
	}

	bool finalcheck = true;
	FOR(i,n){
		if(s[i]%2 == 0 && s[i] > s[n-1] && count > 1){
			continue;
		}else if(s[i]%2 == 0){
			char temp = s[n-1];
			s[n-1] = s[i];
			s[i] = temp;
			cout << s << endl;
			finalcheck = false;
			break;

		}
	}

	if(finalcheck){
		// cout << << endl;
		char temp = s[n-1];
		s[n-1] = s[index[index.size() -1]];
		s[index[index.size() -1]] = temp;
		cout << s << endl;
	}

	return 0; 
} 
