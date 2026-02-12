#include <bits/stdc++.h>
int main(){
    int n,rem,revnum;
    std::cin>>n;
    while (n!=0)
    {
        rem=n%10;
        revnum=revnum*10+rem;
        n=n/10;
    }
    std::cout<<revnum;
}