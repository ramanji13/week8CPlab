#include<stdio.h>
#include<stdlib.h>

int main() {
struct student {
    int roll;
    char name[50];
    int marks;
};
    int n;
    printf("enter the value of n for number of students");
    scanf("%d",&n);
    struct student* p;
    p=(struct student*)calloc(n,sizeof(struct student*));
    for(int i=0; i<n; i++) {
        printf("enter the name of %d student\n",i+1);
        scanf("%s",p->name);
        printf("enter the roll number of %d student\n",i+1);
        scanf("%d",&p->roll);
        printf("enter the total marks of %d student\n",i+1);
        scanf("%d",&p->marks);
    }
    for(int i=0; i<n; i++) {
        if(p->marks<40)
            printf("%d roll number student %s is failed\n",p->roll,p->name);
    }
}
