#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[50];
    int marks[4];
};
int main() {
    int total=0,n;
    
    printf("enter the value of n for number of students\n");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0; i<n; i++) {
        printf("enter the name of the student\n");
        scanf("%s",s[i].name);
        for(int j=0; j<n; j++) {
            printf("enter the marks of subject%d\n ",j+1);
            scanf("%d",&s[i].marks[j]);
            total+=s[i].marks[j];
        }
        printf("total marks is%d\n",total);
    }
}
