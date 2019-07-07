#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> multiand;
    string checkForNum = "1234567890";
    string checkForLetter = "ABCDEFGHIJKLMNOPQRSTUWVXYZ";
    string s;
    string res;
    cin >> s;
    int b =0;
    for(int i = 0; i < s.size(); i++) {
        if(checkForNum.find(s[i]) != -1) {
            multiand.push_back(s[i] - 48);

            if(checkForNum.find(s[i+1]) != -1) {
                multiand[b] = multiand[b] * 10 + (s[i+1]-48);
                for(int cou=0; cou <= multiand[b] - 1; cou++) res.push_back(s[i+2]);

                i+=2;
            }
            else {
                    for(int cou=0; cou <= multiand[b] - 2; cou++) res.push_back(s[i+1]);

            }
        }
        else res.push_back(s[i]);
        b++;
    }
    cout << res;


}
