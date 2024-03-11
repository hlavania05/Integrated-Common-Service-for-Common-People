//---------------------SWITCH CASE-----------------------------

//-----display digit by digit as a series of words eg. 756 should be displayed as “Seven Five Six”.------
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int num=n;
    int sum=0;
    int num1=n;
    int c = 0;
    while(n>0){
        c++;
        n=n/10;
    }
    c = c-1;
    while(num>0){
        sum = sum+((num%10)*pow(10,c));
        num = num/10;
        c--;
    }
    while(sum>0){
        int ch = sum%10;
        switch(ch){
            case 1:printf("one ");
            break;
            case 2:printf("two ");
            break;
            case 3:printf("three ");
            break;
            case 4:printf("four ");
            break;
            case 5:printf("five ");
            break;
            case 6:printf("six ");
            break;
            case 7:printf("seven ");
            break;
            case 8:printf("eight ");
            break;
            case 9:printf("nine ");
            break;
            default:printf("zero ");
            
        }
        sum= sum/10;
    }
    return 0;
    
}

 

//---------------Nested switch--------------------------------
#include<stdio.h>
int main(){
    int id,pass;
    printf("Enter your id: ");
    scanf("%d",&id);
    switch(id){
        case 122758:
        printf("enter ur id:");
        scanf("%d",&pass);
        
        switch(pass){
            case 1224:
            printf("correct password!");
            break;
            default:
            printf("qwrong password!");
        }
        break;
        default: printf("Wrong id!");
    }
    return 0;
}






