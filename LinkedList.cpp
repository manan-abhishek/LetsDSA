#include<iostream>
using namespace std;


class Node{
    public:

    int data;
    Node* next;

};

     Node* head= NULL;

    void insertBegining(int value){

        Node* newNode = new Node();
        newNode->data = value; 

        newNode->next = head;

        head = newNode;

    }
        void display(){

        Node* temp = head;

        if(head == NULL){
            cout<<"List is Empty"<<endl;
            return;
        }

        while(temp != NULL){
            cout<<temp->data<<" -> ";

            temp = temp->next;
        }
            cout<<"NULL"<<endl;
    
    }


int main(){

    int n, value;

    cout<<"No. of Elements"<<endl;
    cin>>n;

    for(int i = 0; i<n; i++){

        cout<<"Enter value: ";
        cin>>value;

        insertBegining(value);
    }

        cout<<"\nLinked List:\n";
        display();

        return 0;
    }
