#include <iostream>
#include <sstream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        for(auto &x : s){
            x = tolower(x);
        }
        stringstream ss(s);
        string temp;
        while(ss >> temp){
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}