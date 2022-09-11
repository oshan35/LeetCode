#include<iostream>
using namespace std;
#include<vector>


int removeDuplicates(vector<int>& nums) {
    int k=1;
    int current = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (current != nums[i])
        {
            k++;
            current = nums[i];
        }
        
    }
    
};


int main(){
    vector<int> nums = {1,1,2,2,2,3};
    cout<<"k: "<<removeDuplicates(nums)<<endl;

    return 0;
}