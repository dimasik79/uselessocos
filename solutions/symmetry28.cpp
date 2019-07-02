#include<iostream>

using namespace std;




int main() {
    int xc, xd, yc , yd;
    int xA, yA, xB, yB;
    cin >> xc >> yc >> xd >> yd;
    cin >> xA >> yA;
    if(xd != 0) yB = yA - 2 * yA;
    else yB = yA;
    if(yd != 0) xB = xA - 2 * xA;
    else xB = xA;
    cout << xB << ' ' << yB;
}
