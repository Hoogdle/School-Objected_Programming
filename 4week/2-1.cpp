#include <iostream>
using namespace std;

int big(int a, int b){
    if(a>b)
        return a;
    else    
        return b;
}

int big(int a, int b, int c){
    int temp;
    if(a>b)
        temp = a;
    else
        temp = b;
    
    if (temp>c)
        return temp;
    else
        return c;
}

int main(){
    int x = big(3,5);
    int y = big(300,60);
    int z = big(30,60,50);
    cout<<x<<' '<<y<<' '<<z<<endl;
}