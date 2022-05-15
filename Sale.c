#include "studycafe.h"

/*typedef struct{ //한결
    //할인 이벤트 관련 구조체
    char during[100];
    int saleRate; // 할인율
    bool isSale = false;
}Sale;
*/

void saleEventShow(Sale *s){
    if(s->isSale == 0){
        printf("\n***현재 할인 이벤트 없음***\n\n");
        return;
    }
    else{
    printf("이벤트 기간 : ~ %s\n", s->during);
    printf("할인율 : %d%%\n\n", s->saleRate);
    }
};
int selectSaleNo(Sale *s){
    int no;
    printf("\n==== 현재 할인 이벤트 ====\n");
    printf("\n<현재 할인 이벤트 상황>\n");
    saleEventShow(s);
    printf("1. 할인 이벤트 추가\n");
    printf("2. 할인 이벤트 수정\n");
    printf("0. menu로 돌아가기\n");

    printf("\n=> 메뉴 선택 : ");
    scanf("%d", &no);
    return no;
}
int addEvent(Sale *s){
    printf("할인 기간을 입력해주세요 : ");
    scanf("%[^\n]s", s->during);
    printf("할인율 : ");
    scanf("%d", &s->saleRate);
    return 1;
}
int updateEvent(Sale *s){
    printf("할인 기간을 입력해주세요 > \n");
    scanf("%[^\n]s", s->during);
    printf("할인율 : ");
    scanf("%d", &s->saleRate);
    return 1;
}
