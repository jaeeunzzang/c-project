#include <stdio.h>

double add(double num1, double num2)
{
  return num1+num2;
}

double sub(double num1, double num2)
{
  return num1-num2;
}

double mul(double num1, double num2)
{
  return num1*num2;
}

double div(double num1, double num2)
{
  return num1/num2;
}

int main(void)
{
  double num1,num2;
  
  printf("첫번째숫자: ");
  scanf("%.2f",&num1);
  printf("두번째숫자: ");
  scanf("%.2f",&num2);
  
  printf("%.2f + %.2f = %.2f\n",num1,num2,add(num1,num2));
  printf("%.2f - %.2f = %.2f\n",num1,num2,sub(num1,num2));
  printf("%.2f * %.2f = %.2f\n",num1,num2,mul(num1,num2));
  printf("%.2f / %.2f = %.2f\n",num1,num2,div(num1,num2));
  return 0;
  
}

/*
https://m.blog.naver.com/skyvvv624/220747391967
*/
