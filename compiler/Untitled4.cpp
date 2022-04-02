#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main ()
{
    srand (time(0));
    freopen ("out.txt","w",stdout);
    for (int i=0; i<10;i++)
        {
        cout<<rand()%100<<endl;

        }
    return 0;
}

