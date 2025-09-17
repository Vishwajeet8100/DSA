#include<iostream>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node * next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

    
};

void print(node * head){
        node * temp = head ; 
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }


int main()
{
    node * first = new node(3);
    node * second = new node(4);
    node * third = new node(6);
    node * fourth = new node (19);
    node * fifth = new node(7);


    /* here we manually created each node and named it as first, second , third ....and so on,
    but we could have just created a function for adding a element at first or last, but this way we
    wouldnt have names for nodes and thats okay we could be able to accesss them with just the head node.*/

    
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(first);

    return 0;
}