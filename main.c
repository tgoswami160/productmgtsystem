#include "add.c"
#include "delete.c"

#include "view.c"
#include "edit.c"
#include<windows.h>
int main()
{
    int choice;
    char ch;
    do
    {

        system("cls");
        system("color 1c");
        printf("\n\t=====================  Welcome to product  management system  ====================\n\n");
        printf("\t 1. Add product\n");
        printf("\t 2. Delete product\n");
        printf("\t 3. View product\n");
        printf("\t 4. Edit product\n");
        printf("\t 5. Exit \n");


        printf("\n\tEnter your choice : ");
        scanf("%d%*c", &choice);
        switch (choice)
        {
        case 1:
            addProduct();
            break;
        case 2:
            deleteProduct();
            break;
        case 3:
            viewProduct();
            break;
        case 4:
            editproduct();
            break;
        case 5:
            printf("Exiting system.....\n");
            exit(0);
            break;
        default:
            printf("Invalid choice !!\n");
            exit(0);
            break;
        }
        printf("please press enter to continue else press any key.......");
        scanf("%c", &ch);

    } while (ch == '\n');

    return 0;
}