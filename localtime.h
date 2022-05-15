#include "studycafe.h"
#include <time.h>

int calculatorTime(char duration[], struct tm currentTime);
int isOkayDuration(int gapOfTime);

//임박한 사용자 출력
void userImpendingEnd(Reseveration *s);
