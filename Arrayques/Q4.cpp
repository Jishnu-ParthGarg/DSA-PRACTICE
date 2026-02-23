#include <bits/stdc++.h>
using namespace std;
int fuction(vector<int> &nums)
{
 {
      int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
          nums[k++] = nums[i];
        }
    }
    return k;
    
   
}
}
int main() {
    vector<int> v={2,5,6,9,8,40};
    cout<<fuction(v);
    return 0;
}
