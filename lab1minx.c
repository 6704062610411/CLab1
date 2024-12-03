#include <stdio.h>

int main()
{

	int n1,n2;
	scanf("%d%d",&n1,&n2);

    if (n2>n1)
    {
        printf("%d geater than %d\n",n2,n1);
        printf("greater than %d",(n2-n1));
    }
    else
    {
        printf("%d geater than %d\n",n1,n2);
        printf("greater than %d",(n1-n2));
    }
    return 0;
