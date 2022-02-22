#include<stdio.h>

enum week{sun,mon,tue,wed,thus,friday,sat};
int main()
{

       enum week day;
	day=thus; /// day of integer is 4,->because of 0,1,2,3,4-> 4th pos//
	printf("\n %d%d%d%d%d%d%d\n",sun,mon,tue,wed,thus,friday,sat);
	printf("\n only for dayi=%d",day);

        return 0;
}
