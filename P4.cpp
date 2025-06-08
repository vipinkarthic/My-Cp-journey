#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n; 
        cin.ignore();  
        getline(cin, s);  

        string ans;
        deque<char> v;
        deque<char> c;

        for (size_t i = 0; i < s.length(); ++i) {
            if (s[i] == 'a' || s[i] == 'e') {
                v.push_back(s[i]);
            } else {
                c.push_back(s[i]);
            }
        }


        int vcount = v.size();
		int ccount = c.size();

        while (!v.empty()) {
            if (!c.empty()) {
                ans += c.front();
                c.pop_front();
            }
            if (!v.empty()) {
                ans += v.front();
                v.pop_front();
            }
            ans += '.';
        }

        int i = 0;
        while (c.size() > 0 && i < ans.size()) {
            if (ans[i] == '.') {
                ans.insert(i, 1, c.front());
                c.pop_front();
                i += 2; 
            } else {
                i++;
            }
        }

        cout << ans.sub << endl;
    }

    return 0;
}
