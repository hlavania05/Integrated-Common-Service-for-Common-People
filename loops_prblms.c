//-------------LOOP PROBLEMS------------------------------

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






//-------------find the number whose factorial is given---------
#include<stdio.h>
int main(){
    int fact,n;
    printf("Enter Factorial: ");
    scanf("%d",&fact);
    n = 1;
    while(fact>1){
        fact = fact/n;
        n++;
    }
    printf("The number is %d",n-1);
    return 0;
}



//------------ to print 1 to 5----------
#include<stdio.h>
int main(){
    int i = 1;
    while(i <= 5){
        printf("%d\n",i);
        i++;
    }
    return 0;
}



//-------------sum of digits of a given numbers until sumexceed 20------------------
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d",&a);
    int sum=0;
    int c=0;
    for(a;sum<20;a/10){
        c=a;
        sum=sum+(a%10);
        
    }
    printf("%d",sum-(c%10)); 
    return 0;
}



//------------ARMSTRONG NUMBER---------------
#include<stdio.h>
#include<math.h>

int main(){ 
    int n;
    scanf("%d",&n);                                  // n =  345/10= 34
    int c=0;                                         // n = 34/10 = 3
        while (n>0){                                 
        c++;                                     
        n = n/10;
    }

    int sum = 0;
    while (n>0){
        int s = n%10;                                // 345 % 10 = 5v   0+5*3*3
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



//---------------magic number--------------------------
#include<stdio.h>
#include<math.h>
int main(){
    int n=1458;
    int m=n;
    int c=0;
    int n1=n;
     
    //-----sum of n-------
    int sum1 = 0;
    while(m>0){
        sum1 = sum1+(m%10);
        m = m/10;
    }
    
    //-------reverse of sum of n---------
    int x=sum1;
    while (x>0){
        x=x/10;
        c++;
    }
    c=c-1;
    int num=sum1;
    int sum=0;
    while (num>0){
        sum=sum+((num%10)*pow(10,c));
        num=num/10;
        c--;
    }
    //-----------------------------------------
    
    //--------checking magic number-----------
    if ((sum1*sum)==n1){
        printf("magic number:");
    }
    else{
        printf("not magic number.");
    }
    
    return 0;
    
}




//-----------display all prime numbers in a givcen range-----------------
#include<stdio.h>
int main(){
    int n=10;
    int c=0;
    for(int i=1; i<=n; i++){
        for(int x=1; x<=i; x++){
            if (i%x==0){
                c=c+1;
            }
            else{
                continue;
            }
        }
        if(c==2){
            printf("%d",i);
        }
        else{
            continue;
        }
    }
    return 0;
}



//------------------find factors of given postive number-----------
#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}




//----------------smallest divisior--------------
#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=2; i<=n; i++){
        if(n%i==0){
            printf("Smallest divisor of given number.....");
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}


//--------------find even and odd in a given range----------
#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        if(i%2==0){
            printf("even: %d\n",i);
        }
        else{
            printf("odd: %d\n",i);
        }
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


//----------------sum of numbers divisible by 7 btw 100 and 200------------
#include<stdio.h>
int main(){
    int sum=0;
    printf("sum of number divisible by 7 btw 100 and 200\n");
    for(int i=100; i<=200; i++){
        if(i%7==0){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
}


//-------------sum of even and sum of odd numbers taken by user---------------
#include<stdio.h>
int main(){
    int n,x,even=0,odd=0;
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Enter number: ");
        scanf("%d",&x);
        if (x%2==0){
            even = even+x;
        }
        else{
            odd = odd+x;
        }
    }
    printf("even sum is %d\n",even);
    printf("odd sum is %d",odd);
    return 0;
}


//--------- to print table of a number--------
int main(){
    int n = 1;
    int m;
    printf("enter number: ");
    scanf("%d",&m);
    printf("table of given number is.......\n");
    while(n<=10){
        int n1 = m*n;
        printf("%d\n",n1);
        n++;
    }
    return 0;
}




//---------------reverse of a given number-----------
#include<stdio.h>
#include<math.h>
int main(){
    int n,c=0,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n;
    while(m>0){
        m = m/10;
        c++;
    }
    c=c-1;
    while(n>0){
        sum = sum+((n%10)*pow(10,c));
        n = n/10;
    }
    printf("Reverse of a number is...%d",sum);
    return 0;
}


//----------HCF and LCM of number-------------
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the numbers: ");
    scanf("%d %d",&n,&m);
    int HCF = 0;
    int LCM = 0; 
    for(int i=1; i<=n; i++){
        if (n%i==0 && m%i==0){
            HCF = i;
        }
    }
    printf("HCF : %d\n",HCF);
    for(int i=1; i<=(n*m); i++){
        if (i%m==0 && i%n==0){
            LCM = i;
            break;
        }
    }
    printf("LCM : %d",LCM);
    return 0;
}


//-----------check a digit is present in given number if yes then find its occurence---------
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter digit to check: ");
    scanf("%d",&m);
    int num= n;
    int num1=n;
    while(n>0){
        if(m==(n%10)){
            printf("YES, %d present in %d",m,n);
            break;
        }
        n = n/10;
    }
    int c = 0;
    while(num>0){
        if(m==(num%10)){
            c++;
        }
        num = num/10;
    }
    printf("\nFrequency of %d in %d is %d",m,num1,c);
    return 0;
}


//--------------check position of digit in num-----------------------
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter digit to check: ");
    scanf("%d",&m);
    int num1 = n;
    int num2 = n;
    
    //--------checking digit is present in number or not------------
    while(n>0){
        if(m==(n%10)){
            printf("YES, %d present in %d\n",m,num2);
            break;
        }
        n = n/10;
    }
    //-------length of number----------
    int num =n;
    int l = 0;
    while(num>0){
        l++;
        num = num/10;
    }
    
    //--------finding position----------
    printf("Position of the digit.....\n");
    while(num1>0){
        if(m==(num1%10)){
            printf("%d\n",l);
        }
        num1 = num1/10;
        l = l-1;
    }
    
    return 0;
}
