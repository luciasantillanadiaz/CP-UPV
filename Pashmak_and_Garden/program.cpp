#include <iostream>
using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int n;
    if(x1 != 0) n = x1;
    if(y1 != 0) n = y1;
    if(x2 != 0) n = x2;
    if(y2 != 0) n = y2;
    if(x1 == x2 && y1 == y2){
         x3 = 0;
         y3 = n;
         x4 = n;
         y4 = 0;
    }
    if(x1 == x2 && y1 != y2){
        
    }
}