#include "studycafe.h"

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
    printf("\n");
    printf("이름: ");
    scanf(" %[^\n]s",s->name);

    printf("전화번호 뒷자리: ");
    scanf("%d",&s->phone_no);

    printf("예약 자리: ");
    scanf(" %[^\n]s",s->space);
  

    printf("예약 기간: ");
    scanf(" %[^\n]s",s->during);
  
    printf("==> 추가됨!\n");
    return 1;
};

void readReseveration(Reseveration s){
    printf("%s %d %s %s", s.name, s.phone_no, s.space, s.during);
};

int updateReseveration(Reseveration *s){
    printf("\n");
    printf("이름: ");
    scanf(" %[^\n]s",s->name);

    printf("전화번호 뒷자리: ");
    scanf("%d",&s->phone_no);

    printf("예약 자리: ");
    scanf(" %[^\n]s",s->space);
  
    printf("예약 기간: ");
    scanf(" %[^\n]s",s->during);
  
    printf("==> 수정됨!\n");
    return 1;
}

int deleteReseveration(Reseveration *s){
    s->phone_no=-1;
    printf("==> 삭제됨!\n");
    return 0;
}



int selectMenu(){
    int menu;
    printf("=== 스터디 카페 예약 ===\n\n");
    printf("1. 예약 추가\n");
    printf("2. 에약 현황 보기\n");
    printf("3. 예약 정보 수정\n");
    printf("4. 예약 삭제\n");

    printf("=> 선택할 메뉴? ");
    scanf("%d", &menu);
    return menu;
}

