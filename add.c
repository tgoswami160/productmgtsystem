#include "product.h"

void addProduct()
{
    product p1;
    FILE *ptr;
    ptr=fopen("storage.bin","ab");
    system("cls");
    printf("\n===========Add New Product================\n");
    printf("enter product id:");
    scanf("%d%*c",&p1.id);
    printf("enter product name :");
    scanf("%[^\n]%*c",&p1.name);
    printf("enter product price :");
    scanf("%f",&p1.price);
    printf("enter product quantity :");
    scanf("%d",&p1.quantity);

    fwrite(&p1,sizeof(product),1,ptr);

    fclose(ptr);
     printf("product added succesfully !\n");
     char ch;
     scanf("%c",&ch);

}