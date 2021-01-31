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
//struct Cart cartArray[100];		


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
	fflush(stdin);
	fprintf(fp,"%d\t%d\t%s\t%d\t%d\n",cartArray[i].cartId, cartArray[i].cartItems.ItemId , cartArray[i].cartItems.ItemName , cartArray[i].cartItems.ItemPrice ,cartArray[i].totalPrice);	
	fclose(fp);
	
}

//void fileRead()
//{
//	FILE *fp;
//	 int r=0,i;
//	char ch;
//   fp = fopen(INPUT_FILE,"rb");
//   if(fp == NULL)
//    {
//
//        printf("\nCan't open file");
//    }
//
//    else
//    {
//
//      do
//
//      {
//          if(feof(fp))
//          {
//              break;
//
//
//          }
//      else
//      {
//
//          ch = fgetc(fp);
//          if(ch == '\n')
//          {
//
//              r++;
//          }
//
//      }}while(1);
//     
//       rewind(fp);
//	  printf("Your order is\n");
//      printf("\nID\tItem Id\tItem Name\tPrice\tTotal price\n");
//		  for(i=0;i<r;i++)
//      	{	
//      		fgets(&cartArray[i].cartItems.ItemName ,sizeof(struct Cart) , fp);
//			printf("%s",cartArray[i].cartItems.ItemName);
//			
//        }
//      }
// fclose(fp);
// OrderDisplay();
//}
void read1()

{
    FILE *fp;
    int r=0,i;
    fp = fopen(INPUT_FILE,"r");
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

      printf("\nID\tItem Id\tItem Name\tPrice\tTotal price\n");

      for(i=0;i<r;i++)
      {

          fscanf(fp,"%d\t%d\t%s\t%d\t%d\n",&cartArray[i].cartId, &cartArray[i].cartItems.ItemId , &cartArray[i].cartItems.ItemName , &cartArray[i].cartItems.ItemPrice ,&cartArray[i].totalPrice);
        printf("%d\t%d\t%s\t%d\t%d\n",cartArray[i].cartId, cartArray[i].cartItems.ItemId , cartArray[i].cartItems.ItemName , cartArray[i].cartItems.ItemPrice ,cartArray[i].totalPrice);
          }
      }


 fclose(fp);





}







