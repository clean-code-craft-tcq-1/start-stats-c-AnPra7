#include "checkandalert.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(s.max>maxThreshold)
  {
    emailAlertCallCount = 1;
    ledAlertCallCount = 1;
  }
}
