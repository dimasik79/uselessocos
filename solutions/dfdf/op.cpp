#include "op.h"

op::op(char c):c(c){}

int op::DO(int A, int B){

    switch(c){

        case '+':
            return A + B;
        case '-':
            return A - B;
        case '*':
            return A * B;
        case '/':
            return A / B;
        case '%':
            return A % B;
    }
}
