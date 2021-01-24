#include <stdio.h>
#include <stdlib.h>
#define INPUT_FILE"example.dat"
struct Cart{
	int cartId;
	struct CartItems{
		int ItemId; 
		char ItemName[20];
		int ItemPrice;
	
	};
	int totalPrice;
int status;
}var;

		 
//void add_to_cart(struct Cart cart_items[])
//{
//	var.cartId=cart_items.
//}
