#include <stdio.h>
#include <math.h>

int isArmstrong (int num){
    int counter = 0;
    int tempNum = num;
    while (tempNum != 0)
    {
        counter ++;
        tempNum/=10;
    }
    int sum = 0;
    int numLen = counter;
    int numCP = num;
    
    while (numLen != 0)
    {
        sum+= pow((numCP%10),counter);
        numCP /= 10;
        
        numLen--;
    }
    if (sum == num){
        return 1;
    }
    else {return 0;}

}


int isPalindrome(int num)
{

    int plinum=0;
    int temp=num;
    while (temp!=0)
    {
        plinum=(plinum*10)+temp%10;
        temp/=10;

    }
    if(num==plinum)
    {
        return 1;
    }
    return 0;
    
    

}

