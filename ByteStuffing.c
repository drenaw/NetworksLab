
#include <stdio.h>
#include <string.h>
void main()
{
	int n;
	printf("Enter the no. of characters: ");
	scanf("%d",&n);
	char c[n];
	printf("Enter the string: ");
	scanf("%s",&c);
	char ne[n+20];
	char *x="dtestx";
	char *y="dteetx";
	int i=0;int j=0; int k=0;
	char ch[7];
	while(c[i]!='\0')
	{
		for(j=0;j<6;j++)
		{
			ch[j]=c[i+j];
		}
		ch[6]='\0';
		if(strcmp(ch,y)==0 || strcmp(ch,x)==0)
		{
			ne[k++]='d';
			ne[k++]='t';
			ne[k++]='e';
			for(j=0;j<6;j++)
			{
				ne[k++]=c[i++];
			}

		}
		else
		{
			ne[k++]=c[i++];
		}
	}
	ne[k]='\0';
	printf("Stuffed string: %s",ne);
}
