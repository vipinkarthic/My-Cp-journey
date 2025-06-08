#include<bits/stdc++.h>
using namespace std; 

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){		
		int n; cin >> n;
		int points[n];
		for(int i = 0; i < n; i++) cin >> points[i];

		if(n>2){
			cout << "NO" << endl;
			continue;
		}


		if(abs(points[0] - points[1]) < 2){
			cout << "NO" << endl;
			continue;
		}

		cout << "YES" << endl;

	}
}