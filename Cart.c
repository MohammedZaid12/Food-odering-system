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
};	
struct Cart cartArray[100];		


void cart(int itemId   , int itemPrice  , char itemName[50]){
int serial=1,totalPrice=0,status=1,i=0;
	FILE *fp;
	fp = fopen(INPUT_FILE,"a");
	int flag=0;
	cartArray[i].cartId++;
//	fflush(stdin);
//	
//	fflush(stdin);
	strcpy(cartArray[i].cartItems.ItemName , itemName);
	cartArray[i].cartItems.ItemId = itemId;
	cartArray[i].cartItems.ItemPrice = itemPrice;
	cartArray[i].totalPrice +=itemPrice;
	fflush(stdin);
	fflush(stdin);
	fprintf(fp,"%d\t%d\t%s\t%d\t%d\n",cartArray[i].cartId, cartArray[i].cartItems.ItemId , cartArray[i].cartItems.ItemName , cartArray[i].cartItems.ItemPrice ,cartArray[i].totalPrice);	
	fclose(fp);

}

void fileRead()
{
	FILE *fp;
	 int r=0,i;
	char ch;
   fp = fopen(INPUT_FILE,"r");
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

      printf("\nID\tNAME\tPrice\tTotal price\n");

      for(i=0;i<r;i++)
      {

          fscanf(fp,"%d\t%d\t%s\t%d\t%d\n",&cartArray[i].cartId, &cartArray[i].cartItems.ItemId , &cartArray[i].cartItems.ItemName , &cartArray[i].cartItems.ItemPrice ,&cartArray[i].totalPrice);

          printf("%d\t%d\t%s\t%d\t%d\n",cartArray[i].cartId, cartArray[i].cartItems.ItemId , cartArray[i].cartItems.ItemName , cartArray[i].cartItems.ItemPrice ,cartArray[i].totalPrice);
          }
      }


 fclose(fp);

}

//   if(fp == NULL) {
//      perror("Error in opening file");
//      return(-1);
//   }
//   
//   while(1) {
//      c = fgetc(fp);
//      if( feof(fp) ) { 
//         break ;
//      }
//        printf("%c", c);
//   }
//   fclose(fp);




