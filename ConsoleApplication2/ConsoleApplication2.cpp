// ConsoleApplication2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
#define MAX_ITEM 5

typedef struct tagStack {
    int Item[MAX_ITEM];
    int top = -1;
}Stack;

bool IsFull(Stack* S) {
    if (S->top == (MAX_ITEM - 1))
        return true;
    else
        return false;
}

bool Push(Stack* S, int X) {
    if (IsFull(S))
        return false;
    S->top++;
    S->Item[S->top] = X;
    return true;
}

bool IsEmpty(Stack* S) {
    if (S->top == -1)
        return true;
    else
        return false;
}

bool Pop(Stack* S, int* x) {
    if (IsEmpty(S))
        return false;
    *x = S->Item[S->top];
    S->top--;
    return true;
}

int main()
{

    
    Stack Stk;
    Push(&Stk, 10);
    Push(&Stk, 11);
    Push(&Stk, 12);
    Push(&Stk, 13);
    int x;
    Pop(&Stk, &x);

}