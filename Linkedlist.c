#include <stdio.h>

#include <stdlib.h>

struct node {

  int data;

  struct node *next;

} *head;

 

void initialize(){

    head = NULL;

}

 

void insert(int num) {

    

    struct node* newNode = (struct node*) malloc(sizeof(struct node));

    newNode->data = num;

    newNode->next = head;

    head = newNode;

    printf("Inserted Element : %d\n", num);

}

 

void printAlternateNodes(struct node *head) {

    int counter = 0;

    printf("\nPrinting Alernate nodes of Linked List\n");

    while(head != NULL) {

        if (counter%2 == 0) {

           printf(" %d ", head->data);

        }

        counter++;

        head = head->next;

    }

}

void printLinkedList(struct node *nodePtr) {

  while (nodePtr != NULL) {

     printf("%d", nodePtr->data);

     nodePtr = nodePtr->next;

     if(nodePtr != NULL)

         printf("-->");

  }

}

  

int main() {

    initialize();

    insert(7);  

    insert(6); 

    insert(5); 

    insert(4);

    insert(3);

    insert(2);

    insert(1);

     

    printf("\nLinked List\n");

    printLinkedList(head);

 

    printAlternateNodes(head);

     

    return 0;

}

