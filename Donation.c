#include<stdio.h>
int main()
{
int x,y;
scanf("%d %d", &x,&y);

if(y>x)
{
int z=y-x;
printf("%d",z);
}
else
printf("NO");
}
return 0;
}
