#include<stdio.h>
#include<stdlib.h>

void options();
char start_screen();
void dispatch(char trainNum);

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


int main() 
{
  char choice = start_screen();

  if (choice == '1') {
    printf("train1");
  } else if (choice == '2') {
    printf("train2");
  } else if (choice == 'c') {
    options();
  }
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