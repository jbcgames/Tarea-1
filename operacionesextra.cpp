#include <iostream>
using namespace std;
int potencia(int a,int b){
    double i,d;
    int c=a;
    if (b<0){
        d=b;
        b=abs(b);
    }
    if (b==0){
        return 0;
    }
    for(i=1;i<=b-1;i++){
        if (i==b){
        }
        a=a*c;
    }
    if (d<0){
        a=1/a;
    }
    return a;
}
