#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,count,count2,count3; cin >> t;
    while(t--){
        int n;
        count=0;count2=0;count3=0; cin >> n;
        string a; string b; cin >> a >> b;
        for(int i=0; i<n; i++){
            if(a[i]=='1' && b[i]!='1')count++;
            if(b[i]=='1' && a[i]!='1')count2++;
        }
        int sol = abs(count-count2) + min(count,count2);
        cout << sol << endl;
    }
}