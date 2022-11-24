

#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int POW(int base, int power)
{
    if(power == 0)
    {
        return 1;
    }
    else
    {
        return base * POW(base, power - 1);
    }
}

int recReverse(int num, int sum) {
	return (num == 0 ? sum:recReverse((num / 10),((sum*10) + (num%10))));
}

int isPalindrome(int num) {
    	return (num == recReverse(num,0));
}




int sumArm(int Number, int len)
{
  int R, Sum = 0;
  
  if (Number > 0)
   {
     R = Number %10;
     Sum = Sum + POW(R, len);
     sumArm (Number /10, len);
     return Sum;
   }
   else
     return 0;
}

int lenArm(int num)
{
int temp=num;
int count=0;
while(temp!=0)
{
    temp=temp/10;
    count++;
}
return count;
}
int isArmstrong(int num)
{
    int len=lenArm(num);
    if(num==sumArm(num,len))
    {
        return 1;
    }
    return 0;
}


