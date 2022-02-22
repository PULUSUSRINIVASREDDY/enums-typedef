/*#include<stdio.h>
enum state{ap,ts,mp,hp}; // here i intialized  4 enumirators ->

int main()
{
        printf("\n%d %d %d\n",ap,ts,mp,kerla,punjab,haryana,bihar); 

	// but i intialized the variable here   more variable so it-> its comes 
	// errorsssss

                        return 0;

}
*/

#include<stdio.h>

enum state{ap,ts,mp,hp};
int main()
{
	printf("\n%d %d, %d, %d",ap,ts,mp,hp);
	printf("\n%d %d, %d, %d, %d, %d\n",ap,ts,mp);// its comes garbage values and warnins
	return 0;
}

