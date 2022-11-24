#include <bits/stdc++.h>
using namespace std;

int f(int x, int y, int z){

    // code

    return max({x, y, z});

}

int main(){

    int n, a, b, c;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> a >> b >> c;
        cout << "biggest value is: " << f(a, b, c) << "\n";
    }

    return 0;
}