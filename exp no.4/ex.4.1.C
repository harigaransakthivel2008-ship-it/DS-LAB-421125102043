#include <stdio.h>  
#include <stdlib.h>  
// Node structure definition  
struct Node { 
     int data; 
     struct Node* next; 
 };  
// Function prototypes  
struct Node* createNode(int data);  
void push(struct Node** top, int data);  
int pop(struct Node** top);  
void displayStack(struct Node* top); 
int main() { 
struct Node* top = NULL; 
int choice, element; 
while (1) { 
    printf("\nStack Operations Menu:\n"); 
         printf("1. Push\n"); 
         printf("2. Pop\n"); 
         printf("3. Display\n"); 
         printf("4. Exit\n"); 
         printf("Enter your choice: "); 
         scanf("%d", &choice); 
         switch (choice) { 
             case 1: 
                 printf("Enter element to push: "); 
                 scanf("%d", &element); 
 
 
                 push(&top, element); 
                 break; 
             case 2: 
                 element = pop(&top); 
                 if (element != -1) 
                     printf("Popped element: %d\n", element); 
                 break; 
             case 3: 
                 displayStack(top); 
                 break; 
          case 4: 
                  exit(0); 
             default:  
                 printf("Invalid choice! Please enter a valid option.\n"); 
           } 
       } 
       return 0; 
} 
// Function to create a new node  
struct Node* createNode(int data) { 
      struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
      if (!newNode) { 
          printf("Memory allocation error\n"); 
          exit(1); 
      } 
      newNode->data = data; 
      newNode->next = NULL; 
      return newNode; 
}  
// Function to push an element onto the stack  
void push(struct Node** top, int data) { 
      struct Node* newNode = createNode(data); 
      newNode->next = *top; 
      *top = newNode; 
      printf("Element pushed: %d\n", data); 
}  
// Function to pop an element from the stack  
int pop(struct Node** top) { 
     if (*top == NULL) { 
         printf("Error: Stack underflow. Cannot pop element.\n"); 
         return -1; 
     }      
struct Node* temp = *top; 
     int poppedElement = temp->data; 
     *top = (*top)->next; 
     free(temp); 
     return poppedElement; 
 }  
// Function to display the stack elements  
void displayStack(struct Node* top) {  
    if (top == NULL) { 
         printf("Stack is empty.\n"); 
         return; 
     } 
     printf("Stack elements: "); 
     struct Node* temp = top; 
     while (temp != NULL) { 
         printf("%d->", temp->data); 
         temp = temp->next; 
     } 
     printf("NULL\n"); 
 }
