/*
 * @Author: your name
 * @Date: 2020-05-04 20:12:57
 * @LastEditTime: 2020-05-04 23:46:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \ACMProject\a.cpp
 */


#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           for (int i = 0; i < nums.size; i++)
           
        {
         for (int j = 0; j < nums.size; j++)
        {
            
            if(nums[i] + nums[j] == target) return vector<int>(i,j);
        }
            
        }
           
    }
};