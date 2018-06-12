/*
 * Noah French (njf5cu)
 * Lab 9
 * 11/17/17
 * Filename: linkedlist.c
 * File Desription: "very simple" linked list implementation
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

int main() {
 
  /* 1. Read in an integer */
  int n;
  printf("Enter how many values to input: ");
  scanf("%d", &n);

  /* 2. Read in n more ints, and put those in a linked list */
  int i;
  int temp;
  struct Node *tempNode = NULL;
  struct Node *thisNode;
  struct Node *deleteNode;

  for (i = 1; i <= n; i++) {
    printf("Enter value %d", i);
    printf(": ");
    scanf("%d", &temp);

    thisNode = (struct Node *) malloc(sizeof(struct Node));
    thisNode -> data = temp;
    thisNode -> next = tempNode;
    tempNode = thisNode;
  }

  /* 3. Print out that linked list */
  /* 4. Properly deallocate the linked list */
  for (i = 0; i < n; i++) {
    printf("%d\n", thisNode -> data);
    deleteNode = thisNode;
    thisNode = thisNode -> next;
    free(deleteNode);
  }

  return 0;
}
