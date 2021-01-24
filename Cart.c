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


void cart(int Id1   , int price1  , char name1[50]){
	int flag=0;
	fflush(stdin);
	int serial=1,totalPrice=0,status=1,i=0;
	fflush(stdin);
	struct Cart cartArray[] = {{ serial, {Id1,"",price1} , totalPrice , status}};		
	strcpy(cartArray[i].cartItems.ItemName , name1);
	cartArray[i].totalPrice +=price1;
	printf("\n%d\t%d\t%s\t%d\t%d",cartArray[i].cartId, cartArray[i].cartItems.ItemId , cartArray[i].cartItems.ItemName , cartArray[i].cartItems.ItemPrice ,cartArray[i].totalPrice);		
	fflush(stdin);
	FILE *fp;
	fp = fopen(INPUT_FILE,"w");
	fprintf(fp,"\n%d\t%d\t%s\t%d\t%d",cartArray[i].cartId, cartArray[i].cartItems.ItemId , cartArray[i].cartItems.ItemName , cartArray[i].cartItems.ItemPrice ,cartArray[i].totalPrice);		
	fclose(fp);
	

}

		 
