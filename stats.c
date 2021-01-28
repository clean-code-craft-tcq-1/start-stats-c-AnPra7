#include "stats.h"

//defining the structure
struct Stats{
    float average;
    float min;
    float max;
};

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
    for (i=0; i<setlength; i++)
   {
   if (numberset[i]>s.max)
   {
        s.max=numberset[i];
   }
   }
    
     //finding minimum
    for (i=0; i<setlength; i++)
   {
   if (numberset[i]<s.min)
   {
        s.min=numberset[i];
   }
   }
    
    
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
void main()
{
    return 0;
    
}
