#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
void heading();
void inf();
int loading();
int sleep();
void times();

int main(void)
{

    int age, chose, pmarks, tmarks, code1, code2, code3, EXAM, COUND = 5;

    char name1[20], name2[10];
    int mans1, mans2, mans3, mans4, mans5, pans1, pans2, pans3, pans4, pans5;
    int cans1, cans2, cans3, cans4, cans5;
    int bans1, bans2, bans3, bans4, bans5;
    float pom1 = 0, pom2 = 0, pom3 = 0, pom4 = 0, pom5 = 0, pom6 = 0;
    int mscore = 0, pscore = 0, cscore = 0, bscore = 0;

    // To show Time
    time_t t;
    time(&t);
    printf("%s", ctime(&t));

    // Admin Login And User Login

    char username[20], password[20];
    int cho;
    FILE *fp;
    system("color 8F");
    heading();
    printf("\n\n\t\t\t\t\t1) Login as Admin");
    printf("\n\t\t\t\t\t2) Login as user");
    printf("\n\n\t\t\t\t\tEnter your choice (1/2) : ");
    scanf("%d", &cho);
    system("CLS");

    switch (cho)
    {
    case 1:
        system("CLS");
        heading();
        printf("\n\n\t\t\t\t\t\t||    ADMIN LOGIN    ||\t\t\t\t");
        printf("\n\n\n\t\t\t\t\tEnter your Username :");
        scanf("%s", &username);
        printf("\t\t\t\t\tEnter your Password :");
        scanf("%s", &password);

        if (strcmp(username, "admin") == 0)
        {
            if (strcmp(password, "future") == 0)
            {
                system("CLS");
                heading();
                printf("\n\n\t\t\t\t\tWELCOME ADMIN!!! LOGIN SUCCESSFULL\n\n\n\n\n\n");

                fp = fopen("result.txt", "r");
                char ch;
                ch = getc(fp);
                while (ch != EOF)
                {
                    printf("%c", ch);
                    ch = fgetc(fp);
                }
                fclose(fp);
            }
            else
            {
                printf("\t\t\t\t\tIncorrect Password !!! Failed to Login");
            }
        }
        else
        {
            printf("\t\t\t\t\tUsername is invalid !!! Failed to Login");
        }

        break;
    case 2:
        system("CLS");
        heading();
        {
            printf("\n\n\t\t\t\t\t\t||   USER LOGIN    ||\t\t\t\t");

            heading();
            system("cls");
            system("color 8F");
            heading();
            loading();
            sleep(2);
            system("cls");
            heading();
            inf();
            getch();
            system("cls");
            heading();

            printf("\n\n\t\t\t\t\tFILL THE FOLLOWING FORM\n\n");

            // Personal Information

            printf(" \n\t\t\t\t\tFIRST PERSONAL INFORMATION \n\n\t\t\t\t\t FIRST NAME\t:");
            scanf("%s", name1);

            printf(" \n\t\t\t\t\tLAST NAME\t:");
            scanf("%s", name2);

            printf("\n\t\t\t\t\t AGE:");
            scanf("%d", &age);
            sleep(0);
            system("cls");
            heading();
            printf("");

            // Educationa Details

            printf("\n\t\t\t\t\tSELECT ANY ONE QUALIFIED EXAM \n\n\t\t\t\t\t 1.MHT CET EXAM \n\n\t\t\t\t\t 2.JEE \n\n\t\t\t\t\t \n\t\t\t\t\t");
            scanf("%d", &EXAM);
            system("cls");
            heading();

            // Subject Analysis Input

            printf("\n\t\t\t\t\tSELECT YOUR FAVOURITE 3 SUBJECTS\n\t\t\t\t\t 1. maths \n\t\t\t\t\t 2. physics \n\t\t\t\t\t 3. chemstry \n\t\t\t\t\t 4. biology \n\t\t\t\t\t ");
            printf("\n\n\t\t\t\t\tENTER THE CODES OF SUBJECT [ ex .2=physics ]\n\n");
            printf("\t\t\t\t\tENTER FIRST SUBJECT CODE \t\t\t\t\t:");
            scanf("%d", &code1);
            printf("\t\t\t\t\tENTER SECOND SUBJECT CODE\t\t\t\t\t:");
            scanf("%d", &code2);
            printf("\t\t\t\t\tENTER THIRD SUBJECT CODE\t\t\t\t\t:");
            scanf("%d", &code3);

            system("cls");
            heading();

            // Educationa Details

            if (EXAM == 1)
            {
                printf(" \n\t\t\t\t\tINFORMATION OF CET EXAM\n");

                if (code1 == 1 || code2 == 1 || code3 == 1)
                {
                    printf("\n\t\t\t\t\tMATHS : \n\n\t\t\t\t\tpercentile :");
                    scanf("%f", &pom1);
                }
                if (code1 == 2 || code2 == 2 || code3 == 2)
                {
                    printf("\n\t\t\t\t\tPHYSICS : \n\n\t\t\t\t\tpercentile :");
                    scanf("%f", &pom2);
                }
                if (code1 == 3 || code2 == 3 || code3 == 3)
                {
                    printf("\n\t\t\t\t\tCHEMISTRY : \n\v\t\t\t\t\tpercentile :");
                    scanf("%f", &pom3);
                }

                if (code1 == 4 || code2 == 4 || code3 == 4)
                {
                    printf("\n\t\t\t\t\tBIOLOGY : \n\n\t\t\t\t\tpercentile :");
                    scanf("%d", &pom5);
                }
            }
            if (EXAM == 2)
            {
                {
                    printf(" \n\t\t\t\t\tINFORMATION OF JEE EXAM\n");
                }

                if (code1 == 1 || code2 == 1 || code3 == 1)
                {
                    printf("\n\t\t\t\t\tMATHS : \n\n\t\t\t\t\tpercentile :");
                    scanf("%f", &pom1);
                }
                if (code1 == 2 || code2 == 2 || code3 == 2)
                {
                    printf("\n\t\t\t\t\tPHYSICS : \n\n\t\t\t\t\tpercentile :");
                    scanf("%f", &pom2);
                }
                if (code1 == 3 || code2 == 3 || code3 == 3)
                {
                    printf("\n\t\t\t\t\tCHEMISTRY : \n\n\t\t\t\t\tpercentile :");
                    scanf("%f", &pom3);
                }
            }

            printf("\n---------------------------------------------------------------------------------------------------\n");
            system("cls");
            heading();

            system("cls");
            heading();

            sleep(1);

            // QUESTIONS FOR QUALIICATION
            if (code1 == 1 || code2 == 1 || code3 == 1)
            {
                system("cls");
                heading();
                system("color A");
                printf("\n\n BASIC MCQ TEST FOR MATHS");

                printf("\n\n\nQUESTION NO 1:\n\n");
                printf("\n\n p v (p^q) is equivalent to....? \n\n(1) q \n\n(2) p  \n\n(3) ~p \n\n(4) ~q\n\n YOUR CHOISE IS :");

                scanf("%d", &mans1);
                if (mans1 == 2)
                {
                    mscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION 2:\n\n");
                printf("\n\nThe area enclosed by the parabola y²= 12x and its latus rectum is..? \n\n(1) 36  \n\n(2) 24  \n\n(3) 18 \n\n(4) 12\n\n YOUR CHOISE IS :");
                scanf("%d", &mans2);
                if (mans2 == 4)
                {
                    mscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 3:\n\n");
                printf("\n\nIf line x-y=K, 4x-3y=20 and 6x+5y+8=0 are concurrent then find K = ? \n\n(1) 6  \n\n(2) 8  \n\n(3) 2 \n\n(4) 4\n\n YOUR CHOISE IS :");

                scanf("%d", &mans3);
                if (mans3 == 1)
                {
                    mscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 4:\n\n");
                printf("\n\nIf the Sum of radius and height of right circular cylinder is 6 units then its maximum volume __cu. units. \n\n(1) 64pie  \n\n(2) 16pie  \n\n(3) 32pie \n\n(4) 4pie\n\n YOUR CHOISE IS :");

                scanf("%d", &mans4);
                if (mans4 == 3)
                {
                    mscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 5:\n\n");
                printf("\n\nThe equation of the line containing the latus rectum of the paraibola y²= 12x is _? \n\n(1) x+3=0  \n\n(2) x=3  \n\n(3) y=3  \n\n(4) y+3=0\n\n YOUR CHOISE IS :");

                scanf("%d", &mans5);
                if (mans5 == 2)
                {
                    mscore++;
                }
            }

            if (code1 == 2 || code2 == 2 || code3 == 2)
            {
                system("cls");
                heading();
                printf("\n\n BASIC MCQ TEST OF PHYSICS");

                printf("\n\n\nQUESTION NO 1:\n\n");
                printf("\n\nWhat is the percentage decrease in the weight of a body when it is taken to a height of 32 km from the surface of earth ? \n\n(1) 1.5 percent  \n\n(2) 1 percent  \n\n(3) 2 percent \n\n(4) 0.5 percent\n\n YOUR CHOISE IS :");

                scanf("%d", &pans1);
                if (pans1 == 1)
                {
                    pscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 2:\n\n");
                printf("\n\nIf the ratio of amplitudes of two sound waves is 4:3 , then the ratio of maximum and minimum intensities is \n\n(1) 1:7  \n\n(2) 1:59  \n\n(3) 49:1 \n\n(4) 7:1\n\n YOUR CHOISE IS :");

                scanf("%d", &pans2);
                if (pans2 == 3)
                {
                    pscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 3:\n\n");
                printf("\n\nAn ammeter and a microametre are converted from the same galvanometer. The resistance required for the conversion is \n\n(1) Higher for microammeter  \n\n(2) Lower for ammeter  \n\n(3) Lower for microammeter \n\n(4) Higher for ammeter\n\n YOUR CHOISE IS :");

                scanf("%d", &pans3);
                if (pans3 == 1)
                {
                    pscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 4:\n\n");
                printf("\n\nIn an atom two electrons complete three revolutions around the nucleus in circular orbit in time 81 t and 192 t respectively. The ratio of their radii will be (t is in second) \n\n(1) 9:16  \n\n(2) 4:3  \n\n(3) 27:64 \n\n(4) 3:4\n\n YOUR CHOISE IS :");

                scanf("%d", &pans4);
                if (pans4 == 1)
                {
                    pscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 5:\n\n");
                printf("\n\nA small quantity of paramagnetic liquid is taken in a watch-glass and kept on two dissimilar magnetic poles. The liquid \n\n(1)  is first elevated and then depressed  \n\n(2) shows no change in the level  \n\n(3) shows elevation in the middle \n\n(4) shows depression in the middle\n\n YOUR CHOISE IS :");

                scanf("%d", &pans5);
                if (pans5 == 3)
                {
                    pscore++;
                }
            }

            if (code1 == 3 || code2 == 3 || code3 == 3)

            {
                system("cls");
                heading();
                printf("\n\n BASIC MCQ TEST FOR CHEMISTRY");

                printf("\n\n\nQUESTION NO 1:\n\n");
                printf("\n\nIf a radius of an atom and a is an edge length of fcc unit cell , then \n\n(1) r= root 3 by 4a  \n\n(2) r=a by 2 root 2  \n\n(3) r= a by 2 \n\n(4) r=2 root 2a\n\n YOUR CHOISE IS :");

                scanf("%d", &cans1);
                if (cans1 == 1)
                {
                    cscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 2:\n\n");
                printf("\n\nThe pH  of 10^-8 M of HCL is \n\n(1) 8  \n\n(2) 7  \n\n(3) less than 7 \n\n(4) greater than 7\n\n YOUR CHOISE IS :");

                scanf("%d", &cans2);
                if (cans2 == 3)
                {
                    cscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 3:\n\n");
                printf("\n\nWhich of the following reactions is exothermic ? \n\n(1) H2(g)--->2H  \n\n(2) C(s)--->C(g)  \n\n(3) 2Cl(g)--->Cl2(g) \n\n(4) H2O(s)--->H2O(l)\n\n YOUR CHOISE IS :");

                scanf("%d", &cans3);
                if (cans3 == 3)
                {
                    cscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 4:\n\n");
                printf("\n\nMost stable oxidation state of Titanium is \n\n(1) +2  \n\n(2) +4  \n\n(3) +3 \n\n(4) +5\n\n YOUR CHOISE IS :");

                scanf("%d", &cans4);
                if (cans4 == 2)
                {
                    cscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 5:\n\n");
                printf("\n\nNylon fibres are \n\n(1) semisynthetic fibres  \n\n(2) polyamide fibres  \n\n(3) polyester fibres \n\n(4) cellulose fibres\n\n YOUR CHOISE IS :");

                scanf("%d", &cans5);
                if (cans5 == 1)
                {
                    cscore++;
                }
            }

            if (code1 == 4 || code2 == 4 || code3 == 4)
            {
                system("cls");
                heading();
                printf("\n\n BASIC MCQ TEST OF BIOLOGY");

                printf("\n\n\nQUESTION NO 1:\n\n");
                printf("\n\nIdentify the WRONG match of the crop variety and its resistance to pest or disease. \n\n(1) Pusa Shubhra curl blight and black rot.  \n\n(2) Pusa Sawni and Pusa A4 ---- Shoot and fruit borer.  \n\n(3) Pusa sadabahar ---- stem borer and aphids \n\n(4) Pusa Gaurav - - aphids\n\n YOUR CHOISE IS :");

                scanf("%d", &bans1);
                if (bans1 == 3)
                {
                    bscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 2:\n\n");
                printf("\n\nCapacity of living nucleated cell to differentiate into any other type of cell and form a complete new organism is called \n\n(1) totipotency  \n\n(2) polymorphism 2  \n\n(3) autophagy \n\n(4) heterophagy\n\n YOUR CHOISE IS :");

                scanf("%d", &bans2);
                if (bans2 == 1)
                {
                    bscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 3:\n\n");
                printf("\n\nThe first germinal layer formed in human embryo is \n\n(1) mesoderm  \n\n(2) trophoectoderm  \n\n(3) ectoderm \n\n(4) endoderm\n\n YOUR CHOISE IS :");

                scanf("%d", &bans3);
                if (bans3 == 4)
                {
                    bscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 4:\n\n");
                printf("\n\nThe anticoagulant 'heparin' is secreted by \n\n(1) mast cells  \n\n(2) adipocytes  \n\n(3) macrophages \n\n(4) fibroblasts\n\n YOUR CHOISE IS :");

                scanf("%d", &bans4);
                if (bans4 == 1)
                {
                    bscore++;
                }
                system("cls");
                heading();

                printf("\n\n\nQUESTION NO 5:\n\n");
                printf("\n\nSilage supplemented with oil cakes, vitamins etc makes up good feed for rearing breeds of \n\n(1) buffalo  \n\n(2) fowl  \n\n(3) carp \n\n(4) silkworm\n\n YOUR CHOISE IS :");

                scanf("%d", &bans5);
                if (bans5 == 1)
                {
                    bscore++;
                }
            }

            system("cls");
            heading();
            // RESULT
            system("color 8F");

            printf(" \n\n\n WE ARE PREPARING YOUR RESULT \n ");

            while (COUND != 0)
            {
                printf("PLEASE WAIT FOR : %d \r", COUND);

                COUND--;
                sleep(1);
            }
            system("cls");
            heading();
            printf("\n---------------------------------------------------------------------------------------------------\n");

            printf("\n CONGRATULATIONS %s %s \n\n", name1, name2);
            loading();
            system("cls");
            heading();
            printf("\n\n---------------------------------------------------------------------------------------------------\n");
            printf("---------------------------------------/    RESULT    /--------------------------------------------\n\n");

            printf(" NAME :   \t %s %s\n", name1, name2);
            printf(" DATE :\t\t%s", ctime(&t));
            printf(" AGE:     \t %d \n\n", age);

            printf("\tMATHS     :%.2f\n", pom1);
            printf("\tPHYSICS   :%.2f\n", pom2);
            printf("\tCHEMISTRY :%.2f\n", pom3);
            printf("\tBIOLOGY   :%.2f\n", pom4);
            printf("\n---------------------------------------------------------------------------------------------------\n");
            printf("---------------------------------------------------------------------------------------------------\n");

            printf("\n Maximum Marks obtaind in subject \n");
            printf("\n -------------------------------------------- \n");
            printf("\n| SUBJECT   MARKS \t      LOW \t AVERAGE \t GOOD   \t EXCELENT      | \n");
            int n = 10, m;
            if (code1 == 1 || code2 == 1 || code3 == 1)
            {

                m = mscore * n;
                printf("\n\n| MATHS           %d | \t ", mscore);

                for (int i = 0; i <= m; i++)
                {
                    printf("%C", 177);
                }
            }
            if (code1 == 2 || code2 == 2 || code3 == 2)
            {
                m = pscore * n;
                printf("\n\n| PHYSICS         %d | \t ", pscore);

                for (int i = 0; i <= m; i++)
                {
                    printf("%C", 177);
                }
            }
            if (code1 == 3 || code2 == 3 || code3 == 3)
            {
                m = cscore * n;
                printf("\n\n| CHEMISTRY       %d | \t ", cscore);

                for (int i = 0; i <= m; i++)
                {
                    printf("%C", 177);
                }
            }

            if (code1 == 4 || code2 == 4 || code3 == 4)
            {
                m = bscore * n;
                printf("\n\n| BIOLOGY         %d | \t ", bscore);

                for (int i = 0; i <= m; i++)
                {
                    printf("%C", 177);
                }
            }

            fp = fopen("result.txt", "a");
            fprintf(fp, "%s %s\t\t  %d\t  %d\t  %d\t  %d\t  %s\n", name1, name2, mscore, pscore, cscore, bscore, ctime(&t));
            fclose(fp);

            printf("\n -------------------------------------------- \n");

            (mscore >= pscore && mscore >= bscore && mscore >= cscore) ? printf("\n YOU ARE GOOD IN MATHS \n\n HERE ARE YOUR CARRIER OPPORTUNITIES: \n 1.CET[PCM],JEE advance,BITSAT,SRMJEE--> (B.Tech) & Bachelors of Architecture , Marine Engineering & Naval Architecture , Aerospace Engineer\n 2.National Defence Academy (NDA) & Bachelors of Computer Applications\n 3.(B.Sc) , College Math Professor , Economist\n ") : printf(" ");

            (pscore >= bscore && pscore >= mscore && pscore >= cscore) ? printf("\n YOU ARE GOOD IN PHYSICS \n\n HERE ARE YOUR CARRIER OPPORTUNITIES: \n 1.CET[PCM], JEE advance , BITSAT , SRMJEE--> B-tech Engineering\n 2.NEET,CET[PCB]--> Medical Field\n 3.GATE--> [M-tech/M.Sc/M.E Engineering] , Researchers, PSUs\n ") : printf(" ");

            (cscore >= pscore && cscore >= bscore && cscore >= mscore) ? printf("\n YOU ARE GOOD IN CHEMISTRY \n\n HERE ARE YOUR CARRIER OPPORTUNITIES: \n 1.Analytical Chemist & Forensic Expert\n 2.CET[PCM], JEE advance , BITSAT , SRMJEE--> Chemical Engineer & Cheminformatics Data Scientist\n 3.Industrial Management , Chemical Health & Safety Professional\n ") : printf(" ");

            (bscore >= pscore && bscore >= mscore && bscore >= cscore) ? printf("\n YOU ARE GOOD IN BIOLOGY \n\n HERE ARE YOUR CARRIER OPPORTUNITIES: \n 1.NEET--> MBBS[Doctor] , Genetic counselor & Forensic Scientist\n 2.Research Scientist or Medical and Health Services Manager\n 3.Health communications specialist and Health educator\n ") : printf(" ");
            return 0;
        }
    }
}

// User Define Fuctions For Our Simplicity
void heading()
{

    printf("\n\t\t\t\t\t\t----------------------------------------\t\t\t\t\n");
    printf("\n\t\t\t\t\t\t\t  PREDICT MY FUTURE\t\t\t\t\n");
    printf("\n\t\t\t\t\t\t----------------------------------------\t\t\t\t\n");
}
int loading()
{

    printf("\n\n\t\t\t\t\t\t\t          LOADING\n");
    printf("\t\t\t\t\t\t");
    {
        for (int i = 0; i < 4; i++)
        {

            printf("%C%C%C%C%C%C%C%C%C%C", 177, 177, 177, 177, 177, 177, 177, 177, 177, 177);
            sleep(1);
        }
    }
}
void inf()
{
    printf("\n\t\t\t\t\t----------------------------------------\t\t\t\t\n");
    printf("\n\t\t\t\t\tPredict My Future!\t\t\t\t\n");
    printf("\n\t\t\t\t\tPredict my future! Take this future test now and find out - \t\t\t\t\n");
    printf("\n\t\t\t\t\tare you destined to live happily ever? Or will you\t\t\t\t\n");
    printf("\n\t\t\t\t\tspend a few adventurous years lost in the Himalayas?\t\t\t\t\n");
    printf("\n\t\t\t\t\tonly the most honest answers will give\t\t\t\t\n");
    printf("\n\t\t\t\t\tyou the truest glimpse into your future.\t\t\t\t\n");

    printf("\n\t\t\t\t\t----------------------------------------\t\t\t\t\n");
    printf("\n\t\t\t\t\t\tPress Enter To START ");
}
void times()
{
    time_t t;
    time(&t);

    printf("%s", ctime(&t));
}
