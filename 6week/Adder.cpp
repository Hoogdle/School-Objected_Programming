#include <iostream>

using namespace std;

#include "add.h"

Adder::Adder(int a,int b){
    op1 = a;
    op2 = b;
}

int Adder::process(){
    return op1+op2;
}

