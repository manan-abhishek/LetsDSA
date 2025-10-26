#include<iostream>
#include<climits>
using namespace std;

int main() {
    int nums[] = {1,2,3,4,5};
    int size = 5;
    int minindex = 0;
    int maxindex = 0;

    for(int i = 0; i<size; i++){
        if(nums[i]<nums[minindex])
        minindex= i;
        if(nums[i]>nums[maxindex])
        maxindex=i;
    }
    swap(nums[minindex], nums[maxindex]);
    for(int i  =0; i<size; i++){
        
        cout <<nums[i]<<",";
    }
        return 0;
    }
