#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    double a[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    double max_value = a[0][0] , min_value = a[0][0];
    int min_row = 0 , min_col = 0 , max_row = 0 , max_col = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] < min_value){
                min_value = a[i][j];
                min_row = i;
                min_col = j;
            }
            if(a[i][j] > max_value){
                max_value = a[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    cout << "Min = " << min_value << " " << min_row << " " << min_col << endl;
    cout << "Max = " << max_value << " " << max_row << " " << max_col << endl;
    return 0;
}