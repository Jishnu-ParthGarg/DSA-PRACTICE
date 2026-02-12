#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,rem;
    std::cin>>n;
    while(n!=0){
        rem=n%10;
        n=n/10;
    }
    std::cout<<n;
}