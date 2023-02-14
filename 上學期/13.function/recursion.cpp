#include <bits/stdc++.h>
using namespace std;

// function
int f(int x){
    // 中止條件
    if (x==1){
        return 1;
    }else if (x==2){
        return 1;
    }else{
        // 遞迴關係式
        return f(x-1)+f(x-2);
    }
}

int main(){
    cout << f(10) << endl;
    return 0;
}