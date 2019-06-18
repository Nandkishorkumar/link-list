#include<stdio.h>
struct class_room
{
    char name[10];
    int marks;
    struct class_room *next;
}student;
struct class_room *start,*list;

create()
{
    if(start!=NULL)
        {
        printf("list is already created");
        }
    start=(struct class_room*)malloc(sizeof (struct class_room));
    printf("enter name");
    gets(start->name);
    printf("enter marks");
    scanf("%d",&start->marks);
    start->next=NULL;
}
add()
{
    if(start == NULL)
    {
        create();
        return;
    }
    list=start;
    while(list->next != NULL)
    {
        list=list->next;
    }
    list->next =(struct class_room *)malloc(sizeof(struct class_room));
    list=list->next;
    printf("enter name");
    gets(list->name);
    printf("enter marks");
    scanf("%d",&list->marks);
    list->next=NULL;

}
show()
{


    list = start;
    while(list != NULL)
    {
        printf("%s %d\n",list->name,list->marks);
        list = list->next;
    }

}
search()
{
    if(start==NULL)
    {
        printf("there is no list");
        return;
    }
    list=start;
    char src[20];
    printf("enter name");
    gets(src);
    while(list!=NULL)
    {
        if(strcmp(src,list->name)==0)
        {
            printf("%s---%d",list->name,list->marks);
            return;
        }
        list=list->next;
        return list;

    }
}
del()
{
    printf("enter name to delete that list");
    search();
    if(start== NULL)
    {
        printf("nothing to delete");
        return;
    }
    list=list->next->next;
    return;
}
modi()
{
    search();
     printf("enter name");
    gets(list->name);
    printf("enter marks");
    scanf("%d",&list->marks);
   return;

}
fdel()
{
    start->next->next;
    list=list->next;
    return;
}


main()
{
    char cmd[100];
    while(1)
    {
        printf("#.>");
        gets(cmd);
        if(cmd[0]=='\0')
            continue;
        else
        if(strcmp(cmd,"exit")==0)
            break;
        else
        if(strcmp(cmd,"add")==0)
            add();
        else
        if(strcmp(cmd,"create")==0)
            create();
        else
            if(strcmp(cmd,"show")==0)
            show();
        else
            if(strcmp(cmd,"search")==0)
            search();
        else
            if(strcmp(cmd,"del")==0)
            del();
        else
            if(strcmp(cmd,"modi")==0)
            modi();
        else
            if(strcmp(cmd,"fdel")==0)
            fdel();

        else
            printf("not define");
    }
}

