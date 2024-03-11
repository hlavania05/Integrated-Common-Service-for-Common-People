//--------------SIMPLE PROBLEMS----------------------

//-----------to print hello world-----------
#include<stdio.h>
int main(){
    printf("hello world.");
    return 0;
}


//------------My Biodata-------------
#include<stdio.h>
int main(){
    printf("I am Harshita Lavania. \nI am from Goverdhan Mathura. \nI am pursuing Btech with CS specialization in cloud computing.\n");
    printf("My father's name is Mr. Ajay Kumar Lavania. \nMy Mother's name is Mrs. Devesh Lavania. \n");
    printf("My Father is a Teacher. \nI have completed my 12th class from Ratan Lal Phool Katpri devi mathura.\n");
    printf("My hobbies are listening music, Travelling,");
    return 0;
}



//---------Data types and thier no. of bytes----------
#include<stdio.h>
int main(){
    printf("Data types and their corresponding no. of bytes....\n");
    printf("int : 2 and 4 bytes \nfloat : 4 bytes \ndouble : 8 bytes \nchar : 1 byte\n");
    return 0;
}



//----------HLL and LLL languages name-----------
#include<stdio.h>
int main(){
    printf("HIGH LEVEL LANGUAGES ARE:- \n");
    printf("Python \nC/C++ \nJava \nJava Script \n\n");
    printf("LOW LEVEL LANGUAGES ARE:- \n");
    printf("Machine Language \nAssembly Language");
    return 0;
}



//---------calculate total marks if you have marks of 3 subjects------------
#include<stdio.h>
int main(){
    int marks1, marks2, marks3;
    printf("Enter marks in subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks in subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks in subject 3: ");
    scanf("%d", &marks3);

    printf("Total Marks: ");
    printf("%d", marks1+marks2+marks3);
    return 0;
}




//-----------to calculate percentage----------
#include<stdio.h>
int main(){
    int marks1, marks2, marks3;
    printf("Enter marks in subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks in subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks in subject 3: ");
    scanf("%d", &marks3);    
    int max_marks = 300;
    int obtain_marks = marks1 + marks1 + marks3;
    float percentage_obtain = (float)(obtain_marks*100/max_marks);

    printf("Percentage you get:- ");
    printf("%.1f", percentage_obtain);
    return 0;
}




//-------to print maximum marks btw three marks--------------------
#include<stdio.h>
int main(){
    int marks1,marks2,marks3,lessMarks;
    marks1 = 67;
    marks2 = 97;
    marks3 = 83;
    lessMarks = (marks1 < marks2)?(marks1<marks3 ? marks1 : marks3):(marks2<marks3 ? marks2 : marks3);
    printf("%d",lessMarks);
    return 0;
}


//-----------find hr, minutes, second in given seconds----------------
#include<stdio.h>
int main(){
    int s,hr,min;
    printf("Enter time in seconds: ");
    scanf("%d",&s);
    hr = s/3600;
    s = s%3600;
    min = s/60;
    s = s%60;
    printf("Hours : %d\n",hr);
    printf("min : %d\n",min);
    printf("sec : %d\n",s);
    return 0;
}


//-----------area/perimeter of square-----------
#include<stdio.h>
int main(){
    float side;
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area of Square: ");
    printf("%.2f", side*side);
    printf("\nPerimeter of Square: ");
    printf("%.2f", side*4);
    return 0;
}




//-----------area/circumference of circle----------
#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle: ");
    printf("%.2f", radius*radius*3.14);
    printf("\nCirumference of Circle: ");
    printf("%.2f", 2*3.14*radius);
    return 0;
}




//----------volume of sphere/cuboid/cylinder---------
#include<stdio.h>
int main(){
    float R, side, r,h;
    printf("Enter the side of cuboid: ");
    scanf("%f", &side);
    printf("volume of cuboid: %.2f", side*side*side);

    printf("\nEnter the radius of sphere: ");
    scanf("%f", &R);
    printf("volume of sphere: %.2f", (4/3)*3.14*R*R*R );

    printf("\nEnter the radius and hight of cylinder: ");
    scanf("%f %f", &r,&h);
    printf("Volume of cylinder: %.2f", 3.14*r*r*h);
    return 0;
}





//-------------convert Rupees into paise-------------
#include<stdio.h>
int main(){
    int Rs;
    printf("Enter Rupees: ");
    scanf("%d",&Rs);
    printf("Rupees in paise: ");
    printf("%d",Rs*100);
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




//--------------calculate half of a, square of b and cude of c------------
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Half of a: %d", a/2);

    printf("\nEnter b: ");
    scanf("%d", &b);
    printf("square of b: %d", b*b);

    printf("\nEnter c: ");
    scanf("%d", &c);
    printf("Cube of c: %d", c*c*c);
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




//-----------simple intrest---------------
#include<stdio.h>
int main(){
    int p, r, t;
    printf("Enter p: ");
    scanf("%d", &p);
    printf("Enter r: ");
    scanf("%d", &r);
    printf("Enter t: ");
    scanf("%d", &t);
    printf("SIMPLE INTEREST........\n");
    printf("%.2f",(float)(p*r*t)/100);
    return 0;
}