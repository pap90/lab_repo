#include <ncurses.h>
#include <iostream>
using namespace std;
#include<string>

bool vivo(char*);

int main(){
    bool vive=true;
    char *usuario="home";
    char *computadora="fox-Pejuan";
    char *direcorio="";
    char input[30];
    initscr();
    
    raw();
    while (vive)
    {
        printw("%s@%s$ ",usuario,computadora,direcorio);
        getch();
        refresh();
        getstr(input);
        vive=vivo(input);
    }
    endwin();
    
    

}
bool vivo(char* comando){
    if (sizeof(comando)>=4)
    {
        if (comando[0=='e']&&comando[1]=='x'&&comando[2]=='i'&&comando[3]=='t')
        {
            return false;
        }
        
    }else {
        return true;
    }
    
}