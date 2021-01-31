#include <stdio.h>
#include <stdlib.h>
#define INPUT_FILE"cart.txt"
struct CartItems{
		int ItemId; 
		char ItemName[50];
		int ItemPrice;
	
};				  

struct Cart{
	int cartId;
	struct CartItems cartItems;
	int totalPrice;
int status;
}cartArray[100];
	
int total,r=0,i;
char name[20],number[20],address[50];
struct order_array{
int orderid;
int itemid;
char Name[20];
int itemprice; 
int totalprice;
}arr[100];
struct Order{
char name[20];
char contact[20];
char address[50];
int totalPrice;
}order;
//void information()
//{  
//	printf("Please enter your name:\n");
//	gets(name);
//	strcpy(order.name,name);
//	printf("Enter your contact number:\n");
//	gets(number);
//	strcpy(order.contact,number);
//	printf("Enter your address:\n");
//	gets(address);
//	strcpy(order.address,address);
//	printf("\n%s\n%s\n%s",order.name,order.contact,order.address);
		  
int cid,id,price,total;
char Name[20];
void OrderDisplay()
{
  FILE *fp, *f1;
    int r=0,i=0,n1;
    fp = fopen(INPUT_FILE,"r");
     f1 = fopen("order.txt","a");
    char ch;
    if(fp == NULL)
    {

        printf("\nCan't open file");
    }

    else
    {

      do

      {
          if(feof(fp))
          {
              break;


          }
      else
      {

          ch = fgetc(fp);
          if(ch == '\n')
          {

              r++;
          }

      }}while(1);

      rewind(fp);

      printf("\n");
fflush(stdin);
fflush(stdin);
      for(i=0;i<r;i++)
		{
			fflush(stdin);
			
		//	printf("%d\t%d\t%s\t%d\n",arr[i].orderid,arr[i].itemid,arr[i].Name,arr[i].itemprice);
	fscanf(f1,"%d%d%s%d\n",&arr[i].orderid,&arr[i].itemid,&arr[i].Name,&arr[i].itemprice);
    
      
	//fscanf(f1,"%d\t%d\t%s\t%d\t%d\n",&cartArray[i].cartId,&cartArray[i].cartItems.ItemId ,&cartArray[i].cartItems.ItemName ,&cartArray[i].cartItems.ItemPrice ,&cartArray[i].totalPrice);
      }
      rewind(fp);
      for(i=0;i<r;i++)
      {
 			fprintf(f1,"%d\t%d\t%s\t%d\n",arr[i].orderid,arr[i].itemid,arr[i].Name,arr[i].itemprice);
			printf("%d\t%d\t%s\t%d\n",arr[i].orderid,arr[i].itemid,arr[i].Name,arr[i].itemprice);
	      // printf("\n%d\t%s\t%s\t%d\t%f",e[i].id,e[i].name,e[i].des,e[i].hrs,e[i].salary);
          }
      }


 fclose(fp);
 fclose(f1);


 remove(INPUT_FILE);

}


