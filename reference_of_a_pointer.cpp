#include<bits/stdc++.h>
using namespace std;
int fun(int * &p){
    cout <<p<<endl;
    // p = NULL;
}
int main (){
    int val = 12;
    int *ptr = & val;
    fun(ptr);
    cout<<&val<<endl;
    cout<<ptr<<endl;

    
    return 0;
}