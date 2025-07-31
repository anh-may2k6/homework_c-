#include <iostream>
#include <iomanip>

using namespace std;

float find_y(float a,float b, float c, float d , float e , float f){
    return (f*a-c*d)/(e*a-b*d);
}

float find_x(float a, float b,float c,float d ,float e, float f){
    float y = find_y(a,b,c,d,e,f);
    return ((c/a) - (b/a)*y);
}

int main(){
    int t;
    float a,b,c,d,e,f;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d >> e >> f;
        cout << "x = " << fixed << setprecision(2) << find_x(a,b,c,d,e,f) << endl;
        cout << "y = " << fixed << setprecision(2) << find_y(a,b,c,d,e,f) << endl; 
    }
    return 0;
}