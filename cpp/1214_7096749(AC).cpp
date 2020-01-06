#include <iostream>
using namespace std;
int main()
{
    int y,m;
    int mm[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    cin>>y>>m;
    if ((y%4==0)&&((y%100!=0)||(y%400==0)))
        cout<<mm[m-1]+1;
    else
        cout<<mm[m-1];
}
