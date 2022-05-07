#include "studycafe.h"

int updateReseveration(Reseveration *s){
    printf("\n");
    printf("이름: ");
    scanf(" %[^\n]s",s->name);

    printf("전화번호 뒷자리: ");
    scanf("%d",&s->phone_no);

    printf("예약 자리: ");
    scanf(" %[^\n]s",s->space);
  
    printf("예약 시간: ");
    scanf(" %[^\n]s",s->during);
  
    printf("==> 수정됨!\n");
    return 1;
}

int deleteReseveration(Reseveration *s){
    s->phone_no=-1;
    printf("==> 삭제됨!\n");
    return 0;
}
