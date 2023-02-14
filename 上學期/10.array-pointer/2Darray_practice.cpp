#include <bits/stdc++.h>
using namespace std;

int main(){

    // init
    int n, m, k;
    int arr[105][105];

    // input
    cin >> n >> m;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin >> arr[i][j];
        }
    }

    // 把所有數值乘上k
    cin >> k;
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            arr[i][j]=arr[i][j]*k;
            // 你也可以這樣寫: arr[i][j]*=k;
        }
    }

    // output
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout << arr[i][j] << " ";
        }
        // 別忘了換行
        cout << "\n";
    }


    return 0;
}