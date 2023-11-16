#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    string s;
    string last_three="";
    cin >> s;
    int n = s.length();
    if(n<20){
        int number = stoi(s);
        if(number < 8 || number == 8){
            cout << number+(8-number);
        }else if(number%8 == 0){
            cout << s;
        }
        else{
            int to_be_added = number%8;
            number = number - to_be_added;
            cout << number << endl;
        }33

    }else{
        last_three = s.substr(s.length() - 3);
        int int_last_three = stoi(last_three);
        if(int_last_three%8 == 0){
            cout << s;
        }else{
            int to_be_added_last_three = int_last_three%8;
            int_last_three = int_last_three+to_be_added_last_three;
            string to_be_added_final = to_string(int_last_three);
            string new_string = s.substr(0, s.length() - 3) + to_be_added_final;
            cout << new_string << endl;
        }
        return 0;
    }
}
}
