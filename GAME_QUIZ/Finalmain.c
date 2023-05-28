#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>

#define COLOR_BMAG "\e[5;35m"
#define COLOR_BBLU "\e[5;34m"
#define COLOR_CY "\e[0;36m"
#define COLOR_YEL "\e[;33m"
#define COLOR_BYEL "\e[5;33m"
#define COLOR_BLU "\e[0;34m"
#define COLOR_GRN "\e[0;32m"
#define COLOR_RED "\e[0;31m"
#define COLOR_OFF "\e[m"



int main()
{

char ch1;
char choice;

system("cls");

        home:
        system("cls");
        printf(COLOR_BMAG"\n\n\n\n\n\n\t\t\t\t\t\t* * * * * * "COLOR_OFF COLOR_BBLU"* * * * * * "COLOR_OFF);
        printf(COLOR_BMAG"\n\t\t\t\t\t\t*"COLOR_OFF COLOR_BBLU" C PROGRAM"COLOR_OFF);
        printf(COLOR_BMAG" QUIZ GAME "COLOR_OFF COLOR_BBLU"* "COLOR_OFF);
        printf(COLOR_BMAG"\n\t\t\t\t\t\t* * * * * *"COLOR_OFF COLOR_BBLU" * * * * * * "COLOR_OFF);
        printf("\n\n\n\t\t\t\t\t            LET'S PUT YOUR");
        printf("\n\t\t\t\t\t        KNOWLEDGE TO THE TEST!");
        printf(COLOR_GRN"\n\n\n\n\t\t\t\t [S] START"COLOR_OFF);
        printf(COLOR_YEL"      [V] RECENT SCORE  "COLOR_OFF);
        printf(COLOR_BLU"   [H] HELP"COLOR_OFF);
        printf(COLOR_RED"    [Q] QUIT"COLOR_OFF);

            choice=toupper(getch());
            if (choice=='V')
               {
                show_record();
                 goto home;

               }
            else if (choice=='H')
               {
                 system("cls");
                 help();
                 getch();
                 goto home;
               }
            else if (choice=='Q')
               {
                 exit(1);
               }
            else if (choice == 'S')
               {
                   practiceQuiz();
                    getch();
                }


}



void practiceQuiz()

{
system("cls");

help();

printf(COLOR_YEL"\n\n\n\t\t [S] Start the game!\n\n"COLOR_OFF);

getch();

system("cls");
int countr = 0;
int i;
int j=1;

char guess;

bool arr[5]={0};

int A[5];

time_t t;


srand((unsigned)time(&t));


for(i=0; i<5; i++)

{

int r = rand()%6;

if(!arr[r])

A[i]= r;

else

i--;

arr[r]=1;

}

for(i=0; i<5; i++)

{

switch(A[i])

{

case 0:
system("cls");

printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. This essential gas is important so that we can breath?",j++);

printf("\n\n\t\t\t\tA. Hydrogen \t\tB. Nitrogen\n\n\t\t\t\tC. Oxygen\t\tD. Carbon Dioxide");


if (toupper(getch())=='C')
{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);
countr+= 3;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 0 marks \n "COLOR_OFF);

getch();

break;

}

case 1:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. What is the nearest planet to the sun?",j++);

printf("\n\n\t\t\t\tA. Venus \t\tB. Earth \n\n\t\t\t\tC. Mercury\t\tD. Mars ");


if (toupper(getch())=='C')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 3 marks \n "COLOR_OFF);

countr+= 3;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!!"COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);

getch();

break;

}

case 2:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY\n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. Which ruler was the Philippines named after?",j++);

printf("\n\n\t\t\t\tA. Prince Felipe of Argentina\t\tB. King Philip ll of Spain\n\n\t\t\t\tC. Philip ll Macedon\t\t\tD. Ferdinand Prince of Asturias");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

countr+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks \n "COLOR_OFF);

getch();

break;

}
case 3:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY\n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. Who rediscovered the Philippines?",j++);

