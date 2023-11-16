#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum = 0;
	int n;
    cin >> n;
	for(int i = 0 ; i < n ; i++){
		sum += i*(n-i);
    }
    cout << sum+n << endl;

}