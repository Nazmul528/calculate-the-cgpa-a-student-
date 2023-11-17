#include<stdio.h>
int main()
{
    int i,n;
    float subject[7],sum=0, average ;
    printf("Enter the subject value :\n");
    for(i=0; i<7; i++) {
        scanf("%f",&subject[i]);
    }
    for(i=0; i<7; i++) {

        sum=sum+subject[i];
    }
    average =sum/7;
    printf("all subject average GPA=%.2f\n\n", average);
    for(i=0;i<7;i++){
    n=i+1;
    printf("%d subject GPA:%.2f\n",n, subject[i]);}

}