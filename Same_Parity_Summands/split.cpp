#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subarray(vector<int> arr,int ini, int end){
    arr.erase(arr.begin(), arr.begin()+ini);
    arr.erase(arr.begin()+end, arr.end());
}

bool isGood(vector<int> arr){
    int l = arr.size();
    int lmax = 0, rmin = arr[l-1];
    vector<int> armax;
    vector<int> armin;
    for(int i=0; i<l; i++){
        armax[i] = max(lmax,arr[i]);
        lmax = armax[i];

        armin[l-1-i] = min(rmin,arr[l-1-i]);
        rmin = armin[l-1-i];
    }
    for(int i=0; i<l-1; i++){
        if(armin[i+1] > armax[i])return true;
    }
    return false;
}

int main(){
    int n,q; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int aux; cin >> aux;
        a.push_back(aux);
    }
    cin >> q;
    while(q--){
        int l,r; cin >> l >> r;
        vector<int> qa = a;
        subarray(qa,l-1,r);
        for(int i=0;i<n;i++){
            cout << qa[i] << " ";
        }
        if(isGood(qa)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}