#include <iostream>
#include <vector>
#include <map>
using namespace std;
//{1, 2, 3, 4, 5}
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> values;
    map<int,int> index_map;

    vector<int> result = {0,0};

    for (int i = 0; i < nums.size(); i++)
    {
        int first_val = nums[i];
        int second_val = target-nums[i];

        index_map[first_val] = i; 
        values[first_val] =second_val;

        if(values.count(second_val)!=0){
            result[0] = index_map[second_val];
            result[1] = i;
        }


    }
    
    return result;
    
};

int main() {
   
  vector<int> vector1 = {3,3};
  int target =6;
  //twoSum(vector1,target);
  cout<<twoSum(vector1,target).at(0)<<endl;
  cout<<twoSum(vector1,target).at(1)<<endl;
  return 0;
}