#include <bits/stdc++.h>
using namespace std;
#define fastread() ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    fastread();
    int n,t=0,aux; cin >> n;
    vector<int> s;
    for(int i=0; i<n; ++i){
        cin >> aux;
        s.push_back(aux);
        t++;        
        if(aux < 4 && i>0){
            for(int j=i-1; j>=0; --j){
                if(aux+s[j] <= 4){
                    t--;
                    s[j] = aux + s[j];
                    s.erase(s.end());
                    //s.resize(t);
                    break;
                }
            }
        }
    }
    cout << t << endl;
    //for(int h=0; h<s.size(); h++)cout << s[h] << " ";
}
