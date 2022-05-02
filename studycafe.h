#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    // 1. 이름 2. 전화번호 뒷자리 3. 예약 자리 4. 예약 기간
    char name[20];
    int phone_no;
    char space[5]; // 예약자리 A-01 처럼
    char during[10]; // 05/12 까지 처럼 입력 
}Reseveration;


//function
//CRUD
int addReseveration(Reseveration*s);
void readReseveration(Reseveration s);
int updateReseveration(Reseveration *s);
int deleteReseveration(Reseveration *s);
//파일 저장 /불러오기
void saveData(Reseveration *s, int count);
int loadData(Reseveration *s);
//이름검색
void searchName(Reseveration *s, int count);

//할인 이벤트 관련 기능
void saleEventShow();
int selectSaleNo();
void addEvent();
void updateEvent();

//시간대별 가격 보여주기
void showPrice()

void userImpendingEnd();
//list
void list(Reseveration *s, int count);
//번호선택
int selectDataNo(Reseveration *s, int count);

int selectMenu();

