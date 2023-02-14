#include <bits/stdc++.h>
using namespace std;

// function
int a(int num);
int b(int num);

int a(int num){
    if (a==0) return 1;
    return b(num-1);
}

int b(int num){
    if (a==0) return 2;
    return a(num-1);
}

int main(){
    return 0;
}