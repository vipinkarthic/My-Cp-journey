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
#define WL(a) while(a--)

void printvec(vi no_candies){
	cout << "---" << endl;
	for(int x : no_candies){
		cout << x << " " ;
	}
	cout << endl;
}

void printvec2(vi no_candies){
	cout << "***" << endl;
	for(int x : no_candies){
		cout << x << " " ;
	}
	cout << endl;
}


int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 
	int n;
	int m;
	cin >> n >> m;
	int count = 0;
	vi no_candies;

	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		no_candies.PB(x);
	}
	cout << "orginal" << endl;
	FOR(i,n){
		cout << no_candies[i] << " ";
	}
	cout << endl;
	int i = 0;
	int arr[n] = {1};
	while(no_candies.size() > 0){
		if(no_candies[0] < m || no_candies[0] == m){
			reverse(no_candies.begin(),no_candies.end());
			no_candies.POB();
			reverse(no_candies.begin(),no_candies.end());
			count++;
			printvec2(no_candies);
			if(no_candies.size() <= 0){
				break;
			}
			if(i<n){
				arr[i] = 1;
				i++;
				cout << "THESE ARE ARRAYS:";
				for(int x : arr){
					cout << " " << x;
				}
				cout << endl;
			}else{
				arr[i%n+1] = 1;
				i++;
				cout << "THESE ARE ARRAYS:";
				for(int x : arr){
					cout << " " << x;
				}
				cout << endl;
			}
			if(no_candies.size() == 0){
				break;
			}

		}else{
			no_candies[0] = abs(m-no_candies[0]);
			reverse(no_candies.begin(),no_candies.end());
			reverse(no_candies.begin(),no_candies.end()-1);
			count++;
			printvec(no_candies);
			i++;
		}
	}
	int ans = 0;

	FOR(i,n){
		if(arr[i] == 0){
			ans = i;
			break;
		}
	}

	cout << "Answer : " << ans+1;


	return 0; 
} 
