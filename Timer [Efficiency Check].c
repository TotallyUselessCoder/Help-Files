#include<stdio.h>
#include<time.h>

int main()
{
 int i;
 double total_time;
 clock_t start, end;

 start = clock();//time count starts

 srand(time(NULL));
 for (i = 0; i < 25000; i++)
 {
  //Your code here
 }
 end = clock();//time count stops
 total_time = ((double) (end - start)) / CLK_TCK;//calulate total time
 printf("\nTime taken to %f", total_time);
 return 0;
}
