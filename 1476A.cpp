		#include<bits/stdc++.h>
		using namespace std;

		int main(){
			int t;
			cin >> t;
			while(t--){
				long long int n,k,a;
				cin >> n >> k;
				if(n>k){
					cout << 1+(n%k > 0) << endl;
				}else {
					cout << (n+k-1)/n << endl;
				}
		}
	}