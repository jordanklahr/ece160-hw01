#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	//printf("%s %s\n",argv[2],argv[3]);
	float numb1 = atof(argv[2]);
	float numb2 = atof(argv[3]);
	printf("%f %f\n",numb1,numb2);
	float ans;
	if(argv[1] == "+")
	{
		ans = numb1 + numb2;
	}
        if(argv[1] == "-")
        {
                ans = numb1 - numb2;
        }
        if(argv[1] == "x")
        {
                ans = numb1 * numb2;
        }
        if(argv[1] == "/")
        {
                ans = numb1 / numb2;
        }
	printf("%f\n",ans);
}
