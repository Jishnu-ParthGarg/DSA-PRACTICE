#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n,rem;
    std::cin>>n;
    while (n!=0)
    {
        rem=n%10;
        cnt=cnt+1;
        n=n/10;
    }
    std::cout<<n;
}