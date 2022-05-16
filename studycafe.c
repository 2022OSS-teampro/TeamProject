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


int selectMenu(){
    int menu;
    printf("\n=== 스터디 카페 예약 ===\n\n");
    printf("1. 예약 추가\n");
    printf("2. 에약 현황 보기\n");
    printf("3. 예약 정보 수정\n");
    printf("4. 예약 삭제\n");
    printf("5. 파일 저장\n");
    printf("6. 파일 불러오기\n");
    printf("7. 예약자 이름 검색\n");
    printf("8. 할인 이벤트\n");
    printf("9. 가격 확인하기\n");
    printf("10. 종료 임박한 사용자 출력\n");

    printf("=> 선택할 메뉴? ");
    scanf("%d", &menu);
    return menu;
}


//Menu 1~4
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
void readReseveration(Reseveration *s){
    printf("%s   %d     %s    ~%s까지\n", s->name, s->phone_no, s->space, s->during);
}; //간단하게 수정했습니다u.u


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


//Menu 5~7
//희송
int selectDataNo(Reseveration *s, int count){
    int no;
    list(s,count);
    printf("번호는 (취소:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

//희송
void list(Reseveration *s,int count){
    printf("No. 이름 | 전화번호 | 자리 | 예약 기간\n");
    printf("===================================\n");
    for(int i = 0; i < count ; i++){
        if(s[i].phone_no == -1) continue;
        printf("%2d.", i+1);
        readReseveration(&s[i]);
    }
    printf("\n");
}

//희송
void saveData(Reseveration *s, int count){
    FILE *fp;
    fp = fopen("reservation_list.txt","wt");
    for(int i = 0 ; i < count ; i++){
        fprintf(fp, "%s|%d|%s|%s",s[i].name,s[i].phone_no,s[i].space,s[i].during);
    }

    fclose(fp);
    printf("=> 저장됨!\n");
}

//희송
int loadData(Reseveration *s){
    int i;
    FILE *fp = fopen("reservation_list.txt", "rt");
    if(fp == NULL){
        printf("=> 파일 없음\n");
        return -1;
    }
    else{
        for(i = 0 ; i < 100 ; i++){
            fscanf(fp, "%s", s[i].name);
            fscanf(fp, "%d", &s[i].phone_no);
            fscanf(fp, "%s", s[i].space);
            fscanf(fp, "%s", s[i].during);
        }
        printf("=> 로딩 성공!\n");
        return 0;
    }
    fclose(fp);
}

//희송
void searchName(Reseveration *s, int count){
    int scnt = 0;
    char search[20];

    printf("검색: ");
    scanf("%s", search);

    printf("No. 이름 | 전화번호 | 자리 | 예약 기간\n");
    printf("=====================================\n");
    for(int i = 0; i< count; i++){
        if(s[i].phone_no == -1) continue;
        else if(strstr(s[i].name, search)){
            printf("%2d.", i+1);
            readReseveration(&s[i]);
            scnt++;
        }
    if(scnt == 0) printf("==> 검색된 결과 없음.");
    printf("\n");
    }
}


//Menu 8~
void showPrice();


