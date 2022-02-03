#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *DeleteAtFirst(struct Node *head)
{
    struct Node *ptr =head;
    head=head->next;
    free(ptr);
    // return ptr;
}
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertAfterEnd(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 54;
    fourth->next = NULL;
    printf("Linked List before :");
    linkedlistTraversal(head);
    // head=insertAtFirst(head,56);
    // head=insertAtIndex(head,56,1);
    DeleteAtFirst(head);
    printf("Linked List After :");
    // head = insertAtEnd(head, 89);
    // insertAfterEnd(head, second, 4);
    linkedlistTraversal(head);
    return 0;
}