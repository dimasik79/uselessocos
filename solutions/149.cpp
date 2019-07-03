#include <iostream>
#include <string>

using namespace std;

int main() {

    int length;
    cin >> length;
    int *arr = new int [length];

    string s;
    cin.ignore(32767, '\n');
    getline(cin, s);
    int i = 0;
    string::size_type sz;

    while(s.length())
    {
        int i_dec;
     
        i_dec = std::stoi(s, &sz);
        arr[i] = i_dec;
        s = s.substr(sz);
        i++;
    }
    for(int i = 0; i < length; i++){
        cout << arr[length - i - 1] << ' ';
    }
    return 0;
}
