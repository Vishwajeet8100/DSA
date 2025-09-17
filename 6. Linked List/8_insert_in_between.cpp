// inserting a data after a particular key is found.

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
void insert_at_head(int data, node * &head, node* &tail){
    node * new_node = new node(data);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }else{
        new_node->next = head;
        head = new_node;
    }
}

void insert_at_tail(int data, node * &head, node* &tail){
    node * new_node = new node(data);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }else{
        tail->next = new_node;
        tail = new_node;      
    }
}
//  inserting after a particular value.
void insert_after_value(int data,int key, node * head){          // no need to pass tail , as both head and tail pointer will remain where they are, as we are inserting in between.
    node * temp = head;
    while(temp != NULL){
        if(temp->data == key){
            // step 1 -> create a new node to be added
            node * new_node = new node(data);
            // step 2-> make new_nodes next field point to the further node, whihc is stored in node->next.
            new_node->next = temp->next;    
            // step->3 make temp->next point to the new node.
            temp->next = new_node;
            //order of step 2 and step 3 matters.
            break;
        }
        temp= temp->next;
    }
    
}
void print(node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
}
int main()
{
    node* tail = NULL;
    node* head = NULL;
    insert_at_tail(10,head,tail);
    insert_at_tail(30,head,tail);
    insert_at_tail(40,head,tail);
    insert_after_value(20,10,head);
    print(head);

    return 0;
}