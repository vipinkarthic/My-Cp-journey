#include <iostream>

using namespace std;

int max_subarray_sum(int arr[], int n) {
    int max_so_far = INT_MIN, max_ending_here = 0;
    bool prev_parity = arr[0] % 2 == 0;

    for (int i = 1; i < n; i++) {
        bool current_parity = arr[i] % 2 == 0;
        if (current_parity != prev_parity) {
            max_ending_here = max(arr[i], max_ending_here + arr[i]);
        } else {
            max_ending_here = 0;
        }

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }

        prev_parity = current_parity;
    }

    return max_so_far;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin>> n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		int max_sum = max_subarray_sum(arr, n);
    	cout << max_sum << endl;
	}



    return 0;
}
