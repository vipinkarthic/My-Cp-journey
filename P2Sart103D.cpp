#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	while(t--){
		int x,y;
		cin >> x >> y;
		int total = x/y;
		if(total > 20 || total == 20){
			cout << "20" << endl;
		}else{
			cout << total << endl;
		}
	}

}

