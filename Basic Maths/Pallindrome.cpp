#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,revnum,n1;
    std::cin>>n;
    n1=n;
    while (n!=0)
    {
        rem=n%10;
        revnum=revnum*10+rem;
        n=n/10;
    }
    if(n1=revnum) std::cout<<"Given number is a a pallindrome";
    else std::cout<<"Given number is not a pallindrome";
}