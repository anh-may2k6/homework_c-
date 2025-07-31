#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define e 2.72

float positive_funcion(float x){
    return (3*x+sqrt(x));
}

float negative_funcion(float x){
    return (pow(e,x) + 4);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    float x;
    cin >> t;
    while(t--){
        cin >> x;
        if(x>=0){
            cout << fixed << setprecision(2) << positive_funcion(x) << endl;
        }
        else{
            cout << fixed << setprecision(2) << negative_funcion(x) << endl;
        }
    }
    return 0;
}
