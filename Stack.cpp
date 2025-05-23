#include <iostream>
using namespace std;

class Node{
    public :
        int data;
        Node *next;

        Node(){
            next=NULL;
        }
};

//stack class
class Stack{
    private:
        Node *top;//pointer to the top node of the stack

    public:
        Stack(){
            top=NULL;//initialize the stack with a null top pointer
        }
        //Push Operation: insert an element onto the top of the stack
        int push(int value){
            Node *newNode = new Node();//alocated memory for the new node 
            newNode ->data = value;     //assign value
            newNode->next= top;         //set the next pointer of the new node to the top
           
        }
};