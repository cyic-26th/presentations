#include <bits/stdc++.h>
using namespace std;

struct segment_tree{
    int a;
};

int main(){

    // variable declare
    int n=17;
    string s="uwu";
    vector<int> v;
    segment_tree st;

    // pointer declare
    int *np = &n; // 宣告一個儲存整數的變數，裡面放了整數: n的記憶體位置
    string *sp = &s; // 宣告一個儲存字串的變數，裡面放了字串: s的記憶體位置
    vector<int> *vp = &v; // 宣告一個儲存vector<int>的變數，裡面放了vector<int>: v的記憶體位置
    segment_tree *stp = &st; // 宣告一個儲存segment_tree的變數，裡面放了segment_tree: st的記憶體位置

    // get value
    cout << *np << "\n";
    cout << *sp << "\n";

    return 0;
}