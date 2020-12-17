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

int main(){
	printf ("   _________________________________________________________________________\n");
    printf ("  / _______________________________________________________________________ \\\n");
    printf (" / /                                                                       \\ \\\n");                                                              
    printf (" | |          ____       ______    ______       ____      _____   ___       | |\n");                                                                                                             
    printf (" | |         /    \\     /  ____|  |  ____|     /    \\     |    \\ |  |       | |\n");                                                                                                        
    printf (" | |        /  __  \\    | |____   | |____     /  __  \\    |     \\|  |       | |\n");                                                                                                   
    printf (" | |       /  /__\\  \\   |____  |  |  ____|   /  /__\\  \\   |  |\\  \\  |       | |\n");                                                                                              
    printf (" | |      /  /    \\  \\   ____| |  | |____   /  /    \\  \\  |  | \\    |       | |\n");                                                                                         
    printf (" | |     /__/      \\__\\ |______/  |______| /__/      \\__\\ |__|  \\___|       | |\n");                                                                                    
    printf (" | |                                                                        | |\n");                                                                               
    printf (" | |                                                                        | |\n");                                                                                                            
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");      
    printf (" | |                                                                        | |\n");      
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" | |                                                                        | |\n");                                                                                                                    
    printf (" \\ \\________________________________________________________________________/ /\n");                                                             
    printf ("  \\__________________________________________________________________________/\n");
    gotoxy(33,12);printf("ASEAN Converter");
    gotoxy(14,13);printf("___________________________________________________");
    gotoxy(14,14);printf("| | Country |  Currency Rate | Currency in Rupiah |");
    gotoxy(14,15);printf("|_|_________|________________|____________________|");
    gotoxy(14,16);printf("|1|Malaysia |  0.29 Ringgit  |    = Rp. 1000      |");
    gotoxy(14,17);printf("|2|Thailand |  2.12 bath     |    = Rp. 1000      |");
    gotoxy(14,18);printf("|3|Singapur |  0.094 SGD     |    = Rp. 1000      |");
    gotoxy(14,19);printf("|4|Vietnam  |  1,642 dong    |    = Rp. 1000      |");
    gotoxy(14,20);printf("|5|Laos     |  659.20 Lao    |    = Rp. 1000      |");
    gotoxy(14,21);printf("|6|Filipin  |  3.41 peso     |    = Rp. 1000      |");
    gotoxy(14,22);printf("|7|Brunei   |  0.094 BND     |    = Rp. 1000      |");
    gotoxy(14,23);printf("|8|Myanmar  |  96.81 Kyat    |    = Rp. 1000      |");
    gotoxy(14,24);printf("|9|Kamboja  |  285.96 Riel   |    = Rp. 1000      |");
    gotoxy(14,25);printf("|_|_________|________________|____________________|");
    
    gotoxy(50,27);
    return 0;
}
