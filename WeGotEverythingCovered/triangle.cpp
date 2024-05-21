#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++){
            int aux; cin >> aux;
            a.push_back(aux);
        }
        if(n<=2){cout << 0 << endl;}
        else{
            int count=0;
            for(int i=0; i<n-2; i++){
                for(int j=i+1; j<n-1; j++){
                    for(int k=j+1; k<n; k++){
                        if(a[i]<a[j]+a[k] && a[j]<a[i]+a[k] && a[k]<a[i]+a[j]){
                            count++;
                        }
                    }
                }
            }
            cout << count << endl;
        }
    }
}