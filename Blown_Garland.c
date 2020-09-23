/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<string.h>

int main(int argc, char *a[])
{
	//Write code here
	unsigned char inputStr[101];
	signed int iOfRed=-1, iOfBlue=-1, iOfYellow=-1, iOfGreen=-1;
	unsigned int kOfRed=0, kOfBlue=0, kOfYellow=0, kOfGreen=0;
	unsigned int inputStrLen=0;

	memset(inputStr, 0, sizeof(inputStr));
	scanf("%s", inputStr);
	inputStrLen = strlen(inputStr);

	for(unsigned int i=0; i<inputStrLen; i++)
	{
		if(inputStr[i] == 'R') 			iOfRed = i%4;
		else if(inputStr[i] == 'B')		iOfBlue = i%4;
		else if(inputStr[i] == 'Y')		iOfYellow = i%4;
		else if(inputStr[i] == 'G')		iOfGreen = i%4;

		if((iOfRed != -1) && 
		   (iOfBlue != -1) && 
		   (iOfYellow != -1) && 
		   (iOfGreen != -1) ) 	break;
	}

	for(unsigned int i=0; i<inputStrLen; i++)
	{
		if(inputStr[i] == '!')
		{
			if((i%4) == iOfRed)	kOfRed++;
			else if((i%4) == iOfBlue)	kOfBlue++;
			else if((i%4) == iOfYellow)	kOfYellow++;
			else if((i%4) == iOfGreen)	kOfGreen++;
		}
	}

	printf("%d %d %d %d", kOfRed, kOfBlue, kOfYellow, kOfGreen);
	
}
