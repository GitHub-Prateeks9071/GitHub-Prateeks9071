#include<stdio.h>
#include"device.h"

int input(struct data *info, int *no_device)
{
	printf("Enter home Id : ");
	scanf("%d",&info[(*no_device)].homeId);
	printf("Enter home owner : ");
	scanf("%s",info[(*no_device)].homeOwner);
	printf("Enter Address : ");
	scanf("%s",info[(*no_device)].Address);
	 
	for(int i=0;i<2;i++)
	{
		printf("Enter device Id : ");
		scanf("%d",&info[(*no_device)].device[i].deviceId);
		printf("Enter device name : ");
		scanf("%s",info[(*no_device)].device[i].deviceName);
		printf("Enter device type : ");
		scanf("%s",info[(*no_device)].device[i].deviceType);
		printf("Enter device voltage : ");
		scanf("%d",&info[(*no_device)].device[i].voltage);
	 }
	(*no_device)++;

}

void search(struct data *info, int *no_device)
{
	int Id;
	printf("Enter device Id : ");
	scanf("%d",&Id);
	for(int i=0;i<(*no_device);i++)
	{
		for(int j=0;j<2;j++)
		{
			if(Id == info[i].device[j].deviceId)
			{
				printf("Device name is : %s\n",info[i].device[j].deviceName);
			}
		} 
	}
}

void change(struct data *info, int *no_device)
{
	int Id;
	printf("Enter device Id : ");
	scanf("%d",&Id);
	for(int i=0;i<=(*no_device);i++)
	{
		for(int j=0;j<2;j++)
		{
			if(Id == info[i].device[j].deviceId)
			{
				printf("Device new name is : ");
				scanf("%s",info[i].device[j].deviceName);
			}
		}
	}
}

void display(struct data *info, int *no_device)
{
	for(int i=0;i<(*no_device);i++)
	{
		printf("Home Id is : %d\n",info[i].homeId);
		printf("Home owner is : %s\n",info[i].homeOwner);
		printf("Address is : %s\n",info[i].Address);

		for(int j=0;j<2;j++)
		{
			printf("Device Id is : %d\n",info[i].device[j].deviceId);
			printf("Device name is : %s\n",info[i].device[j].deviceName);
			printf("Device type is : %s\n",info[i].device[j].deviceType);
			printf("Device voltage is : %d\n",info[i].device[j].voltage);
		}
	}
}

int menu()
{
	int ch = 0;
	printf("\n1. Add new device : ");
	printf("\n2. Display device : ");
	printf("\n3. Search device : ");
	printf("\n4. Change device name : ");
	printf("\nEnter choice : ");
	scanf("%d",&ch);
	return ch;
}

int main()
{
	struct data info[100];
	int no_device = 0;
	int ch = 0;
	do{
		ch = menu();
		if(ch==1)
		{
			input(info, &no_device);
		}
			else if(ch==2)
			{
				display(info, &no_device);
			}
			else if(ch==3)
			{
				search(info, &no_device);
			}
			else if(ch==4)
			{
				change(info, &no_device);
			}
				else{
				printf("Invalid input");
			}
	}while(1);
	return 0;
}
