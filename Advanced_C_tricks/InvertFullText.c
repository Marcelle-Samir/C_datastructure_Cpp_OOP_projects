#include <stdio.h>
#define POINTERSIZE 9

int stringsize(char *str);
int reversetext(char **ptr,char *str,int size);
int printreversetext(char **ptr);

void main()
{
	char *ptr[POINTERSIZE];
	char *str="Ahmed mina mohammed marina kano we ra7o we reg3ooo";
	int size = stringsize(str);
	reversetext(ptr,str,size);
	printreversetext(ptr);
	
}

int reversetext(char **ptr,char *str,int size)
{
	int k=0;
	for(int i=0;i<size;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	
	for(int j=0;j<size;j++)
	{
		if(j==0)
		{
			ptr[k]=&str[j];
			k++;
		}
		if(str[j]==' ')
		{
			ptr[k]=&str[j+1];
			k++;
		}
	}
	
	
	
}
 
int printreversetext(char **ptr)
{
	for(int i=POINTERSIZE-1;i>=0;i--)
	{
		int j=0;
		while(ptr[i][j]!=' ' && ptr[i][j]!='\0')
		{
			printf("%c",ptr[i][j]);
			j++;
		}
		printf(" ");
		
	}
	
}

int stringsize(char *str)
{
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{
		i++;
		count++;
	}
	return count+1;
	
}