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

int findSubarraySum(int arr[], int n, int sum)
{
    unordered_map<int, int> prevSum;
 
    int res = 0;
 
    int currSum = 0;
 
    for (int i = 0; i < n; i++) {
 
        currSum += arr[i];
 
        if (currSum == sum)
            res++;

        if (prevSum.find(currSum - sum) != prevSum.end())
            res += (prevSum[currSum - sum]);
 
        prevSum[currSum]++;
    }
 
    return res;
}

int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int t; cin >> t;
	while(t--){
		int n,x,z; cin >> n >> x >> z;
		int arr[n];
		FOR(i,n){
			cin >> arr[i];
		}
		if(z%x == 0){
			cout << z/x << endl;
			continue;
		}
		int nearest = (x - z%x);	
		int check = findSubarraySum(arr,n,nearest);
		if(check == 0){
			cout << "-1" << endl;
		}else{
			cout << nearest << endl;
		}
	}

	return 0; 
} 
