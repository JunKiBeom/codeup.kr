#include <iostream>
using namespace std;
int main()
{
    int arr[6]={400,340,170,100,70};
    /*
    1. 치즈버거 : 400 칼로리
    2. 야채버거 : 340 칼로리
    3. 우유 : 170 칼로리
    4. 계란말이 : 100 칼로리
    5. 샐러드 : 70 칼로리
     */
    int a,b;
    cin>>a>>b;
    if (arr[a-1]+arr[b-1]>500)
        cout<<"angry";
    else
        cout<<"no angry";
}
