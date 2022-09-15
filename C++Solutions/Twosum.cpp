#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> twosum(vector<int> nums, int target){
    vector<int> result;
    map<int,int> prev;

    for (int i = 0; i < nums.size(); i++)
    {
        int val = target - nums[i];

        if(prev.find(val) != prev.end()){
            result.push_back(prev[val]);
            result.push_back(i);
            
            break;
        }

        prev[nums[i]] = i;
    }

    return result;

}


int main(){

    vector<int> in = {2,7,11,15};
    vector<int> result = twosum(in,9);
    for(int i=0;i<result.size();i++){
        cout<<result[i] <<" ";
    }
    return 0;
}