#include<iostream>
#include<climits>
using namespace std;


int main() {

    int arr[] = {1,-2,3,-4,5,6};
    int size = 6;

    int maxSum = INT_MIN;

    for(int start = 0; start<size; start++){
        int currSum = 0;
        for(int end= start; end <size; end++){
            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<maxSum;
    return 0;
}