#include<iostream>

#include<vector>
using namespace std;

//[1,1,2,3,4,1]
//[0,0,2,3,4,0]
//1,2,3,3,3,4] val = 3

int removeElement(vector<int>& nums, int val) {
     int k = 0;
    for(int i=0;i<nums.size();i++){

        if(nums[i]!=val){
            int j= nums.size()-1;

            while(nums[j]==val){
                j--;
                if(j == 0){
                    break;
                }
            }
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;

        }else{
            k++;
        }
    }
    return k;
}
int main(){
    vector<int> l1={2,3,2};
    // l1.push_back(1);
    // l1.push_back(2);
    // l1.push_back(2);
    // l1.push_back(3);
    // l1.push_back(4);

    cout<<"k: "<<removeElement(l1,2)<<endl;
    return 0;
}
