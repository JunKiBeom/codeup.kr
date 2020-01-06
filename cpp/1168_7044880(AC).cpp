#include <iostream>
#define YEAR 2012
using namespace std;
int main()
{
    int birth,check;
    cin>>birth>>check;
    int b;
    if((check==1)||(check==2))
        b=birth/10000+1900;
    else if ((check==3)||(check==4))
        b=birth/10000+2000;
    cout<<YEAR-b+1;
}
