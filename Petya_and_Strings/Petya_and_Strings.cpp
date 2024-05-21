#include <iostream>
#include <string>

using namespace std;

int main()
{
    string p1,p2;
    cin >> p1;
    cin >> p2;
    for (int j = 0; j < p1.length(); j++) {
        p1[j] = tolower(p1[j]);
        p2[j] = tolower(p2[j]);
    }    
    
    for (int i = 0; i < p1.length(); i++) {
        if (p1[i] > p2[i]) {
            cout << 1;
            return 0;
        }
        if (p1[i] < p2[i]) {
            cout << -1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
