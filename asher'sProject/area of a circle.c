# include<stdio.h>

int main(){
  int radius;
  float area,perimeter;

  printf("Enter the radius of a circle\n");
  scanf("%d",&radius);

  area = 3.14*radius*radius;
  printf("The area of the circle is %f\n",area);

  perimeter = 2*3.14*radius;
  printf("THe perimeter of the circle is : %f",perimeter);

return 0;
}
