#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle triangle;
triangle input_triangle()
{
  triangle t;b
  printf("enter the base and altitude of triangle you want to find area of\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void find_area(triangle*t)
{
  t->area = ((t->base)*(t->altitude))/2;
}
void output(triangle t)
{
  printf("%f is area of given triangle with base %f=%f",t.area,t.base,t.altitude);
}
int main()
{
  triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
  }