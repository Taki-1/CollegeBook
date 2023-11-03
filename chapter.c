#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// Function Declaration 

int twoDigitAddition(int n1,int n2);
int threeIntegerPosistiveNumberAddition(int n1,int n2, int n3);
float threeIntegerPositiveNumberAverage(int n1, int n2, int n3);
float circleArea(float r);
float triangleArea(float b, float h);
float centigradeToFahrenheit(float tc);
float fahrenheitToCentigrade(float tf);
char maxNumInThree(int a, int b, int c);
int minNumInThree(int a, int b, int c);
int oneToNAddition(int n);
int oneToHundredAddition();
int oneToNEvenAddition(int n);
int oneToNOddAddition(int n);

int main(){
    system("cls");
    int option;
    printf("############## Welcome in one of the most stupid project!! ##############\nChose your option:\n");
    printf("1/Two Digit Addition\n2/Three Integer Posistive Numbers Addition\n3/Three Integer Positive Numbers Average\n4/Circle Area\n5/Triangle Area\n6/Centigrade To Fahrenheit\n7/Fahrenheit To Centigrade\n8/Max Num In Three\n9/Min Num In Three\n10/One To N Addition\n11/One To Hundred Addition\n12/One To N Even Addition\n13/One To N OddAddition\n14/Exit\n$:");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        system("cls");
        printf("Two Number Addition");
        printf("\nPlease Enter The Value of a & b(Space Between): ");
        int a0 , b0;
        scanf("%d %d", &a0, &b0);
        printf("%s %d", "Addition: ", twoDigitAddition(a0, b0));
        break;

    case 2:
        system("cls");
        printf("Three Positive Integer Numbers Addition");
        printf("\nPlease Enter The Value of a, b & c(Space Between): ");
        int a1,b1,c1;
        scanf("%d %d %d", &a1, &b1, &c1);
        printf("%s %d", "Addition: ", threeIntegerPosistiveNumberAddition(a1, b1, c1));
        break;

    case 3:
        system("cls");
        printf("Three Integer Positive Number Average");
        printf("\nPlease Enter The Value of a, b & c(Space Between): ");
        int a2 , b2, c2;
        scanf("%d %d %d", &a2, &b2, &c2);
        printf("%s %f", "Average: ", threeIntegerPositiveNumberAverage(a2, b2, c2));
        break;

    case 4:
        system("cls");
        printf("Circle Area");
        printf("\nPlease Enter The Value r: ");
        float r1;
        scanf("%f", &r1);
        printf("%s %f", "Circle Area: ", circleArea(r1));
        break;

    case 5:
        system("cls");
        printf("Triangle Area");
        printf("\nPlease Enter The Value of b & h(Space Between): ");
        float b3 , h1;
        scanf("%f %f", &b3, &h1);
        printf("%s %f", "Triangle Area: ", triangleArea(b3,h1));
        break;

    case 6:
        system("cls");
        printf("CentigradeToFahrenheit");
        printf("\nPlease Enter Centigrade Temperature: ");
        float tc1;
        scanf("%f", &tc1);
        printf("%s %f", "Temperature(Fahrenheit): ", centigradeToFahrenheit(tc1));
        break;

    case 7:
        system("cls");
        printf("Fahrenheit To Centigrade");
        printf("\nPlease Enter Fahrenheit Temperature: ");
        float tf1;
        scanf("%f", &tf1);
        printf("%s %f", "Temperature(Fahrenheit): ", fahrenheitToCentigrade(tf1));
        break;

    case 8:
        system("cls");
        printf("Max Num In Three");
        printf("\nPlease Enter The Value of a, b & c(Space Between): ");
        int ax,bx,cx;
        scanf("%d %d %d", &ax, &bx ,&cx);
        char returnData = maxNumInThree(ax,bx,cx);
        if(returnData=='a'){
            printf("%s %d %s", "Max in three is A(",ax,")");
        }
        else if(returnData=='b'){
            printf("%s %d %s", "Max in three is B(",bx,")");
        }
        else{
            printf("%s %d %s", "Max in three is C(",cx,")");
        }
        break;

    case 9:
        system("cls");
        printf("Min Num In Three");
        printf("\nPlease Enter The Value of a, b & c(Space Between): ");
        int at,bt,ct;
        scanf("%d %d %d", &at, &bt ,&ct);
        char gettenData = minNumInThree(at,bt,ct);
        if(gettenData=='a'){
            printf("%s %d %s", "Min in three is A(",at,")");
        }
        else if(gettenData=='b'){
            printf("%s %d %s", "Min in three is B(",bt,")");
        }
        else{
            printf("%s %d %s", "Min in three is B(",ct,")");
        }
        break;

    case 10:
        system("cls");
        printf("One To N Numbers Addition");
        printf("\nPlease Enter The Value N: ");
        int n1;
        scanf("%d", &n1);
        printf("%s %d", "Addition: ", oneToNAddition(n1));
        break;

    case 11:
        system("cls");
        printf("One To 100 Addition\n");
        printf("%s %d", "Addition: ", oneToHundredAddition());
        break;
    
    case 12:
        system("cls");
        printf("One To N Even Addition");
        printf("\nPlease Enter The Value N: ");
        int n2;
        scanf("%d", &n2);
        printf("%s %d", "Addition: ", oneToNEvenAddition(n2));
        break;
    
    case 13:
        system("cls");
        printf("One To N Odd Addition");
        printf("\nPlease Enter The Value N: ");
        int n3;
        scanf("%d", &n3);
        printf("%s %d", "Addition: ", oneToNOddAddition(n3));
        break;

    case 14:
        system("exit");
        break;

    default:
        break;
    }
    return 0;
}

// Function Creation

int twoDigitAddition(int n1,int n2){
    return (n1+n2);
}
int threeIntegerPosistiveNumberAddition(int n1,int n2, int n3){
    int sum = n1+n2+n3;
    return sum;
}
float threeIntegerPositiveNumberAverage(int n1, int n2, int n3){
    float avg = (n1+n2+n3)/3;
    return avg;
}
float circleArea(float r){
    float pi = 3.1415;
    float area = pi*pow(r,2);
    return area;
}
float triangleArea(float b, float h){
    float area = 0.5*b*h;
    return area;
}
float centigradeToFahrenheit(float tc){
    float tf = 9*tc/5+32;
    return tf;
}
float fahrenheitToCentigrade(float tf){
    float tc = 5*(tf-32)/9;
    return tc;
}
char maxNumInThree(int a, int b, int c){
    if(a>b && a>c){
        return 'a';
    }
    else if (b>c){
        return 'b';
    }
    else{
        return 'c';
    }
}
int minNumInThree(int a, int b, int c){
    if(a<b && a<c){
        return 'a';
    }
    else if (b<c){
        return 'b';
    }
    else{
        return 'c';
    }
}
int oneToNAddition(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}
int oneToHundredAddition(){
    int sum = 0;
    for(int i=1;i<=100;i++){
        sum = sum+i;
    }
    return sum;
}
int oneToNEvenAddition(int n){
    int sum = 0;
    for (int i=1;i<=n;i++){
        if(i%2==0){
            sum = sum+i;
        }
    }
    return sum;
}
int oneToNOddAddition(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum = sum+i;
        }
    }
    return sum;
}