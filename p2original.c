#include<stdio.h>
void input_line(float *x1, float *y1, float *x2, float *y2,float *x3, float *y3)
{
  printf("Enter three coordinates ");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if(area>0)
   return 1;
  return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
    if(is_triangle)
      printf("Three lines with coordinates %f,%f  %f,%f  %f,%f form a triangle\n",x1,y1,x2,y2,x3,y3);
  else
    printf("Three lines with coordinates %f,%f  %f,%f  %f,%f  do not form a triangle\n",x1,y1,x2,y2,x3,y3);
}
int main()
{
   float x1,x2,y1,y2,x3,y3;
  int t;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  t=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,t);
  return 0;
}