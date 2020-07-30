#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while (a<90)
    {
        b++;
        a+=5;
    }
    if (b>c)
        cout<<"win";
    else if (b==c)
        cout<<"same";
    else
        cout<<"lose";
}
