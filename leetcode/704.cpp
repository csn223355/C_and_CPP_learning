/**
 *@file 704.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-07-04
 给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
 */
#include <iostream>
#include <vector>
using namespace std;

class Solutuon{
public:
    int search(vector<int>& nums ,int traget){
        int l = 0;
        int r = nums.size() - 1;
        

        while(l <= r){
            int mid = (r - l) / 2;
            if(nums[mid] < traget){
                l = mid + 1;
            }
            else if(nums[mid] > traget){
                r = mid -1;
            }
            else{
                return mid;
            }
            
        }
        return -1;
    }
};


// test

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int traget = 5;
    Solutuon s1;
    int result = s1.search(nums,traget);
    cout<< "result = "<< result <<endl;

    return 0;
}
