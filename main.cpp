
#include <stdio.h>
 

int find_maximum(int x, int y) { 


return (x > y) ? x : y;


 }
 

int knapSack(int W, int wt[], int val[], int n)
{
   
    if (n == 0 || W == 0)
        return 0;
 

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
 
  
    else
        return find_maximum(
            val[n - 1]
                + knapSack(W - wt[n - 1],
                           wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
 

int main()
{
	
    int val[] = { 70, 100, 130 };
    int wt[] = { 15, 25, 35 };
    int W = 60;
    int n = sizeof(val) / sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}

