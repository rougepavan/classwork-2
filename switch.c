#include<stdio.h>
int main()
{
	char operation;
	int n1,n2;
	printf("enter the operator(+,-,*,/,):");
	scanf("%c",&operation);
	printf("enter two numbers:");
	scanf("%d %d",&n1,&n2);
	switch(operation)
	{
		case'+':
		printf("%d+%d=%d",n1,n2,n1+n2);
		break;
		
		case'-':
		printf("%d-%d=%d",n1,n2,n1-n2);
		break;
	case'*':
		printf("%d*%d=%d",n1,n2,n1*n2);
		break;
		case'/':
		printf("%d/%d=%d",n1,n2,n1/n2);
		break;
        default:
		printf("operation is error");
	}
	return 0;	
}
