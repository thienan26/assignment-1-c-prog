#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void insertNode(struct Node** p_head, struct Node* position, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    assert (position !=NULL && 
}

void pushBack(struct Node** p_head, int data)
{
    // your implementation
}

void deleteNode(struct Node** p_head, struct Node* position) 
{
    // your implementation
}

int sizeOfList(struct Node* head) 
{
    int count = 0;
    // your implementation

    return count;
}

void deleteList(struct Node **p_head)
{
    // your implementation
}

// Display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// display the linked list to a string output
void displayListToString(struct Node* head, char* output) {
    sprintf(output, "%s", "");
    char temp_str[100];
    struct Node* temp = head;
    while (temp != NULL) {
        sprintf(temp_str, "%d -> ", temp->data);
        strcat(output, temp_str);
        temp = temp->next;
    }
    // concatenate NULL to the output string    
    sprintf(temp_str, "NULL");
    strcat(output, temp_str);
}
