#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ull = unsigned long long;

#define all(v) (v).begin(), (v).end()
#define fori(i, a, b) for(i = (a); i <= (b); i++)
#define rfori(i, a, b) for(i = (a); i >= (b); i--)
#define vint vector<int>
#define vll vector<long long>
#define vull vector<unsigned long long>
#define vchar vector<char>
#define pii pair<int, int>
#define pll pair<long, long>
#define INF INT_MAX

#define debug1(x) cout << #x << "=" << x << endl
#define debug2(x, y) cout << #x << "=" << x << " | " << #y << "=" << y << endl;
#define debug3(x, y, z) cout << #x << "=" << x << " | " << #y << "=" << y << " | " << #z << "=" << z;

#define RSORT(v) sort(v.begin(), v.end(), greater<int>())
#define SORT(v) sort(v.begin(), v.end())
#define CSORT(v, cmp) sort(v.begin(), v.end(), cmp)

int dirx[] = {-1, 0, 1, 0};
int diry[] = {0, 1, 0, -1};

// auto cmp2 = [&](int a, int b){
//     return a < b;
// };

void fail(){
	cout << "-1" << endl;
}

void printArray(vint& arr){
	for (int i: arr) cout << i + 1 << " ";
	cout << endl;
}

void solve(vector<vint>& graph, int n){
	int i, j;
	ll ans = 0;

    auto cmp = [&](int a, int b){
        return graph[a][b] != 1;
    };

    vint arr;
    fori(i, 0, n - 1) arr.push_back(i);

    CSORT(arr, cmp);
    printArray(arr);
}

int main() {
	int testcases;
	
	cin >> testcases;
	
	while (testcases--){
	    
	    int n;
	    cin >> n;
	    vector<vint> arr(n, vint(n));
		
		int i, j;
        string entry;
		fori(i, 0, n - 1){
            cin >> entry;
            fori(j, 0, n - 1){
                // debug1(entry);
                if (entry[j] == '1') arr[i][j] = 1;
                else arr[i][j] = 0;
            }
        }
	    
	    solve(arr, n);
	}

	return 0;
}
