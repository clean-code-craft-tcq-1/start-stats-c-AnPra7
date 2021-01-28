#include "checkandalert.h"
#include "stats.h"
void emailAlerter()
{
  emailAlertCallCount = 1;
  //return (emailAlertCallCount==1);
}
void ledAlerter()
{
  ledAlertCallCount = 1;
  //return (ledAlertCallCount==1);
}
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  
  if(computedStats.max>maxThreshold)
  {
    emailAlerter(&emailAlertCallCount);
    ledAlerter(&ledAlertCallCount);
  }
}
