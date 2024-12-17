#include <iostream>
#include <conio.h>

int main(){
        bool isRunning = true;
        char opt = '\0';
        while (isRunning) {
            std::cout << "(l)load (s)ave (a)dd (q)uit (p)rint"
                << std::endl;
            opt = _getch();
            switch(opt){
                    case 'l':
                            std::cout << "Loading..." << std::endl;
                            break;        
                    case 's':
                            std::cout << "Saving..." << std::endl;
                            break;        
                    case 'a':
                            std::cout << "Adding..." << std::endl;
                            break;        
                    case 'q':
                            std::cout << "Bye..." << std::endl;
                            isRunning = false;
                            break;        
                    case 'p':
                            std::cout << "Printing..." << std::endl;
                            break;        
            }
        }
        return 0;
}
