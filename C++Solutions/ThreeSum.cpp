#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    
    for(int i=0;i<nums.size();i++){
        int target = 0 - nums[i];
        vector<int> prev;
        
        for(int j=0; j<nums.size();j++){
            vector<int> found;
            int k = target - nums[j];
            
            if(count(prev.begin(), prev.end(), k)){
                found.push_back(nums[i]);
                found.push_back(nums[j]);
                found.push_back(k);
                result.push_back(found);
                break;
             

            }
            
            prev.push_back(nums[j]);
        }
        
        
    }
    
    return result;
}

int main()
{
    vector<int>nums={-1,0,1,2,-1,-4}; //1 3 4 5 6
    int target=5;
    vector<vector<int>> result= threeSum(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<3;j++){
            cout<<result[i][j]<<",";
        }
        cout<<" "<<endl;
        
    }
    

}
