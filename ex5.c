#include<stdio.h>

void accept(int Arr[], int s);
void display(int Arr[], int s);
void isort(int Arr[], int s);
void ssort(int Arr[], int s);
void bsort(int Arr[],int s);

int main()
{
	int Arr[100],n,choice;
	printf("Enter Size of Array ");
	scanf("%d", &n);
	do
	{
		printf("\n\nMENU");
		printf("\n1. Accept elements of array");
		printf("\n2. Display elements of array");
		printf("\n3. Sort the array using insertion sort method");
		printf("\n4. Sort the array using selection sort method");
		printf("\n5. Sort the array using bubble sort method");
		printf("\n6. Exit");
		printf("\n\nEnter your choice 1-6 :");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:	accept(Arr,n);
				break;
			case 2:	display(Arr,n);
				break;
			case 3:	isort(Arr,n);
				break;
			case 4:	ssort(Arr,n);
				break;
			case 5:	bsort(Arr,n);
				break;
			case 6:	break;
			default:printf("\nInvalid choice");
		}
	}while(choice!=6);

	return 0;
}

void accept(int Arr[], int s)
{
	int I;
        for(I=0;I<s;I++)
	{
		printf("Enter element %d :",I+1);
		scanf("%d",&Arr[I]);
	}
}

void display(int Arr[], int s)
{
	printf("The elements of the array are:\n");
	int I;
        for(I=0;I<s;I++)
		printf("%d  ",Arr[I]);
}

void isort(int Arr[], int s)
{
	int I,J,Temp;
	for(I=1;I<s;I++)
	{
		Temp=Arr[I];
		J=I-1;
		while((Temp<Arr[J]) && (J>=0))
		{
			Arr[J+1]=Arr[J];
			J--;
		}
		Arr[J+1]=Temp;
	}
}

void ssort(int Arr[], int s)
{
	int I,J,Temp,Small;
	for(I=0;I<s-1;I++)
	{
		Small=I;
		for(J=I+1;J<s;J++) 	//finding the smallest element
		if(Arr[J]<Arr[Small])
			Small=J;
		if(Small!=I)
		{
			Temp=Arr[I]; 		//Swapping
			Arr[I]=Arr[Small];
			Arr[Small]=Temp;
		}
	}
}

void bsort(int Arr[],int s)
{
	int I,J,Temp;
	for(I=0;I<s-1;I++)
	{
		for(J=0;J<(s-1-I);J++)
			if(Arr[J]>Arr[J+1])
			{
				Temp=Arr[J]; 	//swapping
				Arr[J]=Arr[J+1];
				Arr[J+1]=Temp;
			}
	}
}


