#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
    #define clear() system("cls")
    #define Init() system("chcp 65001");
#else
    #define clear() system("clear")
    #define Init()
#endif

int width = 0, height = 0, ptrn = 0;
char **grid;

void sleep(float duration)//in seconds
{
    float time_act = (float)clock()/CLOCKS_PER_SEC;
    while(time_act+duration > (float)clock()/CLOCKS_PER_SEC){}
}

void flush(char buffer)
{
    if (buffer == 'i')
    {
        int c;
        while((c = getchar()) != '\n' && c != EOF){}
    }
    else if (buffer == 'o')
        fflush(stdout);
}

void Menu_Print(int sel)
{
    if(sel == 0 || sel == 1 || sel == 2)
    {
        printf("╔════════════════════╗\n");
        printf("║        █ █ ███     ║\n");
        printf("║    ███ █ █   █     ║\n");
        printf("║        ███  █      ║\n");
        printf("╠════════════════════╣\n");
        printf("║     1   2   3      ║\n");
        printf("╠════════════════════╣\n");
        printf("║ 4. Random          ║\n");
        printf("║ 5. Random Sym H    ║\n");
        printf("║ 6. Random Sym V    ║\n");
        printf("╠════════════════════╣\n");
        printf("║ Choose The Pattern ║\n");
        printf("╠════════════════════╣\n");
    }
    if(sel == 1 || sel == 2)
    {
        printf("╠── %d                ║\n", ptrn);
        printf("╠════════════════════╣\n");
        printf("║Choose The Grid Size║\n");
        printf("╠════════════════════╝\n");
    }
    if(sel == 2)
    {
        printf("╠─Grid Height- %d\n", height);
        printf("╠─Grid Width-- %d\n", width);
        printf("╚════════════════════#\n");
    }
    if(sel == 3)
    {
        clear();
        printf("\n");
        printf("     ╔════════════════════╗\n");
        printf("     CONFIGURATION COMPLETE\n");
        printf("     ╚════════════════════╝\n");
    }
}

void Menu()
{
    int chk_ptrn = 1;
    int chk_stab = 1;
    int i;
    while (chk_ptrn == 1)
    {
        clear();
        Menu_Print(0);
        printf("╠── ");
        scanf("%d", &ptrn);
        flush('i');
        if(ptrn == 1 || ptrn == 2 || ptrn == 3 || ptrn == 4 || ptrn == 5 || ptrn == 6)
        {
            chk_ptrn = 0;
        }
        else
        {
            chk_ptrn = 1;
            ptrn = 0;
        }
    }

    while (chk_stab == 1)
    {
        clear();
        Menu_Print(1);
        printf("╠─Grid Height- ");
        scanf("%d", &height);
        flush('i');
        if (height < 10 || height > 200)
            chk_stab = 1;
        else
        {
            printf("╠─Grid Width-- ");
            scanf("%d", &width);
            flush('i');
            if (width < 10 || width > 200)
                chk_stab = 1;
            else
            {
                clear();
                chk_stab = 0;
                Menu_Print(2);
            }
        }
    }

    sleep(0.5);
    Menu_Print(3);
    sleep(0.5);
    clear();
    printf("Loading Game :\n");
    printf("\n  ");
    for(i=0;i<30;i++)
    {
        printf("█");
        sleep(0.05);
        flush('o');
    }
    printf("\n");
}
/*
int InitGame()
{}

int AllocGame(int motif)
{}

void DrawGame()
{}
*/
int main(int argc, char **argv)
{
    Init()
    Menu();
}
