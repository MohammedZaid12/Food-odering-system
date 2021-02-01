#include<stdio.h>  
#include <string.h>
#define INPUT_FILE"cart.txt"
#include<stdlib.h> 
struct Item{
	int Id;
	char code[20];
	char name[20];
	int price;
	char parentCode[20];
	int isparent;
	
	
};
 
struct Item items[16]={
					  {1,"po1","Starters",0,"",1},
					  {2,"co1","Garlic Bread  ",200,"po1",0},
					  {3,"co2","Crackers      ",150,"po1",0},
					  {4,"co3","Cheese balls  ",250,"po1",0},
					  {5,"co4","Peri bites    ",400,"po1",0},
					  {6,"po2","Fast Foods",0,"",1},
					  {7,"co5","Chicken Roll  ",150,"po2",0},
					  {8,"co6","Grilled Burger",450,"po2",0},
					  {9,"co7","Pizza         ",700,"po2",0},
					  {10,"co8","Alfredo Pasta",600,"po2",0},
					  {11,"po3","BBQ",0,"",1},
					  {12,"co9","Tikka Boti   ",450,"po3",0},
					  {13,"co10","Malai Boti  ",500,"po3",0},
					  {14,"c011","Seekh Kabab ",450,"po3",0},
					  {15,"co12","Behari Boti ",550,"po3",0},
					  {16,"co13","Rashmi Kabab",600,"po3",0}	  
					  };
					  
struct order_array{
int orderid;
int itemid;
char Name[20];
int itemprice; 
int totalprice;
}arr[100];


int check=0;
void selectChildByParentCode(char code[20]);
void menu();					  
void filterByParent();
void selectChildById(int Id, char code[20]);
int total;


void filterByParent(){
	while(check !=1){
	int i ,j, input , serialNumber=1;
	char name[20];
	char code[20];
	printf("-----------------------------------------");
	printf("\nID\tName\n");
	for (i=0;i<16;i++){
		if(items[i].isparent == 1){
		printf("\n%d\t%s",items[i].Id , items[i].name);
		}
	}
	menu();
	printf("\nPress 1 to exit\nPress 0 to repeat \n");
		scanf("%d",&input);
		
		if(input == 1){
			check=1;
		fileRead();
	
		}
		
		
	}
	
	
		
}

void menu(){
		int i=0 ,j, input , serialNumber=1 , flag = 0 ;
		char name[20];
		char code[20];
		printf("\nEnter Your Choice \n");
		scanf("%d",&input);
		while(flag != 1){
		if(items[i].Id == input){
			
			if(items[i].isparent == 1){
			flag = 1;		
			selectChildByParentCode(items[i].code);
			}
			else{
				printf("Please enter again");
				flag = 1;		
				filterByParent();
			}
			
		}		
		
		i++;
		
}

}

void selectChildByParentCode(char code[20]){
		fflush(stdin);
		char myCode[20];
		int i , input , serialNumber=1,flag=0;	
		int error;
		printf("\n-----------------------------------------");
		printf("\nID\tName\tPrice");
		for (i=0;i<16;i++){
		if(strcmp(items[i].parentCode , code) == 0){
		strcpy(myCode,items[i].parentCode);
		printf("\n%d\t%s\t%d",items[i].Id,items[i].name, items[i].price);	
		serialNumber++;
		fflush(stdin);
		}
//		else{
//				printf("wrong input");
//		}
}
		printf("\nEnter Your choice");
		scanf("%d",&error);
		selectChildById(error,myCode);
	
}
void selectChildById(int Id, char code[20]){
	int i;
	for (i=0;i<16;i++){
	if(items[i].Id == Id ){
		if(items[i].isparent==0){
			cart(items[i].Id  , items[i].price  , items[i].name);
			
		}
		else{
		printf("wrong input");
		i=17;
		selectChildByParentCode(code);
		}
	}
	
 }
}

void check_out()
{
	int ans;
printf("Do you want to check out\nYes:1\nNo:0\n");
scanf("%d",&ans);
	if (ans==1)
	{
		printf("Total Price is %d\nThank you for the order",total);
	}
	else if (ans==0)
	{
		
     remove(INPUT_FILE"cart.txt");
     exit(1);
 
	}
	remove(INPUT_FILE);
}


