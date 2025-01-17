#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *CreateNode(int value) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void InsertAtBegin(int value) {
    struct node *newNode = CreateNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void InsertAtnthNode(int pos, int value) {
    if (pos <= 0) {
        printf("\n\t**Invalid position**\n");
        return;
    }
    if (pos == 1) {
        InsertAtBegin(value);
        return;
    }
    struct node *temp = head;
    int count = 1;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        printf("\n\t**Invalid position**\n");
        return;
    }
    struct node *newNode = CreateNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void InsertAtEnd(int value) {
    struct node *newNode = CreateNode(value);
    if (head == NULL) {
        head = newNode;
    } else {
        struct node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void DeleteAtBegin() {
    if (head == NULL) {
        printf("\n\t**No element exists**\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void DeleteAtEnd() {
    if (head == NULL) {
        printf("\n\t**No element exists**\n");
        return;
    }
    if (head->next == NULL) {
        DeleteAtBegin();
        return;
    }
    struct node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    struct node *lastNode = temp->next;
    temp->next = NULL;
    free(lastNode);
}

void DeletenthNode(int pos) {
    if (pos <= 0) {
        printf("\n\t**Invalid position**\n");
        return;
    }
    if (pos == 1) {
        DeleteAtBegin();
        return;
    }
    struct node *temp = head;
    int count = 1;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("\n\t**Invalid position**\n");
        return;
    }
    struct node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    free(deleteNode);
}

void Display() {
    if (head == NULL) {
        printf("\n\t**No elements to display**\n\n");
        return;
    }
    struct node *temp = head;
    printf("\nCurrent List:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void FreeList() {
    struct node *temp = head;
    while (temp != NULL) {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    head = NULL;
}

int main() {
    int ch;
    while (true) {
        printf("\n\t\t**MENU**\n\t1. Insert at begining\n\t2. Insert at nth position\n\t3. Insert at end\n\t4. Delete at begining\n\t5. Delete at end\n\t6. Delete nth node\n\t7. Display\n\t8. Exit\n");
        printf("\n\tEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                printf("\nEnter value to be inserted: ");
                int v1;
                scanf("%d", &v1);
                InsertAtBegin(v1);
                break;
            }
            case 2: {
                printf("\nEnter position to insert value: ");
                int v2, pos1;
                scanf("%d", &pos1);
                printf("Enter value to be inserted: ");
                scanf("%d", &v2);
                InsertAtnthNode(pos1, v2);
                break;
            }
            case 3: {
                printf("\nEnter value to insert at end: ");
                int v3;
                scanf("%d", &v3);
                InsertAtEnd(v3);
                break;
            }
            case 4: {
                DeleteAtBegin();
                break;
            }
            case 5: {
                DeleteAtEnd();
                break;
            }
            case 6: {
                printf("\nEnter position to delete element: ");
                int pos2;
                scanf("%d", &pos2);
                DeletenthNode(pos2);
                break;
            }
            case 7: {
                Display();
                break;
            }
            case 8: {
                FreeList();
                printf("\n\t**THANK YOU!**\n");
                exit(0);
            }
            default: {
                printf("\n\t**Choose a valid option**\n");
            }
        }
    }
    return 0;
}