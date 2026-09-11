#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure of a node
struct Node {
    int data;               // Stores the actual value
    struct Node* next;      // Stores the memory address of the next node
};

// Function prototypes
struct Node* createLinkedList(int totalNodes);
void displayList(struct Node* head);

int main() {
    int numberOfNodes;
    struct Node* head = NULL;

    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &numberOfNodes);

    // Guard against non-positive counts
    if (numberOfNodes <= 0) {
        printf("Invalid number of nodes.\n");
        return 0;
    }

    // 2. Create the linked list
    head = createLinkedList(numberOfNodes);

    // 3. Display the linked list
    displayList(head);

    return 0;
}

// Function to dynamically build the linked list
struct Node* createLinkedList(int totalNodes) {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;
    int value, i;

    for (i = 1; i <= totalNodes; i++) {
        // Allocate memory for a single node on the heap
        newNode = (struct Node*)malloc(sizeof(struct Node));

        // Check if memory allocation failed
        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        // Get value from user
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        newNode->data = value;  // Assign data
        newNode->next = NULL;   // Ensure the new node points to nothing initially

        // Link the node to the rest of the list
        if (head == NULL) {
            // If the list is empty, make this the head node
            head = newNode;
            temp = head;
        } else {
            // Otherwise, link it to the end and update the tracking pointer
            temp->next = newNode;
            temp = temp->next;
        }
    }
    return head;
}

// Function to traverse and display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head; // Start from the head

    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("\nYour Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data); // Print current data
        temp = temp->next;            // Move to the next node
    }
    printf("NULL\n"); // End of the list
}