#include<iostream>
using namespace std;

class Node{ //Individual Node of the Linked List
    public:
    int data;
    Node* next;
    Node(int val){//constructor to initalize a node with value
        data=val;
        next=nullptr;
    }

};

class LinkedList{//linked list with nodes and head and tail pointers
public:
    Node* head;
    Node* tail;
    LinkedList(){
        head=nullptr;//Initially head and tail are null
        tail=nullptr;
    }

    ~LinkedList(){//Destructor to delete linked list
        while(head!=nullptr){
            Node* temp = head; // Store the current head
            head = head->next; // Move head to the next node
            delete temp; // Delete the old head
        }}

    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==nullptr){
            head=tail=newNode;//If the list is empty head and tail point to newnode
        }else{
            newNode->next=head;//New node's next points to the current head
            head=newNode;//Head is updated to point to the new node
        }
    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=tail=newNode; //If the list is empty, head and tail point to new node
        }
        else{
            tail->next=newNode;//tail next points to newNode
            newNode->next=nullptr;//New node's next is null
            tail=newNode;//Tail points to newNode
        }
    }

    void printList(){   //traverse and print the linked list
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next; //Move to the next node
        }
    }

    void insert(int val,int pos){
        Node* newNode=new Node(val);
        if(pos==0){
            push_front(data); //If position is 0, insert at front
            return;
        }
        Node*temp=head;
        for(int i=0;i<pos-1 && temp!=nullptr;i++){
            temp=temp->next; //Traverse to the node before the desired position
        }
        //reached the insert position
        if(temp==nullptr){
            cout<<"Position out of bounds"<<endl; //If position is out of bounds
            return;
        }
        newNode->next=temp->next; //New node's next points to the current node's next
        temp->next=newNode; //Insert the new node at the desired position
    }

void pop_front() {
    if (head == nullptr) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    // If the list had only one element
    if (head == nullptr) {
        tail = nullptr;
    }

    temp->next = nullptr;  // Not strictly necessary, but good for safety
    delete temp;
}
void pop_back(){
    if (head == nullptr) {
        cout << "List is empty" << std::endl;
        return;
    }

    if (head == tail) { // If there's only one element
        delete head;
        head = tail = nullptr;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){ // Traverse to the second last node
        temp=temp->next;
    }
    temp->next= nullptr; // Set the next of second last node to null
    delete tail;
    tail = temp; // Update tail to the second last node
}

int searchkey(int key){
    Node* temp=head;
    int index=0;
    while(temp!=nullptr){
        if(temp->data==key){
            return index; // Return the index if key is found
        }
        temp=temp->next; // Move to the next node
        index++;
    }
    return -1; // Return -1 if key is not found
}
};

