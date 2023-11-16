#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
   	cin >> t;   
    while (t--) {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        int count = 0;
        while (count < m+1) {
            if (x.find(s) != std::string::npos) {
                cout << count << endl;
                break;
            }else{	
            	x += x;
            	count++;
        	}
        }
        if (count > m) {
            cout << "-1" << endl;
        }
    }
}
/*3
1
2
-1
1
0
1
3
1
0
2
5*/
