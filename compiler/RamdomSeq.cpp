#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

string randomseq(int a, int b,int c )
{
srand (time(0));
char cAlphabet [4] = {'A','B','C','D'};
char sAlphabet [5] = {'a','b','c','d','e'};
char specialChar [4] = {'@','!','$','#'};
string s="";

    for (int i=0;i<1;i++){
        s+=cAlphabet[rand()%4];
    }

    for (int i=0;i<5;i++){
        s+=sAlphabet[rand()%5];
    }

    for(int i=0;i<2;i++){

        s+=to_string(rand()%10);
    }

    for (int i=0;i<1;i++){
        s+=specialChar[rand()%4];
    }
 return s;
}

int main()
{
string p=randomseq(1,5,2);
    cout<<p<< endl;

return 0;
}
