#include <iostream>
#include <cmath>

using namespace std;

bool triangle(float a,float b,float c){
    if(a+b <= c || a+c <= b || b+c <= a) return false;
    return true;
}

bool An_right_triangle(float a,float b,float c){
    return (sqrt(a*a+b*b) == c || sqrt(a*a+c*c) == b || sqrt(b*b+c*c) == a);    
}

bool An_isosceles_triangle(float a, float b , float c){
    return (a==b || a == c || b == c);
}

bool An_equilateral_triangle(float a,float b,float c){
    return (a==b && a==c );
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    float a,b,c;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> a >> b >> c;
        if(triangle(a,b,c)){
            cout << "YES" << endl;
            if(An_equilateral_triangle(a,b,c)){
                cout << "Tam giac deu" << endl;
            }
            else if(An_isosceles_triangle(a,b,c)){
                cout << "Tam giac can" << endl;
            }
            else if(An_right_triangle(a,b,c)){
                cout << "Tam giac vuong" << endl;
            }
            else if(An_right_triangle(a,b,c) && An_isosceles_triangle(a,b,c)){
                cout << "Tam giac vuong can" << endl;
            }
            else{
                cout << "Tam giac thuong" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}