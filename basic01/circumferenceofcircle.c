# include <stdio.h>

int main() {

    int radius ;
    printf("enter the radius of circle :");
    scanf("%d", &radius);

    float area = 3.14*radius*radius;
    printf("area of circle is : %f\n", area);

    float circumference = 2*3.14*radius;
    printf("circumference of circle is : %f\n", circumference);

}      
