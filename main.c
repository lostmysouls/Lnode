#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <malloc.h>
struct Lnode{
    int data;
    struct Lnode *next;
};

struct Lnode *creat(int n)
{
    struct Lnode *head,*p1,*p2;
    int i,a;
    head = NULL;
    printf("Please input the integers:\n");
    for(i = 0; i < n; i ++)
    {
        p1 = (struct Lnode *)malloc(sizeof(struct Lnode));
        scanf("%d",&a);
        p1 -> data = a;
    
    if(head = NULL)
        {
        head = p1;
        p2 = p1;
        }
    else
        {
        p2 -> next = p1;
        p2 = p1;
        }
     }
     p2 -> next = NULL;
     return head;
}
void main()
{
    int n;
    struct Lnode *q;
    printf("Please input how much you want to creat:\n");
    scanf("%d",&n);
    q = creat(n);
    printf("The rusult is:\n");
    while(q)
    {
    printf("%d ",q -> data);
    q = q -> next;
    }
    printf("\n");

}
