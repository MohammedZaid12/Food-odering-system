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

struct Item items[16]={{1,"po1","Starters",0,"",1},
					  {2,"co1","Garlic Bread",200,"po1",0},
					  {3,"co2","Crackers",150,"po1",0},
					  {4,"co3","Cheese balls",250,"po1",0},
					  {5,"co4","Peri bites",400,"po1",0},
					  {6,"po2","Fast Foods",0,"",1},
					  {7,"co5","Chicken Roll",150,"po2",0},
					  {8,"co6","Grilled Burger",450,"po2",0},
					  {9,"co7","Pizza",700,"po2",0},
					  {10,"co8","Alfredo Pasta",600,"po2",0},
					  {11,"po3","BBQ",0,"",0},
					  {12,"co9","Tikka Boti",450,"po3",0},
					  {13,"co10","Malai Boti",500,"po3",0},
					  {14,"c011","Seekh Kabab",450,"po3",0},
					  {15,"co12","Behari Boti",550,"po3",0},
					  {16,"co13","Rashmi Kabab",600,"po3",0}};
void menu()
{
int i;
for(i=0;i<16;i++)
{

printf("\n%d\t%s\t%d",items[i].Id,items[i].name,items[i].price);
}
//	id:11,
//    code:'PO7',
//    name:'fAST fOOD',
//    price:'',
//    desc:'',
//    parentCode:'',
//    isParent:1

}
