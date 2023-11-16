#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	if( t < 3){
		cout << "GOLD";
	}else if(3<= t && t <6){
		cout << "SILVER";
	}else if(6<= t && t<=10){
		cout << "BRONZE";
	}
}