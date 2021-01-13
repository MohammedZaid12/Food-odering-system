#include<stdio.h>  
#include <string.h>
struct Item{
	int Id;
	char** code;
	char** name;
	int price;
	char** parentCode;
	int isparent;
	
	
};
void menu()
{
int i;
struct Item items[2]={{1,"","Starters",0,"p01",1},
					  {2,"co1","Garlic Bread",200,"",0},
					  {3,"co2","Crackers",150,"",0},
					  {4,"c03","Cheese balls",250,"",0},
					  {5,"co4","Peri bites",400,"",0},
					  {6,,"Fast Foods",0,"p02",1},
					  {7,"c05","Chicken Roll",150,"",0},
					  {8,"c06","Grilled Burger",450,"",0},
					  {9,"c07","Pizza",700,"",0},
					  {10,"c08","Alfredo Pasta",600,"",0},
					  {11,"","BBQ",0,"p03",0},
					  {12,"c09","Tikka Boti",450,,0},
					  {13,"c10","Malai Boti",500,,0},
					  {14,"c11","Seekh Kabab",450,,0},
					  {15,"c12","Behari Boti",550,,0},
					  {16,"c13","Rashmi Kabab",600,,0}};

printf("\n%d\t%s\t%d",items[i].Id,items[i].name,items[i].price);
//	id:11,
//    code:'PO7',
//    name:'fAST fOOD',
//    price:'',
//    desc:'',
//    parentCode:'',
//    isParent:1

}
