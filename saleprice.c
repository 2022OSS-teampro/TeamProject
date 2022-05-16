#include "studycafe.h"

/*typedef struct{ //한결
    //할인 이벤트 관련 구조체
    char during[100];
    int saleRate; // 할인율
    int isSale
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

void showPrice(Price *price, Sale *sale){
    if(price->isDeafult == 1){
        printf("\n\t ***현재 가격 설정없음***\t\n\n");
        int isOkay = updatePrice(price);
        if(isOkay == 1)
            printf("=>가격 업데이트 완료!\n");
        else{
            return;
        }
    }
    else{
        if(sale->isSale == 1){
            if(calculatorTime(sale->during) > 0){
            for(int i = 0 ; i < 4;  i++){
                price->price[i] = price->price[i] * ( 100 - sale->saleRate) / 100.0;
                }
            }
            printf("\n현재 할인 이벤트 진행중\n\n");
            printf("<<가격>>\n");
            printf("시간당 가격 : %d 원\n", price->price[0]);
            printf("하루당 가격 : %d 원\n", price->price[1]);
            printf("주당 가격 : %d 원\n", price->price[2]);
            printf("월당 가격 : %d 원\n", price->price[3]);
        }
        else{
            printf("<<가격>>\n");
            printf("시간당 가격 : %d 원\n", price->price[0]);
            printf("하루당 가격 : %d 원\n", price->price[1]);
            printf("주당 가격 : %d 원\n", price->price[2]);
            printf("월당 가격 : %d 원\n", price->price[3]);
        }
    }
}

int updatePrice(Price *price){
    int isOkay;
    printf("가격 설정하시겠습니까? (y : 1)");
    scanf("%d", &isOkay);

    if(isOkay == 1){
        printf("**한화기준**\n\n");
        printf("시간당 가격 : ");
        scanf("%d", &price->price[0]);
        printf("하루당 가격 : ");
        scanf("%d", &price->price[1]);
        printf("주당 가격 : ");
        scanf("%d", &price->price[2]);
        printf("월당 가격 : ");
        scanf("%d", &price->price[3]);
        getchar();
        price->isDeafult = 0;
        return 1;
    }
    else
        return 0;
}