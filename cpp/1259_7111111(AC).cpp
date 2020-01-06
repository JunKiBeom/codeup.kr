#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>b;
    int sum=0;
    for (int i=1;i<=b;i++)
        if (i%2==0)
            sum+=i;
    cout<<sum;
}
