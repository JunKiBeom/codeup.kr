﻿#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a<b-c)
        cout<<"advertise";
    else if (a==b-c)
        cout<<"does not matter";
    else
        cout<<"do not advertise";
}
