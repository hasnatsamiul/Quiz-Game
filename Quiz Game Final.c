#include<stdio.h>
#include <windows.h>
#include<time.h>


void displayscore()'
{
char name[20];
float s;
FILE *f;
system("cls");
f=fopen("score.txt","r");
fscanf(f,"%s%f",&name,&s);
printf("\n\n\t\t ");
printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
printf("\n\n\t\t ");
fclose(f);
getch();
}



void help()
{
system("cls");
printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
printf("\n\n\tsubject wise questions and the right answer is to be chosen among");
printf("\n\n\tthe four options provided. Your score will be calculated at the");
printf("\n\n\tend. Remember that the more quicker you give answer the more");
printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
printf("\n\n\tat the end and displayed. If you secure highest score, your score");
printf("\n\n\twill be recorded. So BEST OF LUCK.");
}
void writescore(float score, char plnm[20])
{
float sc;
char nm[20];
FILE *f;
system("cls");
f=fopen("score.txt","r");
fscanf(f,"%s%f",&nm,&sc);
if (score>=sc)
 { sc=score;
   fclose(f);
   f=fopen("score.txt","w");
   fprintf(f,"%s\n%.2f",plnm,sc);
   fclose(f);
 }
}
int main()
     {
     int countq,countr;
     int r,d,i;
     int pa;int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
     //randomize();
     mainhome:
     system("cls");
     puts("\n\t\t Welcome To QUIZ GAME\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to Programing C MCQ       ");
     puts("\n\t\t Enter 'B' to Bangladeh MCQ    ");
     puts("\n\t\t Enter 'V' to view high score  ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='V')
{
displayscore();
goto mainhome;
}
     else if (choice=='Q')
exit(1);
     else if (choice=='H')
{
help();
getch();
goto mainhome;


}
    else if(choice=='S'){
     system("cls");
     printf("\n\n\n\t\t\tACADIMIC SUBJEET");

    puts("\n\t\t-------------------------------");



    puts("\n\t\t Enter 'A' for  Start C programing         ");



     choice=toupper(getch());
            if (choice=='A')



     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home1:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start1:
     srand ( time(NULL) );
     r=rand()%15+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto start;

     switch(r)
{
case 1:
printf("\n\nHow meny data types in c?");
printf("\n\nA.4\tB.3\n\nC.5\tD.7\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.5");break;}

case 2:
printf("\n\n\nWhich of expressions is true? ");
printf("\n\nA.1==1\tB.o\n\nC.none\tD.10*<90\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      printf("\n\nWrong!!! The correct answer is A.1==1");
break;

case 3:
printf("\n\n\nWhich identifire is valid ?");
printf("\n\nA.$tax\tB.1record\n\nC.return\tD.name\n\n");
countq++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is D.name");break;}


case 4:
printf("\n\n\nWhich character constant is valid?");
printf("\n\nA.$\tB./n\n\nC.none\tD.xyz\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.$");break;}


case 5:
printf("\n\n\nWhich variable name is invalid in c ?");
printf("\n\nA.new-word\tB.this_is_a_long_name\n\nC._count\tD.none\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.new-word");break;}

case 6:
printf("\n\n\n What do you mean by /n ?");
printf("\n\nA.null\tB.Newline\n\nC.Alert\tD.Horizontal tab\n\n");
countq++;
if (toupper(getch())=='B' )
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is B.Newline");break;}


case 7:
printf('%d',"\n\n\nWHAT does this loop do?\n\n for(x=0;x<100;x++) printf('%d',x)");
printf("\n\nA.1to 99\tB.0 to 99\n\nC.0 to 100\tD.0 to 98\n\n");
countq++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is B.0 TO 99");break;}


case 8:
printf("\n\n\nIs expression true?\n\n !(10==9)");
printf("\n\nA.no \tB.none\n\nC.0\tD.yes\n\n");
countq++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is D.yes");break;}


case 9:
printf("\n\n\nWhich is not logical operation of c?");
printf("\n\nA.!<\tB.!=\n\nC.==\t\tD.||\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.!<");break;}


case 10:
printf("\n\n\nWhich  sign use for cheracter type'?");
printf("\n\nA. %%d \tB.%%lf\n\nC.%%c\tD.%%f\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.%%c");break;}


case 11:
printf("\n\n\nWhich from array index start?");
printf("\n\nA.1\tB.-1\n\nC.o\tD.2\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.0");break;}

case 12:
printf("\n\n\nWho is the father of c language?");
printf("\n\nA.Bjarne stroustrup\tB.Denni ritchic\n\nC.Dr.E.F codd\tD.james gosling\n\n");
countq++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is B.Denni ritchic");break;}

case 13:
printf("\n\n\nSwitch stetement accepts?");
printf("\n\nA.All of the mentioned\tB.int\n\nC.char\tD.longn\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.All of the mentioned ");break;}

case 14:
printf("\n\n\nWhich is the only function all c programing must contain '?");
printf("\n\nA.Start()\tB.system()\n\nC. main()\tD.getch()\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.main()");break;}

