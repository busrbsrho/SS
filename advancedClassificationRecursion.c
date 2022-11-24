

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




int nLen(int num)
{
    if (num==0)
    {
        return 0;
    }
    return 1+nLen(num/10);
}
int armHelp(int num,int len)
{
    if(num==0)
    {
        return 0;
    }
    return pow(num%10,len)+armHelp(num/10,len);
}
int isArmstrong(int num)
{
    int len = nLen(num);
    if(num==armHelp(num,len))
    {
        return 1;
    }
    return 0;
}
   