printf("\n\n\t\t\t\tA. Christopher Columbus\t\tB. Ferdinand Magellan\n\n\t\t\t\tC. Amerigo Vespucci\t\tD. Vasco de Gama");


if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

countr+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);

getch();

break;

}
case 4:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. Who is the current president of the University Of Bohol?",j++);

printf("\n\n\t\t\t\tA. Dr. Victoriano B. Tirol Jr.\t\tB. Atty. Victoriano D. Tirol Sr\n\n\t\t\t\tC. Atty. David B. Tirol\t\t\tD. Dr. Victoriano B. Tirol III");

if (toupper(getch())=='D')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL"\n\n\t\t\t\tYou are awarded 3 marks \n "COLOR_OFF);

countr+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 5:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. What are the Three color stripes of UB in order?",j++);

printf("\n\n\t\t\t\tA. Yellow, Red, Blue\t\tB. Red, Yellow, Blue\n\n\t\t\t\tC. Blue, Red, Yellow\t\tD. Yellow, Blue, Red");


if (toupper(getch())=='A')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

countr+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}

}

}
system("cls");
printf(COLOR_BYEL"\n\n\n\t\t\t\t\t    *************************"COLOR_OFF);
printf("\n\t\t\t\t\t    You got total of %d points", countr);
printf(COLOR_BYEL"\n\t\t\t\t\t    *************************\n\n"COLOR_OFF);

    if (countr >= 0 && countr <= 8 )
                            {

                              printf("\n\t*** Sorry you are not eligible to answer the next questions. We wish you luck the next time. ***");
                              printf(COLOR_GRN"\n\n\t\t\t\t\t  Press any key to got to MENU"COLOR_OFF);
                              getch();
                              main();
                            }

else if (countr >= 9 && countr <= 18)
                            {

                                 printf("\n\n\t\t\t*** CONGRATULATIONS! You are eligible to answer the next questions. ***");
                                 printf(COLOR_GRN"\n\n\t\t\t\t\t\t  Press any key to proceed"COLOR_OFF);

                                 getch();
                                 runQuiz();
                                 system("cls");
}
}


/*Edit the question and answers pleass!!!!!!-----------------------------------------------------------------------------------------------------------------------*/


void runQuiz()
{

system("cls");
int score = 0;
int i;
int j=1;
char playername;

bool arr[10]={0};

int A[10];

time_t t;

srand((unsigned)time(&t));

for(i=0; i<10; i++)

{

int r = rand()%20;

if(!arr[r])

A[i]= r;

else

i--;

arr[r]=1;

}

for(i=0; i<10; i++)

{

switch(A[i])

{

case 0:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who is the national Hero of the Philippines?",j++);
printf("\n\n\t\t\t\tA.Benigno Aquino Jr\t\tB.Dr Jose Rizal .\n\n\t\t\t\tC. Andres Bonifacio\t\tD.Apolinario Mabini");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;
}
case 1:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Which of the following is the pen name used by Marcelo H. Del Pilar?",j++);

printf("\n\n\t\t\t\tA. Mandarin \t\tB.Taga-ilog   \n\n\t\t\t\tC.Dim asilaw\t\tD. Dimasalang");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 2:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. Who is the first editor of La Solidaridad?",j++);

printf("\n\n\t\t\t\tA.Graciano Lopez Jaena\t\tB.Emilio Aguinaldo.\n\n\t\t\t\tC.Marcelo H. Del Pilar\t\tD.Julian Felipe.");

if (toupper(getch())=='A')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();
break;

}
case 3:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who created the designs for the Philippine national flag?",j++);

printf("\n\n\t\t\t\tA.Andres Bonifacio\t\tB.Apolinario Mabini.\n\n\t\t\t\tC.Emilio Aguinaldo\t\tD.Jose P. Rizal");

if (toupper(getch())=='C')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;
}
case 4:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Name of the oldest Philippine city?",j++);

printf("\n\n\t\t\t\tA.Manila \t\tB. Ilo-ilo \n\n\t\t\t\tC. Cebu \t\tD.Tagbilaran City ");

if (toupper(getch())=='C')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 5:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | FILIPINO HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. Who is the founder of KKK?",j++);

