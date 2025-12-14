#include<iostream>
#include<climits>
using namespace std;

int main(){

    int nums[] = {5,44,1,7,12,-6};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i<size; i++){
                    
       
            smallest = min(nums[i], smallest);       // if(nums[i]< smallest
             largest = max(nums[i], largest);         //    smallest = nums[i];
                                                    // }
           
        }

    
    cout<<"smallest :"<<smallest<<endl;
    cout<<"largest :"<<largest<<endl;
    return 0;
}
