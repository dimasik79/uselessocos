#include<iostream>
#include<string>

using namespace std;

int main() {
    string chessXY;
    cin >> chessXY;
    char letter = chessXY[0];
    int digit = chessXY[1]-'0';
    int letterIndex;
    letterIndex = letter - 'A' + 1;
    if(letterIndex % 2 == digit % 2) cout << "BLACK" ;
    else cout << "WHITE";

}
