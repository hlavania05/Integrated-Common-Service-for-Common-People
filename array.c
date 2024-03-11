#include<stdio.h>
// int main(){
//     int id,pass;
//     printf("Enter your id: ");
//     scanf("%d",&id);
//     switch(id){
//         case 122758:
//         printf("enter ur id:");
//         scanf("%d",&pass);
        
//         switch(pass){
//             case 1224:
//             printf("correct password!");
//             break;
//             default:
//             printf("qwrong password!");
//         }
//         break;
//         default: printf("Wrong id!");
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
    int matrix[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",matrix[i][j]);
        }
       printf("\n");
    }
    for(int i=0; i<3; i++){
        int sum_c=0,sum_r=0;
        for(int j=0; j<3; j++){
            sum_c= sum_c+matrix[i][j];
            sum_r=sum_r+matrix[j][i];
            
        }
        printf("sum of column %d is %d\n",i,sum_c);
        printf("sum of row %d is %d\n",i,sum_r);
    }
    return 0;
}


#include <stdio.h>

// insertion sort

#include <stdio.h>
void insertion(int arr[], int n){
    int k,j,i;
    for(int i=1; i<n; i++){
        k = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>k){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[] = {4,81,56,3,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    printarr(arr,n);
    

    return 0;
}


#include <stdio.h>

// insertion sort
void insertion(int arr[], int n){
    int k,j,i;
    for(int i=1; i<n; i++){
        k = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>k){
            arr[j] = arr[j+1];
            j = j-1;
        }
        arr[j+1] = k;
    }
}
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[] = {4,81,56,3,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    printarr(arr,n);

    return 0;
}

