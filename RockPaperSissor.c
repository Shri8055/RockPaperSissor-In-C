#include<stdio.h>
#include<conio.h>
#include<time.h>
void main(){
    int p2,rock,paper,sissor,sec=5;
    char p1;
    printf("\n[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]");
    printf("\n\nROCK ROCK ROCK ROCK\tPAPER\tSISSOR SISSOR SISSOR SISSOR\nROCK ROCK ROCK\t\tPAPER\t       SISSOR SISSOR SISSOR\nROCK ROCK\t\tPAPER\t\t      SISSOR SISSOR\nROCK\t\t\tPAPER\t\t\t     SISSOR");
    printf("\n----------------- ROCK\tPAPER\tSISSOR --------------------\n");
    printf("ROCK \t\t\tPAPER\t\t\t     SISSOR\nROCK ROCK\t\tPAPER\t\t      SISSOR SISSOR\nROCK ROCK ROCK\t\tPAPER\t       SISSOR SISSOR SISSOR\nROCK ROCK ROCK ROCK\tPAPER   SISSOR SISSOR SISSOR SISSOR\n\n");
    printf("[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n\n");
    printf("\t\t  Choose ur Move.");
    printf("\n\nPlayer 1\t\t\tPlayer 2\n\n#CONTROLS Left Keyboard\t\t#CONTROLS right Numpad\n\nA => ROCK\t\t\t1 => ROCK\nS => PAPER\t\t\t2 => PAPER\nD => SISSOR\t\t\t3 => SISSOR\n\n");
    printf("Enter Player 1 Move: ");
    p1 = getch();
    printf("*\n");
    printf("Enter Player 2 Move: ");
    p2 = getch();
    printf("*\n");
    while(sec>0){
        if(sec==5){
            printf("\n\n5 5 5 5 5 5 5 5 5\n5 5 5 5 5 5 5 5 5\n5 5 5 5\n5 5 5 5\n5 5 5 5 5 5 5 5 5\n5 5 5 5 5 5 5 5 5\n\t5 5 5 5 5\n\t5 5 5 5 5\n5 5 5 5 5 5 5 5 5\n5 5 5 5 5 5 5 5\n5 5 5 5 5 5 5\n5 5 5 5 5 5\n");
        }
        if(sec==4){
            printf("\n\n\t4 4 4 4 4\n      4 4 4 4 4\n    4 4 4 4 4\n  4 4 4 4 4\n4 4 4 4 4\n4 4 4 4 4 4 4 4 4\n4 4 4 4 4 4 4 4 4\n4 4 4 4 4 4 4 4 4\n\t4 4 4 4 4\n\t4 4 4 4 4\n\t4 4 4 4 4\n\t4 4 4 4 4");
        }
        if(sec==3){
            printf("\n\n3 3 3 3 3 3 3 3\n3 3 3 3 3 3 3 3 3\n3 3 3     3 3 3 3\n\t3 3 3 3\n      3 3 3 3\n  3 3 3 3\n3 3 3 3 3 3 3\n  3 3 3 3 3 3 3\n\t3 3 3 3 3\n\t3 3 3 3 3\n3 3 3 3 3 3 3 3\n3 3 3 3 3 3 3\n");
        }
        if(sec==2){
            printf("\n\n2 2 2 2 2 2 2 2 2\n2 2 2 2 2 2 2 2 2\n2 2 2 2 2 2 2 2 2\n2 2 2       2 2 2\n2 2 2     2 2 2 2\n\t2 2 2 2\n      2 2 2 2\n    2 2 2 2\n  2 2 2 2\n2 2 2 2\n2 2 2 2 2 2 2 2 2\n2 2 2 2 2 2 2 2 2\n2 2 2 2 2 2 2 2 2\n");
        }
        if(sec==1){
            printf("\n\n      1 1 1\n    1 1 1 1\n  1 1 1 1 1\n1 1 1 1 1 1\n      1 1 1\n      1 1 1\n      1 1 1\n      1 1 1\n      1 1 1\n      1 1 1\n  1 1 1 1 1 1 1 1\n1 1 1 1 1 1 1 1 1\n1 1 1 1 1 1 1 1\n");
        }
        fflush(stdout);
        clock_t stop = clock()+CLOCKS_PER_SEC;
        while(clock()<stop){ }
        sec--;
    }
    if((p1=='a'&&p2=='3')||(p1=='s'&&p2=='1')||(p1=='d'&&p2=='2')){
        printf("\n\n  P P P P P P             1 1 1          W      W      W\nP P P P P P P P         1 1 1 1         W W    W W    W W\nP P P P   P P P P     1 1 1 1 1         W W   W W W   W W\nP P P P   P P P P   1 1 1 1 1 1         W W   W W W   W W\nP P P P   P P P P   1 1   1 1 1         W W   W W W   W W\nP P P P P P P P           1 1 1         W W   W W W   W W\nP P P P P P P             1 1 1         W W   W W W   W W\nP P P P                   1 1 1         W W   W W W   W W\nP P P P                   1 1 1         W W   W W W   W W\nP P P P               1 1 1 1 1 1 1 1   W W   W W W   W W\nP P P P             1 1 1 1 1 1 1 1 1   W W W W W W W W W\nP P P               1 1 1 1 1 1 1 1       W W W W W W W\n");
    }
    else if((p1=='a'&&p2=='2')||(p1=='s'&&p2=='3')||(p1=='d'&&p2=='1')){
        printf("\n\n  P P P P P P             2 2 2 2        W      W      W\nP P P P P P P P         2 2 2 2 2 2     W W    W W    W W\nP P P P   P P P P     2 2 2 2 2 2 2 2   W W   W W W   W W\nP P P P   P P P P   2 2 2     2 2 2 2   W W   W W W   W W\nP P P P   P P P P             2 2 2 2   W W   W W W   W W\nP P P P P P P P             2 2 2 2     W W   W W W   W W\nP P P P P P P             2 2 2 2       W W   W W W   W W\nP P P P                 2 2 2 2         W W   W W W   W W\nP P P P               2 2 2 2           W W   W W W   W W\nP P P P             2 2 2 2 2 2 2 2 2   W W   W W W   W W\nP P P P             2 2 2 2 2 2 2 2 2   W W W W W W W W W\nP P P               2 2 2 2 2 2 2 2 2     W W W W W W W\n");
    }
    else if((p1=='a'&&p2=='1')||(p1=='s'&&p2=='2')||(p1=='d'&&p2=='3')){
        printf("\n\nT T T T T T T T T   I I I I I I I I I   E E E E E E E E E   ! ! ! ! !\nT T T T T T T T T   I I I I I I I I I   E E E E E E E E E    ! ! ! !\nT T T T T T T T T   I I I I I I I I I   E E E E E E E E E     ! ! !\n      T T T               I I I         E E E E              ! ! ! !\n      T T T               I I I         E E E E E E E         ! ! !\n      T T T               I I I         E E E E E E E        ! ! ! !\n      T T T               I I I         E E E E E E E         ! ! !\n      T T T               I I I         E E E E\n      T T T               I I I         E E E E                ! !\n      T T T         I I I I I I I I I   E E E E E E E E E     ! ! !\n      T T T         I I I I I I I I I   E E E E E E E E E     ! ! !\n      T T T         I I I I I I I I I   E E E E E E E E E      ! !\n");
    }
    printf("Player 1 Move: %c\n", p1);
    printf("Player 2 Move: %c\n", p2);
}