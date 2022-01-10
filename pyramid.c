#include<stdio.h>
#include<conio.h>
int main()
{
	char name[]="program";
	printf("%s\n" ,name);
	for(int i=1;i<=7;i++)
	printf("%-10.*s\n",i,name);
}