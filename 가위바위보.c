#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  int computer;
  int user;
  int result[3]={0,0,0}; //[0]지는경우,[1]비기는경우,[2]이기는경우
  int cnt=0;
  
 
  
  whlie(1)
  {
    srand(time(NULL));
    computer=rand()%3+1; //1~3까지 난수생성.
    
    printf("***가위바위보게임***\n");
    printf("1.가위 2.바위 3.보 0.종료\n");
    printf("숫자를 입력해주세요.\n\n");
    scanf("%d",&user);
    
    if(user>0&&user<4)
    {
      cnt++;
      printf("컴퓨터는 %s를 냈습니다\n",(computer==1 ? "가위" : computer==2 ? "바위" : "보"));
      printf("유저는 %s를 냈습니다\n",(user==1 ? "가위" : user==2 ? "바위" : "보"));
      
      if(computer==user)
      {
        printf("무승부입니다\n");
        result[1]++;
      }
      else if(
        (computer==1 && user==3)||
        (computer==2 && user==1)||
        (computer==3 && user==2))
      {
        printf("패배했습니다\n");
        result[0]++;
      }
      else
      {
        printf("승리했습니다\n");
      result[2]++;
      }
     
    }
    else
    {
      if (user==0)
      {
        printf("%d전 %d승 %d무 %d패 입니다.\n" ,cnt,result[2],result[1],result[0]);
        printf("게임을 종료합니다.\n");
        
        break;
      }
      printf("1,2,3,0중에서 입력해주세요\n");
    }
    
  }
  return 0;
}
        
      
        
  
  


