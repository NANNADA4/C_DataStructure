#include <stdio.h>
#include <stdlib.h>
//#include "ArrayStack.h"		// 배열로 구현한 스택 이용시 주석 해제
#include "InfixToPostfix.h"
#include "LinkedStack.h"  // 연결리스트로 구현한 스택 이용시 주석 해제

// 연산자, 피연산자, 괄호 -> enueration type 변환
precedence getToken(char ch) {
    precedence token;
    switch (ch) {
        case '(':
            token = lparen;
            break;
        case ')':
            token = rparen;
            break;
        case '+':
            token = plus;
            break;
        case '-':
            token = minus;
            break;
        case '*':
            token = multiply;
            break;
        case '/':
            token = divide;
            break;
        case '%':
            token = mod;
            break;
        case '\0':
            token = eos;
            break;
        default:
            token = operand;
    }

    return token;
}

// enumeration type에 따라 연산자, 괄호 출력
char printToken(precedence token) {
    char ch;
    switch (token) {
        case lparen:
            ch = '(';
            break;
        case rparen:
            ch = ')';
            break;
        case plus:
            ch = '+';
            break;
        case minus:
            ch = '-';
            break;
        case multiply:
            ch = '*';
            break;
        case divide:
            ch = '/';
            break;
        case mod:
            ch = '%';
            break;
    }

    return ch;
}

// 연산자 우선순위 계산: 괄호 < +, - < *, /, %
int prec(precedence symbol) {
    switch (symbol) {
        case lparen:
        case rparen:
            return 0;
        case plus:
        case minus:
            return 1;
        case multiply:
        case divide:
        case mod:
            return 2;
    }
}

// 중위표기식 -> 후위표기식 변환 연산
char* toPostfix(Stack* S, char* exp) {
    static char result[256] = "";
    int len = 0, n = 0;
    char symbol = exp[0];
    precedence token = getToken(symbol);  // 연산자의 종류 기록

    // Fill your code
}

// 후위표기식의 계산 연산
float evalPostfix(Stack* S, char* exp) {
    int op1, op2;

    int n = 0;

    char symbol = exp[0];

    precedence token = getToken(symbol);

    // Fill your code

    while (token != eos) {
        if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {  // 피연산자를 만나면 스택에 push
            push(S, exp[n] - '0');
        }

        else {  // 연산자를 만나면
            op1 = pop(S);

            op2 = pop(S);

            switch (symbol) {
                case plus:
                    push(S, op1 + op2);
                    break;

                case minus:
                    push(S, op1 - op2);
                    break;

                case multiply:
                    push(S, op1 * op2);
                    break;

                case divide:
                    push(S, op1 / op2);
                    break;

                case mod:
                    push(S, op1 % op2);
            }
        }

        ++n;

        symbol = ;

        token = ;
    }

    return pop(S);
}
