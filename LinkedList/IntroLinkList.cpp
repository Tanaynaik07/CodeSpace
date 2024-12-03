#include <iostream>  
using namespace std;  

// Define the structure of a linked list node
struct LinkedList {     
    int data; // Data field to store the value
    LinkedList* next; // Pointer to the next node in the linked list
};  

// Function to traverse the linked list and print each node's value
void traverse(LinkedList* head) {     
    // Loop through the list until the end is reached (nullptr)
    while (head != nullptr) {         
        // Print the value of the current node
        cout << "Current Node value: " << head->data << endl;         
        // Move to the next node in the list
        head = head->next;     
    }      
    return; 
}  

int main() {       
    // Create three nodes for the linked list dynamically
    LinkedList* node1 = new LinkedList();     
    LinkedList* node2 = new LinkedList();     
    LinkedList* node3 = new LinkedList();      

    // Assign data values to each node
    node1->data = 100;     
    node2->data = 200;     
    node3->data = 300;          

    // Link the nodes together
    node1->next = node2; // node1 points to node2     
    node2->next = node3; // node2 points to node3     
    node3->next = nullptr; // node3 is the last node, so it points to nullptr

    // Call the traverse function to print the linked list
    traverse(node1);     

    return 0; 
}
