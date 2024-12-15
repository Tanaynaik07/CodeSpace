#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node() :data(0),next(nullptr){};
    Node(int x) :data(x),next(nullptr){};
    Node(int x,Node* next):data(x),next(next){};
};

void traverse(Node* head){
    while(head!=nullptr){
        cout<<"Current Node value: "<<head->data<<endl;
        head=head->next;
    }

    return;
};

 void Insertion(Node* head,Node* newnode){
    //traversed to last node
    while(head->next!=nullptr){
        head=head->next;
    }

    //changing pointer from null to newnode
    head->next=newnode;
    newnode->next=nullptr;
}

 
Node* Reverse(Node* head){

    Node* prev=nullptr,*curr=head,*next ;

    while(curr!=nullptr  ){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main()
{

    Node* node1 = new Node(100);
    Node* node2 = new Node(200);
    Node* node3 = new Node(300);
    Node* node4 = new Node(400);

    Insertion(node1,node2);
    Insertion(node1,node3);
    Insertion(node1,node4);
 

    traverse(node1);
    Node* reverseHead=Reverse(node1);
    cout<<endl; 
    traverse(reverseHead);
    return 0;
}
