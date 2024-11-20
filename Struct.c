#include<stdio.h>
#include<string.h>
    struct movie {
        char heroName[50];
        int time;
        char title[40];
    };
int main () {
    struct movie tollywood; {
        printf("enter the hero name");
        gets(tollywood.heroName);
        printf("enter the movie title");
        gets(tollywood.title);
        printf("enter the how much time of movie in minutes");
        scanf("%d\n",&tollywood.time);
        
        printf("%s\n",tollywood.heroName);
        printf("%s\n",tollywood.title);
        printf("%d\n",tollywood.time);
        
    }
}
