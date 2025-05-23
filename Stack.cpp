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
            top = newNode;              //update the top pointer to the new node
            cout << "Push value : "<< value<< endl;
            return value;
        }

        //pop operation : remove the topmost element from the stack 
        void pop(){
            if (isEmpty()){
                cout << "stack is Empty. "<<endl;
            }
            
            Node *temp = top; //create a temporary pointer to the top node
            top= top->next; //Update the top pointer to the next node
            cout << "Popped value :  "<< temp->data << endl;
            delete temp;
        }
        //peek/Top operation: Retrive the value of the topmost element without remove
        void peek(){
            if (top== NULL){
                cout << "List is Empty"<< endl;
            }
            else {
                Node *current = top;
                while (current != NULL){
                    cout << current ->data << " "<<endl;
                    current = current->next;
                }
                cout << endl;
            }//return the value of the top node
        }

        //isEmpty operation: check id the stack is empty
        bool isEmpty(){
            return top == NULL;//return true if the top pointer is NULL, indicating
        }
};

int main () {
    Stack Stack;

    int choice= 0;
    int value;

    while(choice!= 4){
        cout <<"1. Push\n";
        cout <<"2. Pop\n";
        cout <<"3. Peek\n";
        cout <<"4. Exit\n";
        cout <<"Enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1:
            cout << "Enter the value top push : ";
            cin >> value;
            Stack.push(value);
            break;

           case 2:
          if (!Stack.isEmpty()) {
                Stack.pop(); // Pop the top element from the stack
            }
            else {
                cout << "Stack is empty. Cannot pop." << endl;
            }
            break;

             case 3:
             if (!Stack.isEmpty()) {
                Stack.peek(); // Get the value of the top element
            }
            else {
                cout << "Stack is empty. No top value." << endl;
            }
            break;
            
            case 4:
            cout << "Exiting program." << endl;
            break;
       
           
        }
        cout << endl;
    }
    return 0;
}