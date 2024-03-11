//----------------IF - ELSE PROBLEMS----------------

//----------check given no. is +ve/-ve or 0?--------------
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num<0){
        printf("given number is negetive.");
    }
    else if (num>0){
        printf("given number is positive.");
    }
    else{
        printf("given number is 0.");
    }
    return 0;
}



//-------------check even or odd---------------
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);    
    if (num%2 == 0){
        printf("Given number is EVEN.");
    }
    else{
        printf("Given number is ODD.");
    }
    return 0;
}




//-------------check max number btw three num. using if/else---------------
#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Enter num3: ");
    scanf("%d", &num3);
    if (num1>num2){
        if (num1>num3){
            printf("num1 is maximum.");
        }
        else{
            printf("num3 is maximum.");
        }
    }
    else{
        if (num2>num3){
            printf("num2 is maximum.");
        }
        else{
            printf("num3 is maximum.");
        }
    }
    
    return 0;
}



//----------------find maximum of 4 numbers-----------------
#include<stdio.h>
int main(){
    int a,b,c,d,mx=0;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("a is greater.");
    }
    else if(b>a && b>c && b>d){
        printf("b is greater.");
    }
    else if(c>a && c>b && c>d){
        printf("c is greater.");
    }
    else{
        printf("d is greater.");
    }
    return 0;

}


//------------check wheather a year is leap or not----------
#include<stdio.h>
int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (((year%4 == 0) && (year%100 != 0))|| (year%400 ==0) ){
        printf("Given year is leap year.");
    }
    else{
        printf("Given year is not leap year.");
    }
    return 0;
}





//------------check wheather a given chracter is number, vowel, consonent or special character-------
#include<stdio.h>
int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.\n", ch);
        if (((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')) || ((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))){
            printf("'%c' is vowel.", ch);
        }
        else{
            printf("'%c' is consonent.", ch);
        }
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}




//--------------perform airthmatic operation on two numbers----------------
#include<stdio.h>
int main(){

    int a,b;
    char ch;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter operator: ");
    fflush(stdin);
    scanf("%c", &ch);
    if (ch=='+'){
        printf("Addition is: %d", a+b);
    }
    else if (ch=='-'){
        printf("Subration is: %d", a-b);
    }
    else if (ch=='*'){
        printf("Multiplication is: %d", a*b);
    }
    else if (ch=='/'){
        printf("Devision is: %d",a/b);
    }
    else{
        printf("Go and check entered operator!!!!");
    }
    return 0;    
}




//-----------------display pass or fail----------------
#include<stdio.h>
int main(){
    int per;
    printf("Enter percentage: ");
    scanf("%d", &per);
    if (per>=48){
        printf("PASS");
    }
    else if (per<=48){
        printf("FAIL"); 
    }
    else{
        printf("check entered percentage!!");
    }
    return 0;
}




//-----------check devision of a student acc to marks--------
#include<stdio.h>
int main(){
    int per;
    printf("Enter percentage: ");
    scanf("%d", &per);
    if (per>=60){
        printf("First Devision PASS.");
    }
    else if (per>=48){
        printf("Second Devision PASS.");
    }
    else if (per>=33){
        printf("Third Devision PASS.");
    }
    else{
        printf("FAIL!!!");
    }
    return 0;
}





//---------------read DOB od student and display days of the month of her birth------------
#include<stdio.h>
int main(){
    int date, month, year;
    printf("Enter Date Of Birth of student: ");
    scanf("%d %d %d", &date, &month, &year);
    printf("No. of days of birth month: ");
    if (month==02){
        printf("28");
    }
    else if (month<=7){
        if (month%2 == 0){
            printf("30");
        }
        else{
            printf("31");
        }
    }
    else{
        if (month%2 == 0){
            printf("31");
        }
        else{
            printf("30");
        }
    }
    return 0;
}





//-------------check wheather a triangle can form or not using three given side-----------
#include<stdio.h>
int main(){
    int side1, side2, side3;
    printf("Enter side 1: ");
    scanf("%d", &side1);
    printf("Enter side 2: ");
    scanf("%d", &side2);
    printf("Enter side 3: ");
    scanf("%d", &side3);
    if ((side1+side2)>side3){
        printf("Triangle can form.");
    }
    else if ((side1+side3)>side2){
        printf("Triangle can form.");
    }
    else if ((side3+side2)>side1){
        printf("Triangle can form.");
    }
    else{
        printf("Triangle can not form");
    }
    return 0;
}





//------------solving quadratric equation---------------
#include<stdio.h>
#include <math.h>

int main(){
    int a, b, c, d, root1, root2;
    printf("Enter a,b,c of qadratuc equation:  ");
    scanf("%d %d %d", &a, &b, &c);

    d = sqrt((b*b) - (4*a*c));

    if (d>0){
        root1 = (-b + d)/(2*a);
        root2 = (-b - d)/(2*a);
        printf("Roots of given quadratic eq. are %d and %d",root1,root2);
    }
    else if (d==0){
        root1 = -b/(2*a);
        printf("Roots of given quadratic eq will be same i.e %d", root1);
    }
    else{
        printf("Roots of Given quradratic eq. is imaginary number.");
    }
    return 0;
}