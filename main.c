#include "studycafe.h"

/* 메뉴 번호보기위한 주석 --> 추후에 삭제할 것임
int selectMenu(){
    int menu;
    printf("=== 스터디 카페 예약 ===\n\n");
    printf("1. 예약 추가\n");
    printf("2. 에약 현황 보기\n");
    printf("3. 예약 정보 수정\n");
    printf("4. 예약 삭제\n");
    printf("5. 파일 저장\n");
    printf("6. 파일 불러오기\n");
    printf("7. 할인 이벤트\n");
    printf("8. 가격 확인하기\n");

    printf("=> 선택할 메뉴? ");
    scanf("%d", &menu);

    return menu;
}
*/

int main(){
    int menu;
    Reseveration s;

    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        if (menu == 1){
            readReseveration(s);
        }
        else if (menu == 2){
            addReseveration(&s);
        }
        else if (menu == 3){
            updateReseveration(&s);
        }
        else if (menu == 4){
            deleteReseveration(&s);
        }
        else if(menu==5)
        else if(menu==6)
        else if(menu==7){
            saleEventShow();
        }
        else if(menu==8)
    }
    printf("\n 종료되었습니다! \n");
    return 0;
};
