#include <stdio.h>
#include "WindowModule.h"
#include "glfw/GlfwModule.h"

int main()
{
#ifdef ENIGMA_GLFW
    Glfw_InitFunctions();
#endif // ENIGMA_GLFW
    Window *wnd = CreateWindow();
    SetTitle(wnd, "snaulX");
    printf("%s\n", GetTitle(wnd));
}
