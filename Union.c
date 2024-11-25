#include<stdio.h>
union sample{
int d;
char A;
float f;
}k;
int main(){
k.d=5;
k.A='v';
k.f=5.87;
printf("%d\n",k.d);
printf("%s\n",k.A);
printf("%f\n",k.f);
}
