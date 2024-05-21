#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    string alf = "abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int n,k; cin >> n; cin >> k;
        string sub = "";
        while(n--){
            sub = sub + alf.substr(0,k);
        }
        cout << sub << endl;
    }
}