#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	//printf("%s %s\n",argv[2],argv[3]);
	float numb1 = atof(argv[2]);
	float numb2 = atof(argv[3]);
	//printf("%f %f\n",numb1,numb2);
	float ans;
	if(strncmp(argv[1], "+",1) == 0)
	{
		ans = numb1 + numb2;
	}
        if(strncmp(argv[1], "-",1) == 0)
        {
                ans = numb1 - numb2;
        }
        if(strncmp(argv[1], "x",1) == 0)
        {
                ans = numb1 * numb2;
        }
        if(strncmp(argv[1], "/",1) == 0)
        {
                ans = numb1 / numb2;
        }
	printf("%g\n",ans);
}
