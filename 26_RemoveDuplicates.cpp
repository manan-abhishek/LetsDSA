#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j = 1; j<nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main(){

    vector<int> nums = {1,1,2,2,3,4,5};

    Solution obj;
    int newlength = obj.removeDuplicates(nums);

    cout<<newlength<<endl;
     for (int i = 0; i < newlength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
