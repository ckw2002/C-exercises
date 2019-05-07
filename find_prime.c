#include<stdio.h>

int main(){
    int number;
    int count;
    int i;
    for (number=1;number<=100;number++){
        count=0;
        for (i=2;i<=number/2;i++){
            if (number%i == 0){
            count++;
            break;
            }
        }

    if (number!=0&&count==0){
    printf("%d\n",number);
    }

    }

return 0;
}
