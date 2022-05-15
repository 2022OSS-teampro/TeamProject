#include "localtime.h"
//시간 관련 함수

void userImpendingEnd(Reseveration *s){
    struct tm t = *localtime(&time(NULL)));
    if(calculatorTime(s->during, t) <= 1)
}