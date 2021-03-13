#include<stdio.h>
int main()
{
	int a=0;
	printf("Choose a number:\n 1.Pasta\n 2.Burger\n 3.Pasta\n 4.French Fries\n 5. Sandwich");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("Food Item - Pasta\n");
				printf("Price - Rs 179");
				break;
		case 2: printf("Food Item - Burger\n");
				printf("Price - Rs 129");
				break;
		case 3: printf("Food Item - Pizza\n");
				printf("Price - Rs 239");
				break;
		case 4: printf("Food Item - French Fries\n");
				printf("Price - Rs 99");
				break;
		case 5: printf("Food Item - Sandwich\n");
				printf("Price - Rs 149");
				break;
		default: printf("Pick a number from the list (1-5)");
	}
	return 0;
}
