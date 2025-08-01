#include <iostream>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n; // n is the day
    cin >> t;
    map<int , string> mp = {
        {4,"Monday"},
        {5,"Tuesday"},
        {6,"Wednesday"},
        {7,"Thursday"},
        {1,"Friday"},
        {2,"Saturday"},
        {3,"Sunday"}
    };
    while(t--){
        cin >> n;
        for(auto x : mp){
            if(n>7){
                n%=7;
            }
            if(n == x.first){
                cout << x.second << endl;
            }
        }
    }
    return 0;
}