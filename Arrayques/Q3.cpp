#include <bits/stdc++.h>
using namespace std;
bool fucntion(vector<int> &nums)
{
    int n=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]>nums[i+1]){
            n++;
        }
    }
    if (nums[nums.size() - 1] > nums[0]) {
      n++;
   }
   return n <= 1;
    
    
}
int main()
{
    vector<int> v={2,5,9,8,4};
    cout<<fucntion(v);


}