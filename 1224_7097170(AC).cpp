#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a*d>b*c)
        cout<<">";
    else if (a*d==b*c)
        cout<<"=";
    else
        cout<<"<";
}
