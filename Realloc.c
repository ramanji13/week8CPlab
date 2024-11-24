#include<stdio.h>
#include<stdlib.h>
int main() {
    int* p,n,m;
    printf("enter the no of numbers");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++) {
        scanf("%d",&p[i]);
    }
    for(int i=0; i<n; i++) {
        printf("%d",p[i]);
        printf("\n");
    }
    printf("enter total no of numbers you want ");
    scanf("%d",&m);
    p=(int*)realloc(p,m*sizeof(int));
    for(int i=n; i<m; i++) {
        scanf("%d",&p[i]);
    }
    for(int i=0; i<m; i++) {
        printf("%d",p[i]);

        printf("\n");
    }
    free(p);
}
