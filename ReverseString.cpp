#include<iostream>
#include<vector>
using namespace std;

void ReverseString(vector<char>& s){

    int start = 0;
    int end = s.size()-1;

    while(start< end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
}


int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    int size = 5;

    ReverseString(s);

    for(int i= 0; i<s.size(); i++){
    cout<<s[i]<<",";
    }
cout<<endl;
return 0;
    
}