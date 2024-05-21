#include <iostream>
using namespace std;

int main(){
    int n,L=0,O=0,l=0,o=0; cin >> n;
    string s; cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='L')L++;
        else O++;
    }
    for(int i=0; i<n-1; i++){
        if(s[i]=='L'){l++;L--;}
        else {o++;O--;}
        if(l!=L && o!=O){
            cout << l+o << endl;
            return 0;
        }
    }
    cout << -1;
}