#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
    int data;
    struct node * link;
};

void append(struct node **, int);
void display(struct node *);
void deleteNode(struct node **);

int main() {
    struct node *p = NULL;
    int n, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &val);
        append(&p, val);
    }

    printf("The elements in the linked list are: ");
    display(p);
    printf("\n");

    deleteNode(&p);
    printf("The elements in the linked list after deleting an element are: ");
    display(p);
    printf("\n");

    deleteNode(&p);
    printf("The elements in the linked list after deleting another element are: ");
    display(p);
    printf("\n");

    return 0;
}

void append(struct node **q, int num) {
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn->data = num;
    nn->link = NULL;

    if (*q == NULL) {
        *q = nn;
    } else {
        struct node *temp = *q;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = nn;
    }
}

void display(struct node *q) {
    while (q != NULL) {
        printf("%d->", q->data);
        q = q->link;
    }
    printf("NULL");
}

void deleteNode(struct node **q) {
    if (*q == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct node *temp = *q;
    if (temp->link == NULL) {
        // If there's only one node in the list
        free(temp);
        *q = NULL;
    } else {
        // Traverse till the second-to-last node
        while (temp->link->link != NULL) {
            temp = temp->link;
        }
        // Delete the last node
        free(temp->link);
        // Update the link of the second-to-last node to NULL
        temp->link = NULL;
    }
}
