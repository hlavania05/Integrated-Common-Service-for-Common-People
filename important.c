//-------to print maximum marks btw three marks using conditional operator--------------------
#include<stdio.h>
int main(){
    int n1,n2,n3,lessMarks;
    n1 = 67;
    n2 = 97;
    n3 = 83;
    lessMarks = (n1 < n2)?(n1<n3 ? n1 : n3):(n2<n3 ? n2 : n3);
    printf("%d",lessMarks);
    return 0;
}


//---------------convert celcius into fehrenhite and vice versa----------
#include<stdio.h>
int main(){
    int c, f;
    printf("Enter temp. in celcius: ");
    scanf("%d", &c);
    printf("temperature in f is: %.2f", (float)((9/5)*c)+32 );

    printf("\n\nEnter temp. in fehrenhite: ");
    scanf("%d", &f);
    printf("temperature in c is: %.2f", (float)(f-32)*(5/9) );
    return 0;
}



//------------swap two number using third varible-----------
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("AFTER SWAPPING.......\n");
    int c = a;
    a = b;
    b = c;
    printf("a : %d", a);
    printf("\nb : %d", b);
    return 0;
}



//-----------swap two number without using third variable----------
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);   
    printf("AFTER SWAPPING.......\n");
    int A = a+b;
    b = A - b;
    a = A - a;

    printf("a : %d", a);
    printf("\nb : %d", b);
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





//------------Factorial of a number----------------------
#include<stdio.h>
int main(){
    int fact, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    printf("Factorial of a given number is: %d", fact);
    return 0;
}



//-------------fabonacci seires--------------
#include<stdio.h>
int main(){
    int a=0,b=1;
    int sum,n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("fabonaccci series....\n");
    printf("%d\n",a);
    for(int i=0; i<n-1; i++){
        sum = a+b;
        printf("%d\n",sum);
        a = b;
        b = sum;
        
    }
    return 0;
}




//------------ARMSTRONG NUMBER---------------
#include<stdio.h>
#include<math.h>

int main(){ 
    int n;
    scanf("%d",&n);
    int c=0;
    while (n>0){
        c++;
        n = n/10;
    }

    int sum = 0;
    while (n>0){
        int s = n%10;
        sum = sum+pow(s,c);
        n = n/10;
    }
    if (sum==n){
        printf("Armstrong!");
    }
    else{
        printf("Not Armstrong!");
    }
    return 0;
}




//---------palindrom number------------
#include<stdio.h>
#include<math.h>
int main(){
    int n=121;
    int num=n;
    int m=n;
    int c=0;
    while (n>0){
        n=n/10;
        c++;
    }
    c=c-1;
    int sum=0;
    while (num>0){
        sum=sum+((num%10)*pow(10,c));
        num=num/10;
        c--;
    }
    if (sum==m){
        printf("Palindrome number.");
    }
    else{
        printf("Not palindrom.");
    }
    
    return 0;
    
}




//-----------Perfect number------------------
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1; i<n; i++){
        if (n%i==0){
            sum = sum+i;
        }
    }
    if (sum==n){
        printf("Perfect number.");
    }
    else{
        printf("Not perfect number.");
    }
    return 0;
}




//--------------GCD of two given +ve integers--------------
#include<stdio.h>
int main(){
    int n,m;
    int num=0;
    printf("enter the numbers: ");
    scanf("%d %d",&n,&m);
    for(int i=2; i<=n; i++){
        if(n%i==0 && m%i==0){
            num=i;
        }
    }
    printf("greatest divisor of given numbers.....");
    printf("%d\n",num);
    return 0;
}


/*----------------------PATTERN-----------------------------------
 *
 **
 ***
 ****
 *****          
 */
#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c","*");
        }
    }printf("\n");
}

/*-----------------------------------------------------------------------
*****
****
***
**
* */
#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%s","*");
        }
        printf("\n");
    }
}

/*-----------------------------------------------------------------------
*****
 ****
  ***
   **
    * */
#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%s"," ");
        }
        for(int j=0; j<n-i; j++){
            printf("%s","*");
        }
        printf("\n");
    }
}

/*-----------------------------------------------------------------------
    * 
   ***
  *****
 *******
********* */
#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        
        for(int j=1; j<n-i; j++){
            printf("%s"," ");
        }
        for(int j=0; j<i; j++){
            printf("%s","*");
        }
        for(int j=0; j<=i; j++){
            printf("%s","*");
        }
         printf("\n");
    }
}

/*-------------------------------------------------------------------------
*******
 *****
  ***
   *  */
#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%s"," ");
        }
        for(int j=0; j<n-i; j++){
            printf("%s","*");
        }
        for(int j=1; j<n-i; j++){
            printf("%s","*");
        }
        printf("\n");
    }
}


/*--------------------------------------------------------------------------
1
22
333
4444
55555 */
#include<stdio.h>
void main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}

/*----------------------------------------------------------------------------
1
12
123
1234
12345
*/
#include<stdio.h>
void main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

 

//-------to print maximum marks btw three marks using conditional operator--------------------
#include<stdio.h>
int main(){
    int n1,n2,n3,max;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    printf("Enter n3: ");
    scanf("%d",&n3);
    max = (n1 > n2)?(n1>n3 ? n1 : n3):(n2>n3 ? n2 : n3);
    printf("%d",max);
    return 0;
}
//-------------fabonacci seires--------------
#include<stdio.h>
int main(){
    int a=0,b=1;
    int sum,n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("fabonaccci series....\n");
    printf("%d %d",a,b);
    for(int i=0; i<n-1; i++){
        sum = a+b;
        printf(" %d",sum);
        a = b;
        b = sum;
    }
    return 0;
}



