#include<stdio.h>
#include<float.h>
extern int a,b,c;

int main()
{
float value;
printf("size %lu\n",sizeof(value));
printf("Min Value %E\n",FLT_MIN);
printf("Max Value %E\n",FLT_MAX);
printf("Precision Value %d\n",FLT_DIG);


int a,b,c,d;
a=20;b=10;
c=a+b;
d=a-b;
printf("Variable c value is c=%d\n d=%d",c,d);

}