case 15:
printf("\n\n\nWhat is the default return-type of getceher()?");
printf("\n\nA.int\tB.char\n\nC.none\tD.char*\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.int");break;}






}
i++;
if (i<=5) goto start1;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
puts("\n\nNEXT PLAY?(Y/N)");
if (toupper(getch())=='Y')
goto home1;
else
{
writescore(score,playername);
goto mainhome;
}
}
    else if(choice=='B'){
     system("cls");
     printf("\n\n\n\t\t\tACADIMIC SUBJEET");

    puts("\n\t\t-------------------------------");



    puts("\n\t\t Enter 'A' for start BANNGLDESH           ");



     choice=toupper(getch());
            if (choice=='A')



     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%15+1;
     nq[i]=r;
     for (w=0;w<i;w++)
if (nq[w]==r) goto start;

     switch(r)
{
case 1:
printf("\n\nMohammad Ashraful of Bangladesh cricket team mainly a?");
printf("\n\nA.fast bowler\tB.spin bowler\n\nC.batsman\tD.wicket keeper\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.batsman");break;}

case 2:
printf("\n\n\nBangladesh played inaugural cricket test match against? ");
printf("\n\nA.India\tB.Pakistan\n\nC.Srilanka\tD.Zimbabwe\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      printf("\n\nWrong!!! The correct answer is A.India");
break;

case 3:
printf("\n\n\nValue-added tax in Bangladesh was introduced on..... ?");
printf("\n\nA.1990\tB.1992\n\nC.1996\tD.1991\n\n");
countq++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is D.1991");break;}


case 4:
printf("\n\n\nHow many stock exchanges are there in bangladesh ?");
printf("\n\nA.2\tB.3/n\n\nC.6\tD.4\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.2");break;}


case 5:
printf("\n\n\nTaka ten polymer note was first introduced in bangladesh in ?");
printf("\n\nA.2000\tB.2001\n\nC.1999\tD.2002\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.2000");break;}

case 6:
printf("\n\n\nBangladesh Bank was established on ?");
printf("\n\nA.1971\tB.1972\n\nC.1973\tD.1974\n\n");
countq++;
if (toupper(getch())=='A' )
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.1971");break;}


case 7:
printf('%d',"\n\n\nWhere is the Bangladesh Rice-Research Institute located?\n\n for(x=0;x<100;x++) printf('%d',x)");
printf("\n\nA.Dhaka\tB.Gazipur\n\nC.Rangpur\tD.Barisal\n\n");
countq++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is B.Gazipur");break;}


case 8:
printf("\n\n\nWhere is the Uttara Ganobhabon situated?\n\n !(10==9)");
printf("\n\nA.Bogra \tB.Rangpur\n\nC.Naogon\tD.Natore\n\n");
countq++;
if (toupper(getch())=='D')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is D.Natore");break;}


case 9:
printf("\n\n\nIn Which district in the histore Pahar pur  situated?");
printf("\n\nA.Naogaon\tB.Bogra\n\nC.Rangpur\tD.Comilla\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.Naogaon");break;}


case 10:
printf("\n\n\nOne of the following is an artist?");
printf("\n\nA.Al-Mahamud \tB.F.R khan\n\nC.S.M sultan\tD.Abu\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.S.M sultan");break;}


case 11:
printf("\n\n\nRabindranath Tagore was bron on?");
printf("\n\nA.1842\tB.1843\n\nC.1861\tD.1850\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.1861");break;}

case 12:
printf("\n\n\nBangladesh is not a member of which of the following association?");
printf("\n\nA.D-8\tB.OPEC\n\nC.WHO\tD.IMF\n\n");
countq++;
if (toupper(getch())=='B')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is B.OPEC");break;}

case 13:
printf("\n\n\nIn which year did Bangladesh become a memeber of the IMF ?");
printf("\n\nA.1972\tB.1973\n\nC.1979\tD.1070\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.1972 ");break;}

case 14:
printf("\n\n\nWho was the last mughal Emperor ?");
printf("\n\nA.Akbar\tB.Humayan\n\nC.Bhadur Shah\tD.Babar\n\n");
countq++;
if (toupper(getch())=='C')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is C.Bhadur Shah");break;}

case 15:
printf("\n\n\nHow many Devisions in Bangladesh?");
printf("\n\nA.7\tB.5\n\nC.6\tD.8\n\n");
countq++;
if (toupper(getch())=='A')
{printf("\n\nCorrect!!!");countr++; break;}
else
      {printf("\n\nWrong!!! The correct answer is A.7");break;}






}
i++;
if (i<=5) goto start;
finaltime=time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if (score<0) score=0;
printf("\n\n\nYour Score: %.2f",score);
if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
puts("\n\nNEXT PLAY?(Y/N)");
if (toupper(getch())=='Y')
goto home;
else
{
writescore(score,playername);
goto mainhome;
}
}
     else
{
printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
Sleep(700);
goto mainhome;
}
return 0;
}

