#include <iostream>

using namespace std;
int main()
{
    int r, rbig, h, b ={0};
    cin >> rbig >> r >> h >> b;
    if(h+r-b > rbig) cout << "NO";
    else cout << "YES";
}
