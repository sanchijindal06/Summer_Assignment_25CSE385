#include<stdio.h>
#include<string.h>
struct Library{
     int id;
     char title[50];
     char author[50];
     int issued;
};
int main(){
    struct Library book[100];
    int n=0,choice,i,id,found;
    do{
        printf("----Library Management System----");
        printf("\n1.Add Book");
        printf("\n2.Issue Book");
        printf("\n 3. Return Book");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\n enter book id:");
            scanf("%d",&book[n].id);
            printf("\n enter title of the book");
            scanf("%s",&book[n].title);
            printf("\n enter the name of the author:");
            scanf("%s",&book[n].author);
            book[n].issued=0;
            n++;
            break;
            case 2:
            printf("\n Enter book id to be issued:");
            scanf("%d",&book[n].id);
            found=0;
            for(i=0;i<n;i++){
                if(book[i].id==id){
                    found=1;
                    if(book[i].issued==0){
                        printf("\n book issued successfully");
                    }
                    else{
                        printf("\n book already issued");
                    }
                }
            }
            break;
            case 3:
            printf("\n enter book id to be returned");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++){
                if(book[i].id==id){
                    found=1;
                    if(book[i].issued==1){
                               printf("\n Book issued successfully");
                    }
                }
            }
            break;
        }
    }while(choice!=3);
    return 0;
}