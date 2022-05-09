#include "studycafe.h"

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
    }
    printf("\n 종료되었습니다! \n");
    return 0;
};
