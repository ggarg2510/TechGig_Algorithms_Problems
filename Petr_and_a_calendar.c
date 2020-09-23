/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>

const unsigned int daysInMonth[]={
	31,		//Jan
	28,		//Feb
	31,		//Mar
	30,		//Apr
	31,		//May	
	30,		//Jun
	31,		//Jul
	31,		//Aug
	30,		//Sep
	31,		//Oct
	30,		//Nov
	31		//Dec	
};

int main(int argc, char *a[])
{
	//Write code here
	unsigned int month, day, daysInThatMonth=0,noOfWeeks=0, todaysDay=0;
	scanf("%d\n%d", &month, &day);

	daysInThatMonth = daysInMonth[month-1];

	todaysDay = day;
	noOfWeeks = 1;
	for(unsigned int i=1; i<=daysInThatMonth; i++,todaysDay++)
	{
		if(todaysDay > 7)
		{
			todaysDay = 1;
			noOfWeeks++;
		}

	//	printf("%d --- %d --- %d\n", i, todaysDay, noOfWeeks);
	}
	printf("%d\n", noOfWeeks);
	return 0;
}
