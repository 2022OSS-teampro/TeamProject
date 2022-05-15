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

//한결
int addReseveration(Reseveration *s){
    printf("\n");
    printf("이름: ");
    scanf(" %[^\n]s",s->name);

    printf("전화번호 뒷자리: ");
    scanf("%d",&s->phone_no);

    
    printf("예약 자리: \n");
    scanf(" %[^\n]s",s->space);
  

    printf("예약 기간: ");
    scanf(" %[^\n]s",s->during);
  
    printf("==> 추가됨!\n");
    return 1;
};
//한결
void readReseveration(Reseveration s){
    printf("%s   %d     %s    ~%s까지\n", s.name, s.phone_no, s.space, s.during);
};

//희송
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

//희송 
int deleteReseveration(Reseveration *s){
    s->phone_no=-1;
    printf("==> 삭제됨!\n");
    return 0;
}

//한결
int selectMenu(){
    int menu;
    printf("\n=== 스터디 카페 예약 ===\n\n");
    printf("1. 예약 추가\n");
    printf("2. 에약 현황 보기\n");
    printf("3. 예약 정보 수정\n");
    printf("4. 예약 삭제\n");
    printf("5. 파일 저장\n");
    printf("6. 파일 불러오기\n");
    printf("7. 할인 이벤트\n");
    printf("8. 가격 확인하기\n\n");

    printf("=> 선택할 메뉴? ");
    scanf("%d", &menu);

    return menu;
}

void saveData(Reseveration *s, int count);
int loadData(Reseveration *s);
void searchName(Reseveration *s, int count);



//시간대별 가격 보여주기
void showPrice();

//임박한 사용자 출력
void userImpendingEnd();

//list --> 이부분도 제가 하겠습니다!,한결
void list(Reseveration *s, int count){
    printf("\n 이름    전화번호    자리    예약 기간\n");
    for(int i = 0 ; i < count ; i++){
        if(s[i].phone_no == -1)
            continue;
        printf("%d ", i+1);
        readReseveration(s[i]);
    }
}

//번호선택
int selectDataNo(Reseveration *s, int count);

