#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum=n*(n+1)/2;
        int actualSum=0;

        for(int i : nums){
            actualSum+=i;     
        }
         return expectedSum - actualSum;
    }

};
int main(){

    vector<int>nums= {3,0,1};
    Solution obj;
   int missing = obj.missingNumber(nums);

   cout<<missing<<endl;

   return 0;
}
