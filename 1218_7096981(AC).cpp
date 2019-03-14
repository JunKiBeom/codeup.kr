#include <iostream>
using namespace std;
int tri(int a,int b, int c)
{
    if (c>a&&c>b)
        if(c<a+b)
            return 1;
        else
            return 0;

    else if (b>a&&b>c)
        if(b<a+c)
            return 1;
        else
            return 0;

    else if (a>b&&a>c)
        if(a<c+b)
            return 1;
        else
            return 0;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if ((a==b)&&(a==c)&&(b==c))
        cout<<"정삼각형";
    else if (((a==b)||(a==c)||(b==c))&&tri(a,b,c))
        cout<<"이등변삼각형";
    else if ((a*a+b*b==c*c)&&tri(a,b,c))
        cout<<"직각삼각형";
    else
        if (tri(a,b,c)==1)
            cout<<"삼각형";
        else
            cout<<"삼각형아님";

}
