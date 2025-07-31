#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector <float> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << v[0] << endl;
        cout << v[v.size()-1] << endl;
    }
    return 0;
}