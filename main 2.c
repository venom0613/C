#include <stdio.h>

int main(void){
//
//    int n, i , j;
//    scanf("%d", &n);
//    for(i=1;i<=9;i++){
//        printf("%d %d = %d\n", n, i, n*i);
//
//    }
//
//
//    return 0;
//
//    int i,j, cnt=0;
//
//    for(i=1; i<3; i++){
//        for (j=0; j<i; j++) {
//            cnt++;
//            printf("%3d",cnt);
//        }
//        printf("\n");
//  }
    
//    int i,j,k;
//
//    for(i=1; i<=100; i++){
//        for (j=1; j<=100; j++) {
//            for(k=1;k<=100;k++){
//                if((i*i+j*j)==(k*k)){
//                    printf("%3d %3d %3d\n",i,j,k);
//                }
//            }
//
//        }
//
//    }
//    return 0;
//}

//    int i,j;
//
//    for(i=1; i<=6; i++){//i=1
//        for (j=1; j<=6; j++) {
//                if(i<=j && (i+j)== 6){
//                    printf(" (%1d %1d)\n",i,j);
//            }
//
//        }
//
//    }
//    return 0;
//}



    int x=100,y=1;
    
    for(;;){
        x+=x*0.3;
        if(x>=1000)break;
        y++;
    }
    printf("%d year=%d\n", x ,y );
    return 0;
}
