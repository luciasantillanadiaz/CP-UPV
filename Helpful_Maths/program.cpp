#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    int count = 0;
    //int a[1001];
    char a[150];
    cin >> s;
    char t = '+';
    for(int i = 0; i < s.size(); i++){
        if(s[i] == t){
            continue;
        }
        else{
            a[count++] = s[i];
        }
    }
    sort(a,a+count);
    for(int i = 0; i < count; i++){
        cout << a[i];
        if(i==count-1){
            break;
        }
        cout << "+";
    }
    return 0;
}