// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = 5;

//     int totalsum = 0;

//     for(int i=0; i<size; i++){
//         totalsum = totalsum+arr[i];
//     }
//     cout<<totalsum;
// }

#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,2,3,4,5};
    int size = 5;

    int product= arr[0];

    for(int i=1; i<size; i++){
        product = product*arr[i];
    }
    cout<<product;
}