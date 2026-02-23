#include <bits/stdc++.h>
using namespace std;
int secondmax(vector<int> &arr){
    int largest_ele=-1;
    int second_largest_ele=-1;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest_ele)
        {
            second_largest_ele=largest_ele;
            largest_ele=arr[i];

        }
        else if(arr[i]<largest_ele&&arr[i]>second_largest_ele)
        {
            second_largest_ele=arr[i];
        }

    }
    return second_largest_ele;
}
int main()
{
    vector<int> v={2,5,9,8,4};
    cout<<secondmax(v);


}