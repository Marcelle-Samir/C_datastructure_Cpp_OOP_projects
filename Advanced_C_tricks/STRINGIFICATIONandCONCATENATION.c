#include "stdio.h"



#define print(x) printf(#x"x=%d\n",x)
#define conc(a,b,c) a##b##c


void main()
{
	/*char w=5;
	print(w);							STRINGIFICATION
	//printf("w""x=%d\n",w)	;*/
	
	char conc(a, ,d)=5;
	//a d=5 --> preprocessor bysheel ay concatenated space ad=5
	char conc(a,c, )=9;
	//ac =9
	
	printf("%d\n%d\n ",ad,ac);
	printf("%d\n",__LINE__);
		printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
		printf("%d",__STDC__);

//-ans
//-STD=C99
//-STD=C89

	
	
}