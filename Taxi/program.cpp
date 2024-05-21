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
    }
    sort(s.begin(), s.end(), greater<int>());
    for(int i=0; i<s.size(); ++i){
        if(s[i] < 4){
            for(int j=i+1; j<s.size(); ++j){
                if(s[i]+s[j] <= 4){
                    t--;
                    s[i] = s[i] + s[j];
                    s.erase(s.begin() + j, s.begin() + j + 1);
                    //s.resize(t);
                    i--;
                }
            }
        }
    }
    cout << t << endl;
    return 0;
}
