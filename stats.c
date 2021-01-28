#include "stats.h"



struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    //finding avaerage of the given test set
    int i=0,sum=0;
    for(i=0;i<setlength;i++)
    {
        sum+=numberset[i];
    }
    s.average = sum/setlength;
    
    //finding maximum
   /* for (i=0; i<setlength; i++)
   {
   if (numberset[i]>s.max)
   {
        s.max=numberset[i];
   }
   }
    
     //finding minimum
int c, index = 0;
 
  for (c = 1; c < setlength; c++)
    if (numberset[c] < min)
      index = c;*/
    s.max=s.min=numberset[0];
    for(i=1; i<setlength; i++)
    {
         if(s.min>numberset[i])
		  s.min=numberset[i];   
		   if(s.max<numberset[i])
		    s.max=numberset[i];       
    }
    
    return s;
    
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

