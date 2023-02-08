#include<stdio.h>
#include<conio.h>
int main()
{
int n;
  printf("entr the age:");
  scanf("%d",&n);
  if(n<0)
    printf("inivalid input")
    else if(n>18)
    {
      printf("eligible to vote");
    }
  else
    printf("not eligible to vote");
  getch()
    return 0;
}
