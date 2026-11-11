#include<stdio.h>
union job{
char name[32];
float salary:
}u;
int main(){
printf("enter the name:\n");
scanf("%s",&u.name);
printf("enter the salary:\n");
scanf("%f",&u.salary);
printf("displaying\n name:%s\n",u.name);
printf("salary:%.1f",u.salary);
return 0:
}