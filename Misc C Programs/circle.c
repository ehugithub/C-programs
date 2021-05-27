#include <stdio.h>
#include <math.h>


/*  to compile
 *  cc sq.c -lm 
 *
 *  to run:
 *  ./a.out
 *  or ./a.out > sq.out
 *  cat sq.out |awk {'print $2'}|sort -n|uniq -c|less 
 */

/*function definition*/
/* int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}
*/

/* int isPerfectSquare(int n)
{
  int i; 
  for (i=1; i*i <=n; i++) {
    // printf("i= %d", i);
    if ( ((n%i) == 0) && ((n/i) == i)) {
        // printf("found %d", n);
	return 1;
    }
  }
  return 0;
}
*/

int isPerfectSquare(unsigned long long int x)
{
 unsigned long long int left=1, right=x;

 while (left <=right)
 {
    unsigned long long int mid = (left + right)/2;
    if (mid*mid == x)
    {
	return 1;
    }

    if (mid*mid < x)
    {
       left = mid +1;
    }
    else
    {
	right=mid-1;
    }
  }
  return 0; 
}

int main()
{
 unsigned long long a,b,c,s, s1;

 for (a=2; a< 50000; a++)
   for (b=a+1; b<=50000; b++)
   {
	s=a*a+b*b+a*b*6;
	if (isPerfectSquare(s)) {
              s1=(sqrt((double)s)-a-b);
              if ( s1%2 == 0) 
              {
                c=s1/2;
		printf("c= %llu a=%llu b=%llu s=%llu\n", c,a,b,s);
              }
        }
   }
}	
