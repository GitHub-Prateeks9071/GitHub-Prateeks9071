#include<stdio.h>
#include"bookdata.h"

void input(struct Book_Data_Members *book, int* no_book)
{
	printf("Enter book Id : ");
	scanf("%d",&book[(*no_book)].bookId);
	printf("Enter book name : ");
	scanf("%s",book[(*no_book)].BookName);
	printf("Enter ISBN no : ");
	scanf("%d",&book[(*no_book)].ISBN_no);
	printf("Enter book author : ");
	scanf("%s",book[(*no_book)].Author);
	(*no_book)++;
}

void display(struct Book_Data_Members *book, int* no_book)
{
	for(int i=0;i<(*no_book);i++)
	{
		printf("Book Id is : %d\n",book[i].bookId);
		printf("Book name is : %s\n",book[i].BookName);
		printf("Book ISBN is : %d\n",book[i].ISBN_no);
		printf("Book author is : %s\n",book[i].Author);
	}
}

int menu()
{
	int ch = 0;
	printf("1. Add new book\n");
	printf("2. Display book\n");
	printf("3. Exit");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	return ch;
	 
}

int main()
{
	struct Book_Data_Members book[100];
	int ch = 0;
	int no_book = 0;
	
		 
	do{
		ch = menu();
		 
		if(ch==1)
		{
			input(book, &no_book);
		}
		if(ch==2)
		{
			display(book, &no_book);
		} 
		if(ch==3)
		{
			 break;
		}
	}while(1);	
	return 0;
}
