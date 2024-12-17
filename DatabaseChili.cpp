#include <iostream>
#include <conio.h>

int main()
{
        bool isRunning = true;
        char opt = '\0';
        while (isRunning) {
            if (opt == 's') {
                return 0;
            }
            std::cout << "(l)load (s)ave (a)dd (q)uit (p)rint"
                << std::endl;
            opt = _getch();

            if ((opt != 'l') &&
                (opt != 's') &&
                (opt != 'a') &&
                (opt != 'q') &&
                (opt != 'p')) {
                std::cout << "Invalid input.." << std::endl;
                continue;
            }
        }
        return 0;
}
