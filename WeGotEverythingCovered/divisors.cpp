#include <iostream>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        int n=2;
        bool ya=true;
        int count=0;
        while(ya){
            int x = n*b;
            for(int i=x-1; i>0; i--){
                if(x%i==0 && i==a){cout << x << endl;ya=false;break;}
            }
            n++;
        }
    }
}