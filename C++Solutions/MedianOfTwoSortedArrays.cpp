#include<iostream>
using namespace std;
#include<cmath>
#include<vector>


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double medianOfArr1;
    
    if (nums1.size()%2==0)
    {
        medianOfArr1 = (nums1[nums1.size()/2]+nums1[(nums1.size()/2)-1])/2;
    }else{
        medianOfArr1 = nums1[(round(nums1.size()/2))];
    }

    double medianOfArr2;

    if (nums2.size()%2==0)
    {
        medianOfArr2 = (nums2[nums2.size()/2]+nums2[(nums2.size()/2)-1])/2;
    }else{
        medianOfArr2 = nums2[(round(nums2.size()/2))];
    }


    return (medianOfArr1+medianOfArr2)/2;

    
}

int main()
{
    vector<int> in = {1,2};
    vector<int> in2 = {3,4};
    cout<<findMedianSortedArrays(in,in2)<<endl;
    return 0;
}
