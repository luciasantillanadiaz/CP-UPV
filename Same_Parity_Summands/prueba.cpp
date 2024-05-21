/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subarray(vector<int*> &p,int ini, int end){
    p.erase(p.begin(), p.begin()+ini);
    p.erase(p.begin()+end, p.end());
}

int main(){
    int n,q; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int aux; cin >> aux;
        a.push_back(aux);
    }
    int l,r; cin >> l >> r;
    vector<int> qa = a;
    vector<int*> p = &qa;
    subarray(*p,l-1,r);
    for(int i=0;i<n;i++){
        cout << qa[i] << " ";
    }
}*/