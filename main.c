#include "studycafe.h"

/* 메뉴 번호보기위한 주석 --> 추후에 삭제할 것임
int selectMenu(){
    printf("\n=== 스터디 카페 예약 ===\n\n");
    printf("1. 예약 추가\n");
    printf("2. 에약 현황 보기\n");
    printf("3. 예약 정보 수정\n");
    printf("4. 예약 삭제\n");
    printf("5. 파일 저장\n");
    printf("6. 파일 불러오기\n");
    printf("7. 예약자 이름 검색");
    printf("8. 할인 이벤트\n");
    printf("9. 가격 확인하기\n\n");
    printf("10. 종료 임박한 사용자 출력");

    printf("=> 선택할 메뉴? ");
    scanf("%d", &menu);

    return menu;
}
*/

int main(){
    int menu;
    Reseveration s[100];
    int index = 0;
    Sale sales; // 할인 이벤트는 이벤트 기간 동안은 한 번만 하도록
    sales.isSale = 0;

    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        if (menu == 1){
            addReseveration(&s[index++]);
        }
        else if (menu == 2){
            if(index == 0){
                printf("\n 예약 정보 없음 /n");
                continue;
            }
            list(s, index);
        }
        else if (menu == 3){
            list(s, index);
        }
        else if (menu == 4){
            list(s,index);
        }
        else if(menu==5)
            printf("test\n");
        else if(menu==6)
            printf("test\n");
        else if(menu == 7){
            printf("test\n");
        }
        else if(menu==8){
            int saleSelect = selectSaleNo(&sales);
            getchar();
            if(saleSelect == 1)
                sales.isSale = addEvent(&sales);
            else if(saleSelect == 2)
                sales.isSale = updateEvent(&sales);
            else 
                continue;
        }
        else if(menu==9)
            printf("test\n");

        else if(menut == 10){
            printf("test\n");
        }
    }
    printf("\n 종료되었습니다! \n");
    return 0;
};
