#include<stdio.h>
#include<stdlib.h>

char start_screen();
void dispatch_train_1();
void dispatch_train_2();
void options();
void end_screen();

char train1[15][80] = {
  "                                        *************************************",
  "                                      ***************************************",
  "                                    *****************************************",
  "                                  *******************************************",
  "                               **********************************************",
  "                           **************************************************",
  "                        *************************************************    ",
  "                     *****************************************               ",
  "                   ************            ***********                       ",
  "                 *******                 *******                             ",
  "                *****                   *****                                ",
  "    ....________**___......     ......___**________....     _________________",
  "  __IooI==   = = =   ~~~~~I     I~~~~~   = = =   ==IooI__   I         I   I  ",
  "I_I_I__I______GBW____=====I_I_I_I=====____GBW______I__I_I_I I GBW     I   I  ",
  "`-'O==O~=============~O==O`-'~`-'O==O~=============~O==O`-'~~o==o~~~~~~~~~~~~"
};
char train2[16][70] = {
  "                                     (@@@)     (@@@@@)              ",
  "                               (@@)     (@@@@@@@)        (@@@@@@@)  ",
  "                         (@@@@@@@)   (@@@@@)       (@@@@@@@@@@@)    ",
  "                    (@@@)     (@@@@@@@)   (@@@@@@)             (@@@)",
  "               (@@@@@@)    (@@@@@@)                (@)              ",
  "           (@@@)  (@@@@)           (@@)                             ",
  "        (@@)              (@@@)                                     ",
  "       .-.                                                          ",
  "       ] [    .-.      _    .-----.                                 ",
  "     .\"   \"\"\"\"   \"\"\"\"\"\" \"\"\"\"| .--`                   ",
  "    (:--:--:--:--:--:--:--:-| [___    .------------------------.    ",
  "     |C&O  :  :  :  :  :  : [_9_] |'='|.----------------------.|    ",
  "    /|.___________________________|___|'--.___.--.___.--.___.-'|    ",
  "   / ||_.--.______.--.______.--._ |---\-'-\-.-/==\-.-/==\-.-/-'/--  ",
  "  /__;^=(==)======(==)======(==)=^~^^^ ^^^^(-)^^^^(-)^^^^(-)^^^ jgs ",
  "~~~^~~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~^~~~"
};
int num = 11;


int main() 
{
  char choice = start_screen();

  if (choice == '1') {
    dispatch_train_2();
  } else if (choice == '2') {
    dispatch_train_2();
  } else if (choice == 'c') {
    options();
  }

  end_screen();
}


char start_screen() 
{
  system("cls");
  char choice;
  printf("Which train would you like to board?\n");
  printf("For train1 input '1' for train2 input '2' if you are unsure press 'c' to see both trains.: ");
  scanf("%c", &choice);
  again:
  if (choice == '1' || choice == '2' || choice == 'c') {
    return choice;
  } else {
    system("cls");
    printf("\nYou inputted and invalid value. \nTry AGAIN!:");
    scanf("%c", &choice);
    goto again;
  }
}


void options() {
  printf("Train1\n");
  for (int i = 0; i < 15; i++) {
    printf("%s\n", train1[i]);
  }
  printf("\nTrain2\n");
  for (int i = 0; i < 16; i++) {
    printf("%s\n", train2[i]);
  }
}

void dispatch_train_1() {
  while (num >= 0){
    system("cls");
    for (int i = 0; i < 15; i++) {
      for (int j = 0; j < num; j++){
        printf("\t");
      }
      printf("%s\n", train1[i]);
    }
    num--;
  }
}

void dispatch_train_2() {
  while (num >= 0){
    system("cls");
    for (int i = 0; i < 16; i++) {
      for (int j = 0; j < num; j++){
        printf("\t");
      }
      printf("%s\n", train2[i]);
    }
    num--;
  }
}

void end_screen() {
  printf("The Train has reached its destination.\n");
  printf("Hope you had an enjoyable journey.\n");
  printf("Thank You for journeying with us.");
  sleep(2);
}