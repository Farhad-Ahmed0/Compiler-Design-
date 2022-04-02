#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main ()
{
    srand (time(0));
    freopen ("out.txt","r",stdin);
    double a [4000];
    for (int i=0;i<4000;i++){
        cin>>a[i];
    }
    for (int i=0;i<4000;i++){
        cout << a[i]<<endl;
    }
    return 0;
}

