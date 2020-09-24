/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	//Write code here
	unsigned int arraySize=0,_1Count=0, data=0;

	scanf("%d\n", &arraySize);

	for(unsigned int i=0 ;i<arraySize; i++)
	{
		scanf("%d", &data);
		if(data == 1)	_1Count++;
	}

	printf("%d", _1Count);
}
