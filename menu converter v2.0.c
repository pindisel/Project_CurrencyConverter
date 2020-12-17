#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>



COORD setCoord={};
void gotoxy(int x , int y){
    setCoord.X=x;
    setCoord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),setCoord);
}



void arrow(int ap, int rp){
    if (rp == ap){
    if (rp == 1){
    printf ("Rp.  ");
	}
   else if (rp == 2){
   	printf ("%c	",155);
   }
    else if (rp == 3){
   	printf ("%c	",157);
   }
    else if (rp == 4){
   	printf ("%c	",156);
   }
    }
    

	
    else {
        printf("      ");
    }

}

void menu(){
    int pos = 1;
    int kpress = 0;
    #define max 4
    #define min 1

    while(kpress !=13){
    system("cls");
	printf ("   ________________________________________________________________________________\n");
    printf ("  / _____________________________________________________________________________  \\\n");
    printf (" / /     __     __                                                __     __       \\ \\\n");                                                              
    printf (" | |     \\ \\   / /                                                \\ \\   / /       | |\n");                                                                                                             
    printf (" | |      \\ \\ / /       __    __   ______   __   _   _      _      \\ \\ / /        | |\n");                                                                                                        
    printf (" | |       \\   /       |  \\  /  | |  ____| |  \\ | | | |    | |      \\   /         | |\n");                                                                                                   
    printf (" | |     ___|_|___     |   \\/   | | |____  |   \\| | | |    | |    ___|_|___       | |\n");                                                                                              
    printf (" | |    |___|_|___|    | |\\__/| | |  ____| | |\\ | | | |    | |   |___|_|___|      | |\n");                                                                                         
    printf (" | |     ___|_|___     |_|    |_| | |____  |_| \\__| |  \\__/  |    ___|_|___       | |\n");                                                                                    
    printf (" | |    |___|_|___|               |______|           \\______/    |___|_|___|      | |\n");                                                                               
    printf (" | |        |_|                                                      |_|          | |\n");                                                                                                            
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");      
    printf (" | |                                                                              | |\n");      
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" | |                                                                              | |\n");                                                                                                                    
    printf (" \\ \\______________________________________________________________________________/ /\n");                                                             
    printf ("  \\_________________________________________________________________________________/\n");
	gotoxy(33,14);printf("$$$$$$$$$$$$$$$$$$$$$$$$$");
	gotoxy(33,16);
    arrow(1,pos);printf("Start Convert\n");
    gotoxy(33,18);
    arrow(2,pos);printf("ASEAN Currency\n");
    gotoxy(33,20);
    arrow(3,pos);printf("About\n");
    gotoxy(33,22);
    arrow(4,pos);printf("EXIT\n");
    
    kpress = getch();

    if (kpress== 80 && pos != max){
        pos++;
    }
    else if (kpress== 72 && pos != min){
        pos--;
    }
    else{
        pos = pos;
    }

    }
    switch (pos){
    case 1:
        system("cls");
        printf("Convert selected");
        getch();
        menu();
        break;
    case 2:
        system("cls");
        printf("ASEAN Currency selected");
        getch();
        menu();
        break;
    case 3:
        system("cls");
        printf("About selected");
        getch();
        menu();
        break;
    case 4:
        return 0;
        break;
    }

}

int main() {
system("cls");
    menu();
    getch();
    return 0;
}


