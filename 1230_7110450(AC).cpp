#include <iostream>
using namespace std;
int main()
{
    int a,b,c,crash;
    cin>>a>>b>>c;
    if ((a<=170)||(b<=170)||(c<=170)) {
        if (a <= 170)
            crash = a;
        else if (b <= 170)
            crash = b;
        else
            crash = c;
        cout << "CRASH "<<crash;
    }
    else
        cout<<"PASS";
}
