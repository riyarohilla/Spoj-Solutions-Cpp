#include <bits/stdc++.h>
using namespace std;
int main() {
     float val=0;
     scanf("%f",&val);
     while(val)
     {
          float n=0;
          float i=1;
          
          for(i=1;n<val;++i)
               n+=(1/(i+1));
          
          printf("%.0f card(s)\n",i-1);
          scanf("%f",&val);
     }
     return 0;
}
