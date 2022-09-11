#include<iostream>
using namespace std;
#include<vector>


int removeDuplicates(vector<int>& nums) {
    int k =1;
    int curr = nums[0];
    for(int i=1;i<nums.size();i++){
        if (curr!=nums[i])
        {
            k++;
            curr = nums[i];
            int j = i;
            while(nums[j-1]==-123){
                j-=1;
            }
            int temp = nums[j];
            nums[j] = curr;
            nums[i] = temp;
        }else{
            nums[i] = -123;
        }
        
    }
    return k;
    
};


int main(){
    vector<int> nums = {1,1,2,2,2,3};
    cout<<"k: "<<removeDuplicates(nums)<<endl;

    return 0;
}