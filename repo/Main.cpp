#include <ncurses.h>
#include <iostream>
using namespace std;
#include<string>

bool vivo(char*);

int main(){
    bool vive=true;
    char *usuario="home";
    char *computadora="fox-Pejuan";
    char input[30];
    initscr();
    
    raw();
    while (vive)
    {
        printw("%s@%s$ ",usuario,computadora);
        refresh();
        getstr(input);
        if (input[0]=='c'&&input[1]=='l'&&input[2]=='e'&&input[3]=='a'&&input[4]=='r')
        {
            clear();
            refresh();
        }
        
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
        
    }
    
}