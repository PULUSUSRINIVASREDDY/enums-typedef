#include<stdio.h>
enum week{sun,mon=100,tue=1,wed=1000,thus,friday=4000,sat};
/*
         sun->value comes 0->because of complier takes internally starting 0 
	 so,starting from 0 to somevalue by the end 
        mon ->100;
        tues->1
        wed->1000;
        thus->1001;
        friday->4000;
        sat->4001;	
*/ 
 

int main()
{
	printf("\n%d,%d,%d,%d,%d,%d,%d\n",sun,mon,tue,wed,thus,friday,sat);
	return 0;
}
