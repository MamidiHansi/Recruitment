#include <stdio.h>

int main(void) {
		int num,sum=0,p;
		scanf("%d%d",&num,&p);
		while(num>1)
		{
			sum=sum+num;
			num=num-(num*p)/100;
		}
		printf("%d",sum+1);
	return 0;
}