printf("\n\n\t\t\t\tA.Emilio Aguinaldo\tB.Andres Bonifacio \n\n\t\t\t\tC.Lapu-lapu\t\tD.Antonio Luna ");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 6:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. Who is the 1st President of University Of Bohol?",j++);
printf("\n\n\t\t\t\tA.Dr. Victoriano B. Tirol Jr\tB.Atty. Victoriano D. Tirol Sr \n\n\t\t\t\tC.Atty. David B. Tirol\t\tD.Atty. David B. Tirol ");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 7:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who is the Second President of University Of Bohol?",j++);
printf("\n\n\t\t\t\tA. Dr. Victoriano B. Tirol Jr\t\tB.Atty. Victoriano D. Tirol Sr \n\n\t\t\t\tC.Atty. David B. Tirol\t\tD.Dr. Victoriano B. Tirol III ");

if (toupper(getch())=='C')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();
break;

}
case 8:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who is the Third President of University Of Bohol?",j++);
printf("\n\n\t\t\t\tA. Dr. Victoriano B. Tirol Jr.\tB.Atty. Victoriano D. Tirol Sr \n\n\t\t\t\tC.Atty. David B. Tirol\t\tD.Dr. Victoriano B. Tirol III ");

if (toupper(getch())=='A')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 9:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who is the Fourth President of University Of Bohol?",j++);
printf("\n\n\t\t\t\tA. Atty. Nuevas T. Montes \t\tB.Atty. Victoriano D. Tirol Sr \n\n\t\t\t\tC.Atty. David B. Tirol\t\tD.Dr. Victoriano B. Tirol III ");

if (toupper(getch())=='A')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 10:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who is the Chairman of the Board of Trustees?",j++);
printf("\n\n\t\t\t\tA. Atty. Nuevas T. Montes \t\tB.Atty. Ulysses B. Tirol \n\n\t\t\t\tC.Atty. David B. Tirol\t\tD.Dr. Victoriano B. Tirol III ");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 11:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who is the Vice president for Administration?",j++);
printf("\n\n\t\t\t\tA. Ms. Ria Eva M. Sevilla \tB.Atty. Marlumina B. Teh \n\n\t\t\t\tC.Dr. Maricel A. Tirol\t\tD.Ms. Dalia Melda T. Magno");
if (toupper(getch())=='A')
{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 12:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Who is the Dean for Graduate School?",j++);
printf("\n\n\t\t\t\tA. Atty. Nuevas T. Montes \tB.Dr. Buenaventurada D. Libot\n\n\t\t\t\tC.Atty. David B. Tirol\t\tD.Dr. Victoriano B. Tirol III ");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 13:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | UB HISTORY  \n"COLOR_OFF);
printf("\n\n\t\t\t\tQ%d. Who is the Dean for Professional Studies?",j++);
printf("\n\n\t\t\t\tA. Atty. Nuevas T. Montes \t\tB.Dr. Buenaventurada D. Libot\n\n\t\t\t\tC.Dr. Ammon Denis R. Tirol\t\tD.Dr. Victoriano B. Tirol III ");

if (toupper(getch())=='C')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 14:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.What is the primary source of solar energy ?",j++);
printf("\n\n\t\t\t\tA. Wind \t\tB. Sun\n\n\t\t\t\tC. Water\t\tD. Biomass");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 15:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.Which nutrient plays an essential role in muscle-building ?",j++);
printf("\n\n\t\t\t\tA.Protein\t\tB.Carbohydrate\n\n\t\t\t\tC.Iron\t\t\tD.Fat");

if (toupper(getch())=='A')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();
break;

}
case 16:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.A lion is most closely related to which of the following animals ",j++);
printf("\n\n\t\t\t\tA.Dog \t\tB.Raccoon\n\n\t\t\t\tC. Wolf\t\tD.Leopard ");

if (toupper(getch())=='D')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 17:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.What are animals, which eat both plants and animals, called.",j++);
printf("\n\n\t\t\t\tA.Herbivores \t\tB.Insectivores\n\n\t\t\t\tC.Carnivores\t\tD.Omnivores.");

