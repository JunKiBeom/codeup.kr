#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char opr;
    cin>>a>>opr>>b;
    switch (opr)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case'*':
            cout<<a*b;
            break;
        case'/':
            cout << fixed;
            cout.precision(2);
            cout<<(double)a/b;
            break;
    }
}
