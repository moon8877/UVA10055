#include <stdlib.h>
#include <stdio.h>
int main(){
  long long int a,b;
  while(scanf("%lld %lld",&a,&b)!=EOF)
  {
     if(b-a<0)
     {
        printf("%lld\n",(b-a)*(-1));
     }
     else
     {
	    printf("%lld\n",b-a);
	 }
  
  
  return 0;
  }
}



