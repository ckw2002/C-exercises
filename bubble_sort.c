#include<stdio.h>

int main(){

    int a[10];
    char str[10][20]={{"first"},
                    {"second"},
                    {"third"},
                    {"fourth"},
                    {"fifth"},
                    {"sixth"},
                    {"seventh"},
                    {"eighth"},
                    {"ninth"},
                    {"tenth"}};
    int i,j;
    for (i=0;i<10;i++){
        printf("%7s number : ",str[i]);
        scanf("%d",&a[i]);

    }
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            if(a[j]>a[j+1]){
            int tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
            }
        }
    }
    for (i=0;i<10;i++){
        printf("%d ",a[i]);
    }

return 0;
}
