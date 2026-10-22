#ifndef TRIATHLON_H
#define TRIATHLON_H

void StartTriathlonTimer(void);
void SuspendTriathlonTimerForBattle(void);
void ResumeTriathlonTimer(void);
void StopTriathlonTimer(void);
bool8 IsTriathlonTimerDisplayActive(void);
void CreateTriathlonTimerDisplay(void);
void AbortTriathlon(void);

#endif