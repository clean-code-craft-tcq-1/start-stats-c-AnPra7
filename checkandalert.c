#include "checkandalert.h"
#include "stats.h"
bool emailAlerter()
{
  emailAlertCallCount = 1;
  return (emailAlertCallCount==1);
}
bool ledAlerter()
{
  ledAlertCallCount = 1;
  return (ledAlertCallCount==1);
}
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  
  if(computedStats.max>maxThreshold)
  {
    emailAlerter();
    ledAlerter();
  }
}
