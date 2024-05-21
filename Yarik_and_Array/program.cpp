#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,sum=0; cin >> n;
        int a[n];
        cin >> a[0];
        if(a[0] > 0)sum += a[0];
        for(int i=1; i<n; i++){
            cin >> a[i];
            if(a[i-1]%2 == a[i]%2){
                sum += max(a[i-1],a[i]);
                sum -= min(a[i-1],a[i]);
            }else{
                sum += a[i];
            }
            
        }
        cout << sum << endl;
    }
}