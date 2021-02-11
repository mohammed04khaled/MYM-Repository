#include <iostream>
#include "functionMYM.h"
using namespace std;
int KnapSack(int w, int wt[], int val[], int n)
{
    if(n== 0 || w == 0) {
        return 0;
        
    }
    
if(wt[n-1] > w)
return KnapSack(w, wt, val, n-1);
else
return max(val[n-1] + KnapSack(w-wt[n-1], wt, val, n-1), KnapSack(w, wt, val, n-1));
}
