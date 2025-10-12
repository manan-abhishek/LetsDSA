#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    string sentence = "Accenture coding round";

    int count = 0;

    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] != ' '){
            count++;
        }
    }

    cout<<"No. Of. Char = "<<count<<endl;
return 0;

}