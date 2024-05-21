#include <iostream>
using namespace std;

bool isDivisor(int x, int a, int b){
    int count=0;
    for(int i=x-1;i>0;i--){
        if(x%i==0)count++;
        if(count==1 && b!=i)return false;
        if(count==2 && a!=i)return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        bool ya=true;
        int c=2,d=2;
        while(ya){
            if(a*c>b*d)d++;
            else if(a*c<b*d)c++;
            else ya=isDivisor(a*c,a,b);
        }
        cout << a*c << endl;
    }
}