#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string first_lang[m];
    string second_lang[m];
    string principal[n];
    string final[n];

    for (int i = 0; i < m*2; i++){
        if (i % 2 != 0) {
            cin >> second_lang[i / 2];
        } else {
            cin >> first_lang[i / 2];
        }
    }

    for(int i = 0; i < n ; i++){
    	cin >> principal[i];
    }

   	for(int i = 0 ; i < n; i++){
   		for(int j = 0 ; j < m ; j++){
   			if(principal[i] == first_lang[j]){
   				if(first_lang[j].length() > second_lang[j].length()){
   					final[i] = second_lang[j];
   				}else if(first_lang[j].length() < second_lang[j].length()){
   					final[i] = first_lang[j];
   				}else{
   					final[i] = first_lang[j];
   				}
   			}
   		}
   	}

   	for(string x : final){
   		cout << x << " ";
   	}
}
