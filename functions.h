#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <ncurses.h>


int days, percent, prepayment, priority, official=10600+6890, sum=0;

void start(void){
    printf("Сколько было смен?:");
    scanf("%d",&days);
    printf("Какой процент на точке?:");
    scanf("%d",&percent);
    printf("Сколько был аванс?:");
    scanf("%d",&prepayment);
    printf("Сколько приоритета?:");
    scanf("%d",&priority);
}
double Sum(void){
    int a;
    for (int i=0;i<days;i++){
        printf("Сколько касса в %d день?:",i+1);
        scanf("%d",&a);
        sum=sum+a;
    }
    return (double)sum*percent/100;
}
double salary_counter(void){
    double salary=0.0;
    salary=days*800-prepayment-official+priority+Sum();
    return salary;
}