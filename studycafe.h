#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    // 1. 이름 2. 전화번호 뒷자리 3. 예약 자리 4. 예약 기간
    char name[20];
    int phone_no;
    char space[5]; // 예약자리 A-01 처럼
    char during[10]; // 05/12 까지 처럼 입력 
}Reseveration;

typedef struct{ //한결
    //할인 이벤트 관련 구조체
    char during[100];
    int saleRate; // 할인율
    int isSale;
}Sale;

typedef struct{
    int price[4];
    int isDeafult;
}Price;

//function
//CRUD
int addReseveration(Reseveration *s);
void readReseveration(Reseveration *s);
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
int addEvent();
int updateEvent();

//시간대별 가격 보여주기
void showPrice(Price *price, Sale *sale);
int updatePrice(Price *price);

//list
void list(Reseveration *s, int count);
//번호선택
int selectDataNo(Reseveration *s, int count);

int selectMenu();


//시간 차이 계산을 위한 함수
int calculatorTime(char duration[]);
int isOkayDuration(int gapOfTime);

//임박한 사용자 출력
void userImpendingEnd(Reseveration *s, int count);