if (toupper(getch())=='D')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 18:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d. When a substance goes from one state of matter to another,\n\t\t\t\twhat is that process called?.",j++);
printf("\n\n\t\t\t\tA.Sublimation\t\tB. A change of state\n\n\t\t\t\tC.Condensation\t\tD.Absolute Zero");

if (toupper(getch())=='B')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();

break;

}
case 19:
system("cls");
printf(COLOR_CY"\n\n\n\t\t\t\tQUIZ GAME | SCIENCE \n"COLOR_OFF);
printf("\n\n\t\t\t\t%d.What energy emerges from motion?",j++);
printf("\n\n\t\t\t\tA.Potential energy\t\tB.Electrical energy\n\n\t\t\t\tC.Kinetic energy\t\tD.Gravitational energy");

if (toupper(getch())=='C')

{

printf(COLOR_GRN"\n\n\n\t\t\t\tCorrect!!!"COLOR_OFF);
printf(COLOR_YEL" \n\t\t\t\tYou are awarded 3 marks  \n "COLOR_OFF);

score+= 3 ;

getch();

break;

}

else

{

printf(COLOR_RED"\n\n\n\t\t\t\tWrong!!! "COLOR_OFF);
printf(COLOR_YEL" \n\n\t\t\t\tYou are awarded 0 marks  \n "COLOR_OFF);
getch();
break;

}


}

}

system("cls");


FILE * fpointer;
fpointer = fopen("quiz_rec.txt","w");
printf(COLOR_BYEL"\n\n\n\t\t\t\t\t    *************************"COLOR_OFF);
printf("\n\t\t\t\t\t    You got total of %d points", score);
printf(COLOR_BYEL"\n\t\t\t\t\t    *************************\n\n"COLOR_OFF);
char name[50];

printf("\n\n\n\t\t\t\t\t\tEnter your name: ");
gets(name);

fprintf(fpointer,"%s %d",name,score);

fclose(fpointer);

	puts("\n\n\t\t\t\t\t Press Y if you want to play again");
	puts("\n\t\t\t\t\tPress any key if you want to go main menu");
	if (toupper(getch())=='Y')
		main();
	else
		{

		main();}
}




    void show_record()
    {

       system("cls");

       int test=0;
       char playername[20];
       int score;


       FILE *view;
       view=fopen("quiz_rec.txt","r");

       while(fscanf(view,"%s %d ", playername,&score)!=EOF)
            {

                printf("\n\n\n\t\t\t\t\tRECENT SCORE:");
                printf("\n\t\t\t\t\t------------------------------------------");
                printf("\n\t\t\t\t\t%s has secured the Score %d",playername,score);
                test++;
                printf(COLOR_GRN"\n\n\t\t\t\t\tPress any key to go to menu"COLOR_OFF);
            }
        getch();

    }

void help()
{

                         printf(COLOR_CY"\n\t\t --------------------------  Welcome to C Program Quiz Game --------------------------"COLOR_OFF);
                         printf("\n\n\t\t\t\t Here are some tips you might wanna know before playing:");
                         printf("\n \t\t\t-------------------------------------------------------------------------");
                         printf("\n \t\t >> Praticipation in the quiz is free and open for all students in University of Bohol\n.");
                         printf("\n \t\t >> This quiz has three categories which the player can answer randomly.\n");
                         printf("\n \t\t >> Read and understand every questions.\n");
                         printf("\n \t\t >> Each answer is equal to 3 points.\n");
                         printf("\n \t\t >> The player should answer every question wisely.\n");
                         printf("\n \t\t >> The player should get 9 points or above for the trial questions to be able to proceed\n");
                         printf("\n \t\t to the next questions.\n");
                         printf("\n \t\t >> This quiz is a total of 15 questions.\n");
                         printf("\n \t\t >> You will be given 4 options and you have to press A, B ,C or D for the right option.");
                         printf(COLOR_GRN"\n\n\t\t Press any key to return to main menu!"COLOR_OFF);
}

