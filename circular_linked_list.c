#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
//case 1: circular linked list traversal
void linkedlistTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
//case 2 : Insertion in circular linkedlist
struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    } //At this point p points to last node of circular linked list

    p->next = ptr;
    ptr->next = head;
    // head = ptr;
    return ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 45;
    third->next = head;
    head=InsertAtFirst(head, 50);
    head=InsertAtFirst(head, 58);
    linkedlistTraversal(head);
    return 0;
}