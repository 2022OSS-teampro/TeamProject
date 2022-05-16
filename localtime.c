#include "studycafe.h"
//시간 관련 함수
int calculatorTime(char duration[]){
    time_t t = time(NULL);
    struct tm currentTime = *localtime(&t);
    
    char *date[2] = {NULL, };
    int i = 0;
    char temp[10];
    strcpy(temp, duration);
    char *ptr = strtok(temp, ".");

    while(ptr != NULL){
        date[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }

    int reservation_month = atoi(date[0]);
    int reservation_day = atoi(date[1]);

    int gapOfTime = (reservation_month - currentTime.tm_mon - 1)*30 + reservation_day - currentTime.tm_mday;
    //기간 입력 형태가 5.16과 같음 즉, .을 기준으로 앞은 월 / 뒤는 일
    return gapOfTime;
}
int isOkayDuration(int gapOfTime);

//임박한 사용자 출력
void userImpendingEnd(Reseveration *s, int count){
    
    printf("No. 이름 | 전화번호 | 자리 | 예약 기간\n");
    printf("=====================================\n");
    
    for(int i= 0 ; i < count ; i++){
        if(calculatorTime(s[i].during) < 0){
            printf("\n<<사용기간 종료된 이용자>>\n");
            readReseveration(&s[i]);
            continue;
        }
        else if(calculatorTime(s[i].during)< 3){
            printf("\n<<사용기간 3일 미만 이용자>>\n");
            readReseveration(&s[i]);
            continue;
        }
    }
}