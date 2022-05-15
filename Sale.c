#include "studycafe.h"

/*typedef struct{ //한결
    //할인 이벤트 관련 구조체
    char during[100];
    int saleRate; // 할인율
    bool isSale = false;
}Sale;
*/

void saleEventShow(Sale s){
    if(s.isSale == 0){
        printf("\n현재 할인 이벤트 없음\n"ㅏ);
        return;
    }
    else{
    printf("이벤트 기간 : %s\n", s.during);
    printf("할인율 : %d %\n", &s.saleRate);
    }
};
int selectSaleNo(){
    int no;
    printf("\n==== 현재 할인 이벤트 ====\n");
    printf("\n<현재 할인 이벤트 상황>\n");
    saleEventShow();
    printf("1. 할인 이벤트 추가\n");
    printf("2. 할인 이벤트 수정\n");
    printf("0. menu로 돌아가기\n");

    scanf("%d", &no);
    return no;
}
void addEvent(Sale s){
    printf("할인 기간을 입력해주세요 > \n");
    scanf("%[^\n]s", s.during);
    printf("할인율 : ");
    scanf("%d", &s.saleRate);
    s.isSale = 1;
}
void updateEvent(Sale s){
    printf("할인 기간을 입력해주세요 > \n");
    scanf("%[^\n]s", s.during);
    printf("할인율 : ");
    scanf("%d", &s.saleRate);
    s.isSale = 1;
}
