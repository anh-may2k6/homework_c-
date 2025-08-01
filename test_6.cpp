#include <iostream>

using namespace std;

bool leap_year(int b){
    if(!(b%400 == 0 || (b%4==0 && b%100 != 0))) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,a,b; // a is the month , b is the year
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a<0 || a>12 || b<1) continue;
        if(a==2){
            if(leap_year(b)){
                cout << "29" << endl;
                continue;
            }
            else{
                cout << "28" << endl;
                continue;
            }
        }
        switch(a){
            case 4 : case 6 : case 9 : case 11 :
            cout << "30" << endl;
            break;
            default :
            cout << "31" << endl;
        }
    }
    return 0;
}