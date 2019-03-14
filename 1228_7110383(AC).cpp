#include <iostream>
using namespace std;
int main()
{
    double cm,kg,avg,bmi;
    cin>>cm>>kg;
    avg=(cm-100)*0.9;
    bmi=(kg-avg)*100/avg;
    if (bmi<=10)
        cout<<"정상";
    else if (bmi>10&&bmi<=20)
        cout<<"과체중";
    else if (bmi>20)
        cout<<"비만";
}
