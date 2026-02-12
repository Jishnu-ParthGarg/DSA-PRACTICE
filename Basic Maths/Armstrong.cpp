#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,n1,revnum,cnt=0,n2;
   std::cin>>n;
    n1=n;
    n2=n1;
    while(n1!=0)
    {
        cnt++;
        n=n/10;
    }
    while (n!=0)
    {
        rem=n%10;
        revnum=revnum*10+pow(rem,cnt);
        n=n/10;
    }
    if(n==revnum) std::cout<<"Number is a armstrong number";
    else cout<<"Number is not a armstrong number";
}