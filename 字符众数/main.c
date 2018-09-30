#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[100];
	int i;
	int cout[125];
	int mark;
	while(gets(str)!=NULL)
	{
		memset(cout,0,sizeof(cout));
		int n=strlen(str);
		for(i=0;i<n;i++)
		{
			if(str[i]!=' ')
			{
				cout[str[i]]++;
			}
		}
		int max=0;
		for(i=65;i<=122;i++)
		{
			if(max<cout[i])
			{
				max=cout[i];
				mark=i;
			}
		}
		printf("%c %d\n",mark,max);
	}
	return 0;
}
