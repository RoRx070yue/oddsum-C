#include <stdio.h>
#include <stdlib.h>

int main()
{
int case, sum, odd1, odd2, loops;
 scanf("%d", &t);
 for(int i=1;i<=case;i++){
  scanf("%d%d", &odd1, &odd2);
  printf("Case %d: OddSum[%d..%d]", i, odd1, odd2);
  a|=1;
  for(sum=loops=0;odd1<=odd2;odd1+=2,loops++){
   //printf("[loops %d:]",loops);
   if(loops==0)printf("=");
   else printf("+");
   printf("%d", odd1);
   sum+=odd1;
  }
  if(loops==1) printf("\n");
  else printf("=%d\n", sum);
 }
}
