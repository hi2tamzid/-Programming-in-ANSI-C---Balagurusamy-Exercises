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
    node *head ;
    void create(node *p) ;
    int count(node *p) ;
    void print(node *p) ;
    void *delete(node *p) ;
    head = (node *)malloc(sizeof(node)) ;
    create(head) ;
    delete(head) ;
    printf("\n") ;
    print(head) ;
    printf("\n") ;
    printf("\nNumber of items = %d \n", count(head)) ;
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


void *delete(node *head)
{
    node *find(node *p, int a) ;
    int key ; /// item to be deleted
    node *n1 ; /// pointer to node preceding key node
    node *p ;

    printf("\n What is the item (number) to be deleted?") ;
    scanf("%d", &key) ;

    if(head->number == key)
    {

        p = head->next ; /// pointer to 2nd node in list
        free(head->next) ; /// release space of key node
        head->next = p ; /// make head to point to 1st node
    }

    else
    {
        n1 = find(head, key) ;
        if(n1 == NULL)
            printf("\n Key not found \n") ;
        else
        {
            p = n1->next->next ; /// pointer to the node follwing the keynode.
            free(n1->next) ;
            n1->next = p ;

        }
    }
    return (head) ;
}

node *find(node *list, int key)
{
    static int a = 0 ;
    printf("%d\n", ++a);
    if(list->next->number == key) /// key found
        return (list) ;
    else if(list->next->next == NULL) /// end
        return (NULL) ;
    else
        find(list->next, key) ;

}

