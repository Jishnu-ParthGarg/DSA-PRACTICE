#include <bits/stdc++.h>
using namespace std;
void fuction(vector<int> &nums,int k)
{
    int n=nums.size();
    k=k%n
    rotate(nums.begin(), nums.end() - k, nums.end());
   

}
int main() {
    vector<int> v={2,5,6,9,8,40};
    int k;
    cin>>k;
    fuction(v,k);
    for (int x : v)
        std::cout << x << " ";
    
    return 0;
}
