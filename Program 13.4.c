#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    int number ;
    struct linked_list *next ;
};
typedef struct linked_list node ; /// node type defined..

int main()
{
    int n ;
    node *head = NULL ;
    void print(node *p) ;
    node *insert(node *p, int x) ;

    printf("Input the list of number.\n") ;
    printf("At end, type -999.\n") ;
    scanf("%d", &n) ;

    while(n != -999)
    {
        if(head == NULL)
        {
            head = (node *)malloc(sizeof(node)) ;
            head->number = n ;
            head->next = NULL ;
        }
        else
            head = insert(head, n) ;
        scanf("%d", &n) ;
    }

    printf("\n") ;
    print(head) ;
    printf("\n") ;
    return 0 ;
}

void create(node *list)
{
    printf("Input a number\n") ;
    printf("(type -999 at end): ") ;
    scanf("%d", &list ->number) ;

    if(list->number == -999)
    {
        list->next = NULL ;
    }

    else /// create next node
    {
        list->next = (node *)malloc(sizeof(node)) ;
        create(list->next) ; /// Recursion occurs
    }
    return ;
}

void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%d-->", list->number) ; /// print current item

        if(list->next->next == NULL)
            printf("%d", list->next->number) ;
        print(list->next) ;
    }
    return ;
}

int count(node *list)
{
    if(list->next == NULL)
        return (0) ;
    else
        return (1 + count(list->next)) ;

}

node *insert(node *list, int x)
{
    node *p1, *p2, *p ;
    p1 = NULL ;
    p2 = list ; /// p2 points to first node
    for(; p2->number < x ; p2 = p2->next)
    {
        p1 = p2 ;

        if(p2->next == NULL)
        {
            p2 = p2->next ; /// p2 set to NULL
            break ; /// insert new node at end
        }
    }

    /// key node found

    p = (node *)malloc(sizeof(node)) ; /// space for new node
    p->number = x ; ///place value in the new node
    p->next = p2; /// link new node to key node
    if(p1 == NULL)
        list = p ; /// new node becomes the first node
    else
        p1->next = p ;
    return (list) ;
}

node *find(node *list, int key)
{
    if(list->next->number == key) /// key found
        return (list) ;
    else if(list->next->next == NULL) /// end
        return (NULL) ;
    else
        find(list->next, key) ;

}

