// C Implementation for putpixel()

#include <graphics.h>

#include <stdio.h>

  

// driver code

int main()

{

    // gm is Graphics mode which is

    // a computer display mode that

    // generates image using pixels.

    // DETECT is a macro defined in

    // "graphics.h" header file

    int gd = DETECT, gm, color;

  

    // initgraph initializes the

    // graphics system by loading a

    // graphics driver from disk

    initgraph(&gd, &gm, "");

  

    // putpixel function

    putpixel(85, 35, GREEN);

    putpixel(30, 40, RED);



  

    getch();

  

    // closegraph function closes the

    // graphics mode and deallocates

    // all memory allocated by

    // graphics system .

    closegraph();

  

    return 0;

}
