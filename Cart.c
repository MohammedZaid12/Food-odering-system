#include <stdio.h>
#include <stdlib.h>
#define INPUT_FILE"w.txt"
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
};	
struct Cart cartArray;		


void cart(int itemId   , int itemPrice  , char itemName[50]){
		FILE *fp;
	fp = fopen(INPUT_FILE,"a");

	int flag=0;
	fflush(stdin);
	int serial=1,totalPrice=0,status=1,i=0;
	fflush(stdin);
	strcpy(cartArray.cartItems.ItemName , itemName);
	cartArray.cartItems.ItemId = itemId;
	cartArray.cartItems.ItemPrice = itemPrice;
	cartArray.totalPrice +=itemPrice;
	fflush(stdin);
	fflush(stdin);
	fprintf(fp,"\n%d\t%d\t%s\t%d\t%d",cartArray.cartId, cartArray.cartItems.ItemId , cartArray.cartItems.ItemName , cartArray.cartItems.ItemPrice ,cartArray.totalPrice);	
	fclose(fp);
}

void fileRead(	FILE *fp)
{
	fp = fopen(INPUT_FILE,"r");
	fscanf(fp,"\n%d\t%d\t%s\t%d\t%d",&cartArray.cartId,&cartArray.cartItems.ItemId ,&cartArray.cartItems.ItemName ,&cartArray.cartItems.ItemPrice ,&cartArray.totalPrice);		
	fprintf(fp,"\n%d\t%d\t%s\t%d\t%d",cartArray.cartId, cartArray.cartItems.ItemId , cartArray.cartItems.ItemName , cartArray.cartItems.ItemPrice ,cartArray.totalPrice);		
 }		 
