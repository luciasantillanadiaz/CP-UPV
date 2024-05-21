#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x,count=0; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
        x = a[0];
        if(a[i] <= x)count++;
    }
    if(count==k)
}