#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t,n,aux; cin >> t;
    while(t--){
        cin >> n;
        vector<int> a;
        for(int i=0; i<n; ++i){
            cin >> aux;
            a.push_back(aux);
        }
        int j=n-2,i;
        if(a.size()==1)cout << 0 << endl;
        else if(a[0]==a[n-1]){
            int count=n-2;
            for(i=1; i<n/2; i++){
                if(a[0]==a[i] && a[0]==a[j])count=count-2;
                else if(a[0]==a[i] || a[0]==a[j])count--;
                else {break;}
                j--;
            }
            if(j-i==0){
                if(a[0]==a[j])count--;
            }
            cout << count << endl;
        }
        else{
            int count1=n-1,count2=count1;
            j=n-2;
            i=1;
            for(int k=1; k<n; k++){
                if(a[0]==a[i]){count1--;i++;}
                if(a[n-1]==a[j]){count2--;j--;}
                if(a[n-1]!=a[j] && a[0]!=a[i]){break;}
            }
            if(count1<count2)cout << count1 << endl;
            else cout << count2 << endl;
        }
    }
}