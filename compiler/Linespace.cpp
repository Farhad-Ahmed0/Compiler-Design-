#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <math.h>
using namespace std;

double linespace (double l , double u , int n){
    double h= (u-l)/n;
    double *a = new double [n+1];
    a[0]=l;

    for (int i =1;i<=n;i++){
        a[i] =a[i-1]+h;

    }
    freopen ("point.txt" ,"w", stdout);


return a;
}
double f (double x){
return 1/(1+exp(-x));
}

int main(){

double *b =linespace(-5,5,20);
for (int i=0 ; i<=20;i++){

        cout<<b[i]<<""<<f (b[i])<<endl;
     }
return 0;
}
