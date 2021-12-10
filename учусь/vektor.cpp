#include <windows.h>
#include <math.h>
#include <iostream>


int main() {
    std::cout << "press f11";
    Sleep(3000);
    system("cls");
    HDC hDC = GetDC(GetConsoleWindow());
    HPEN pepe = CreatePen(PS_SOLID, 2, RGB(0, 200, 0));
    SelectObject(hDC, pepe);
    while (true)
    {
        POINT p;
        if (GetKeyState(VK_CONTROL)) {
            if (GetCursorPos(&p))
            {
                p.x;
                p.y;
            }
            LineTo(hDC, p.x, p.y  );
        }
    }
    return 0;
}