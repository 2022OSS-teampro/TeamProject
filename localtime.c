#include "studycafe.h"
//시간 관련 함수
int calculatorTime(char duration[], struct tm currentTime);
int isOkayDuration(int gapOfTime);

//임박한 사용자 출력
void userImpendingEnd(Reseveration *s);