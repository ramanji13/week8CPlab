#include<stdio.h>

#include<stdlib.h>

struct student {

char name [29];

int marks[3];

}s;

int main(){

int n, total=0;
 float avg=0;

printf("enter the number of students you want to print\n");

scanf("%d",&n);

struct student s[n];

 for(int i=0;i<n;i++){

printf("enter the name of the student \n"); scanf("%s",s[1].name);

total=0;

avg=0;

for(int j=0;j<3;j++){

printf("\nenter the marks of the sd subject \n",1+1);

 scanf("%d", &s[1].marks[j]);

total=total+s[1].marks[j];

printf("total is %d\n", total);

}avg=(total/3);

printf("the total marks of is is % d",s[1].name,total);

printf("the average marks of Ns ts %.2f",s[1].name,avg);
