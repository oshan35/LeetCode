#include <iostream>
using namespace std;
#include <vector>

int maxArea(vector<int>& height) {
   int left=0;
   int right=height.size()-1;
   int maxArea = 0;
   while (left!=right)
   {
        int area;
        if (height[left]>height[right])
        {
            area  = (right-left)*height[right];
            right= right-1;
        }else{
            area = (right-left)*height[left];
            left = left+1;
        }

        if (area>maxArea)
        {
            maxArea = area;
        }
        
   }

   return maxArea;
   
    
        
}
int main(){
    vector<int> heights = {2,3,1,8,6,4,1};
    int area = maxArea(heights);
    cout<<"Max Area: "<<area<<endl;
    return 0;
}