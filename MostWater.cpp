#include <iostream>
using namespace std;
#include <vector>

int maxArea(vector<int>& height) {
    vector<int> relativeArea;

    for (int i = 0; i < height.size(); i++)
    {
        relativeArea[i] = height[i]*(i+1);
        
    }
    
    int maxArea = 0;
    for (int j = 0; j < relativeArea.size(); j++)
    {
        
    }
    
    return max_Area;
    
        
}
int main(){
    vector<int> heights = {2,3,1,8,6,4,1};
    int area = maxArea(heights);
    cout<<"Max Area: "<<area<<endl;
    return 0;
}