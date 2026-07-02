#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Detect cycle using Floyd's Algorithm
bool detectCycle(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            return true;
    }

    return false;
}

// Remove cycle
void removeCycle(Node* head) {

    Node* slow = head;
    Node* fast = head;

    // Step 1: Detect the cycle
    do {
        slow = slow->next;
        fast = fast->next->next;
    } while(slow != fast);

    // Step 2: Move slow to head
    slow = head;

    // Special case: cycle starts at head
    if(slow == fast) {
        while(fast->next != slow)
            fast = fast->next;

        fast->next = NULL;
        return;
    }

    // Step 3: Find the node just before the start of the cycle
    while(slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    // Step 4: Break the cycle
    fast->next = NULL;
}

// Print linked list
void printList(Node* head) {

    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Create a cycle
    head->next->next->next->next->next = head->next;

    if(detectCycle(head))
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";

    removeCycle(head);

    if(detectCycle(head))
        cout << "Cycle Detected\n";
    else
        cout << "Cycle Removed Successfully\n";

    printList(head);

    return 0;
}