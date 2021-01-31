#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INPUT_FILE"cart.txt"
	struct CartItems{
		int ItemId; 
		char ItemName[50];
		int ItemPrice;
	
};				  
int count = 0;	
struct Cart{
	int cartId;
	struct CartItems cartItems;
	int totalPrice;
};	
struct Cart cartArray[100];		
void cart(int itemId   , int itemPrice  , char itemName[50]){
int serial=1,totalPrice=0,status=1,i=0;
	FILE *fp;
	fp = fopen(INPUT_FILE,"a");
	int flag=0;
	cartArray[i].cartId++;
	strcpy(cartArray[i].cartItems.ItemName , itemName);
	cartArray[i].cartItems.ItemId = itemId;
	cartArray[i].cartItems.ItemPrice = itemPrice;
	cartArray[i].totalPrice +=itemPrice;
	fflush(stdin);
	fprintf(fp,"%d\t%d\t%s\t%d\t%d\n",cartArray[i].cartId, cartArray[i].cartItems.ItemId , cartArray[i].cartItems.ItemName , cartArray[i].cartItems.ItemPrice ,cartArray[i].totalPrice);	
	fclose(fp);
}

void fileRead(){
	
	FILE *fp , *f1;
	int r=0,i,j,c;
	char ch;
   fp = fopen(INPUT_FILE,"rb");
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
	  printf("Your order is\n");
      printf("\nID\tItem Id\t\t Item Name\tPrice\tTotal price\n");
	  for(i=0;i<r;i++){	
      		fgets(&cartArray[i].cartItems.ItemName ,sizeof(struct Cart) , fp);
			printf("%s",cartArray[i].cartItems.ItemName);	
        }
        fclose(fp);
        
   	deleteItemsFromCart(r);
      }

}

void deleteItemsFromCart(int rows){
		FILE *f1 = fopen(INPUT_FILE,"r");     
     int itemId,i;
	printf("Enter Id if you want delete\n");
        scanf("%d",&itemId);
//		fscanf(f1,"%d%d",&cartArray[1].cartId,&cartArray[1].totalPrice);
//		printf("Cart Id : %d \n", cartArray[1].cartId);
        for(i=0;i<rows;i++){
        fscanf(f1,"%d%d",&cartArray[i].cartId,&cartArray[i].totalPrice);
		printf("Cart Id : %d \n", cartArray[i].cartId);		
		if(cartArray[i].cartId == itemId){
			printf("selected cart Id :%d",cartArray[i].cartId);
		  }	
		
		}
        
        fclose(f1);
}




