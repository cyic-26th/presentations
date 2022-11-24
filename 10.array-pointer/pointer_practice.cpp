#include <bits/stdc++.h>
using namespace std;

int main(){

    int num=17;
    int arr1[5]={4, 8, 7, 6, 3};
    long long arr2[5]={4, 8, 7, 6, 3};

    // p1
    cout << &num << "\n";

    // p2
    cout << &arr1 << "\n";

    // p3
    for (int i=0 ; i<5 ; i++){
        cout << &arr1[i] << " ";
    }   cout << "\n";

    // p4
    for (int i=0 ; i<5 ; i++){
        cout << &arr2[i] << " ";
    }   cout << "\n";

    // p5
    for (int i=0 ; i<5 ; i++){
        cout << arr1+i << " ";
    }   cout << "\n";

    // p6
    for (int i=0 ; i<5 ; i++){
        cout << *(arr1+i) << " ";
    }   cout << "\n";


    return 0;
}