#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = -1;
    int divide = n / 2;
    int principal_arr[n];
    int final_arr[n];
    
    vector<int> first_half;
    vector<int> second_half;

    if(n == 1){
        first_half.resize(1);
    }
    if (n % 2 == 0) {
        first_half.resize(divide);
        second_half.resize(divide);
    } else {
        first_half.resize(divide);
        second_half.resize(divide + 1);
    }

    for (int i = 0; i < n; i++) {
        cin >> principal_arr[i];
    }
    

    for (int i = 0; i < n; i++) {
        if (i < divide) {
            first_half[i] = principal_arr[i];
        } else {
            second_half[i - divide] = principal_arr[i];
        }
    }

    for (int i = 0, j = 0; i < n && j<n  ; i+=2, j++ ){
        count++;
    	final_arr[i] = second_half[j];
    	final_arr[i+1] = first_half[j];
    }

    cout << count << "\n";

    for(int i = 0 ; i < n ; i++){  
    	cout << final_arr[i] << " ";
    }
    return 0;
}
