#include <iostream>
using namespace std;
int main(){
    int a=12,b=18;
    while(a>0&&b>0){
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0)
        cout<<b;
    else
        cout<<a;
    return 0;
}
