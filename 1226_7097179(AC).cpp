#include <iostream>
using namespace std;
int main() {
    int lotto[8]={0};
    int user[7]={0};
    int cnt=0, bo=0;
    for (int i=0;i<7;i++)
        cin>>lotto[i];
    for (int j=0;j<6;j++)
        cin>>user[j];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(lotto[i]==user[j])cnt++;
        }
    }
    for (int i =0;i<6;i++) {
        if(lotto[6]==user[i]) bo++;
    }
    if(cnt==6) printf("1");
    else if(cnt==5&&bo==1) printf("2");
    else if(cnt==5) printf("3");
    else if(cnt==4) printf("4");
    else if(cnt==3) printf("5");
    else printf("0");
    return 0;
}
