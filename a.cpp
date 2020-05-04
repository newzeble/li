/*
 * @Author: your name
 * @Date: 2020-05-04 20:12:57
 * @LastEditTime: 2020-05-05 00:41:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Es:it
 * @FilePath: \ACMProject\a.cppssss
 */


#include <vector>
using namespace std;
/**
 * @description: 
 * @return: 
 */
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