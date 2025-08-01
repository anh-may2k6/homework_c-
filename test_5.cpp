#include <iostream>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    cin >> t;
    map<int,string> mp = {
        {2,"Monday"},
        {3,"Tuesday"},
        {4,"Wednesday"},
        {5,"Thursday"},
        {6,"Friday"},
        {7,"Saturday"},
        {8,"Sunday"}
    };
    while(t--){
        cin >> n;
        for(auto x : mp){
            if(n == x.first){
                cout << x.second << endl;
                break;
            }
        }
    }
    return 0;
}