#include<stdio.h>
int main(){
    int length;
    int width;
    float perimeter_of_rectangle;

    printf("Length=");
    scanf("%d",&length);
    printf("width=");
    scanf("%d",&width);

    printf("Perimeter of Rectangle=");
    perimeter_of_rectangle= 2*(length+width);
    printf("%f", perimeter_of_rectangle);
    return 0;
}
