#include <stdio.h>
#include <stdlib.h>

typedef struct _def{
  double num1;
  double num2;
  double save; //결과 저장값
  int ass; //연산구분변수
}def;

void result(Data* dat)
{
  switch (dat->ass)
  {
      case 1;
       dat->save = dat->num1 + dat->num2;
       break;
      case 2;
       dat->save = dat->num1 - dat->num2;
       break;
      case 3;
        dat->save = dat->num1 * dat->num2;
        break;
      case 4;
        dat->save = dat->num1 / dat->num2;
        break;
    default:
      printf("정확한 번호를 선택하세요\n");
      break;
  }
}

int main(void)
{
  Data dat;
  
  printf("첫번째 숫자 입력 : \n");
  scanf_s("%.2f",&dat.num1);
  printf("두번째 숫자 입력 : \n");
  scanf_s("%.2f",&dat.num2);
  
  system("cls");
  printf("입력된 숫자:(%g , %g)\n",dat.num1,dat.num2);
  printf("더하기:1 빼기:2 곱하기:3 나누기:4\n");
  scanf_s("%d",&dat.ass);
  
  result(&dat);
  printf("결과: %g \n",dat.save);
  return 0;
}

  
  

      
      
  

