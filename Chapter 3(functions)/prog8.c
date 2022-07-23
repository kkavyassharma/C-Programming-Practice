//WAP to convert time to minutes.
#include<stdio.h>
int time_to_minutes(int minute, int hour);
int main(){
int minute, hour, total;
printf("Enter the time:");
scanf("%d %d", &hour, &minute);
total = time_to_minutes(minute, hour);
printf("\n The time in minutes is: %d", total);
return 0;
}
int time_to_minutes(int minute, int hour){
    int total;
    total = (hour * 60) + minute;
    return total;
}