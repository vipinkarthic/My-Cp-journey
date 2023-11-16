#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int x;
		cin >> x;
		int o;
		int a = 0, b = 0;
		for(int i = 0 ; i < x ; i++){
			for(int j = 0 ; j < x ; j++){
				a = i;
				b = j;
				if(((a*a*a)+(b*b*b)) == x){
					o = 0;
					cout << "YES" << endl;
					break;
				}else{
					o = 1;
				}
			}
			if(o == 0){
				break;
			}
		}
		if(o == 1){
			cout << "NO" << endl;
		}
	}
}