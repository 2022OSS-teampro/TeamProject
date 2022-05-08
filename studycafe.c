#include "stduycafe.h"

/*
typedef struct{
    // 1. 이름 2. 전화번호 뒷자리 3. 예약 자리 4. 예약 기간
    char name[20];
    int phone_no;
    char space[5]; // 예약자리 A-01 처럼
    char during[10]; // 05/12 까지 처럼 입력 
}Reseveration;
*/

int addReseveration(Reseveration *s){
    printf("이름? ");
    scanf("%[^\n]s", s->name);
    printf("전화번호 마지막 4자리: ");
    scanf("%[^\n]d", &s->phone_no);
    printf("자리 : ");
    scanf("%[^\n]s", s->space);
    printf("예약기간 : ");
    scanf("%[^\n]s", s->during);
    return 1;
};

void readReseveration(Reseveration s){
    
};