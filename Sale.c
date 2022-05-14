#include "studycafe.h"

/*typedef struct{ //한결
    //할인 이벤트 관련 구조체
    char during[100];
    int saleRate; // 할인율
}Sale;
*/

void saleEventShow(){
}
int selectSaleNo(){
    int no;
    printf("\n==== 현재 할인 이벤트 ====\n");
    printf("\n<현재 할인 이벤트 상황>\n");
    saleEventShow();
    printf("1. 할인 이벤트 추가");
    printf("2. 할인 이벤트 수정");
    printf("0. menu로 돌아가기")

    scanf("%[^\n]d", &no);
    return no;
}
void addEvent();
void updateEvent();
