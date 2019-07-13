#include<iostream>
#include<string>
#include<sstream>

#include "calc.h"
#include "op.h"

using namespace std;

int str_to_int(string s){

    stringstream ss;
    ss << s;
    int result;
    ss >> result;
    return result;

}

string calc::get_line(){

    string s, q;
    getline(cin, s);
    for(auto i : s)
        if(i != ' ') q+=i;
    return q;

}


int calc::match(string s){

    if(s.find(')') == s.size() - 1) return str_to_int(s.substr(1, s.size()-2));
    else {
        int pos, cnt=0;
        for(int i = 1; i<s.size(); i++){
            if(s[i] == '(') cnt++;
             if(s[i] == ')') cnt--;
            if(cnt==0 && (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] =='%')) pos = i;
        }

            return op(s[pos]).DO(match(s.substr(1,pos-1)), match(s.substr(pos+1,s.size()-pos-2)));
    }

}



void calc::run(){

    string s;
    s = calc::get_line();
    while(s != "exit") {
        //if(s=="help"){cout << "no help" << endl;}
        if(s.size()>0 && s != "help")
            cout << calc::match(s)<<endl;
        else if(s == "help") {cout << "Help\n¬ведите ваше выражение:\n¬ведите его в скобках, например (123)  \nƒл€ расчета введите каждое число вскобках а между ними операторб например ((123)+(123))\n";}
        s=calc::get_line();
    }

}
