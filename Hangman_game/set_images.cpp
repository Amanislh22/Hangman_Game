#include "set_images.h"

Set_images::Set_images()
{
    pixmap = new QPixmap; // Declare pixmap pointer

}
QPixmap *Set_images::set_hangman_image(int error)
{

    switch (error)
    {
    case 0:
        *pixmap = QPixmap(":/new/images_hangman/10.jpg");
        break;
    case 1:
        *pixmap = QPixmap(":/new/images_hangman/8.jpg");
        break;
    case 2:
        *pixmap = QPixmap(":/new/images_hangman/7.jpg");

        break;
    case 3:
        *pixmap = QPixmap(":/new/images_hangman/6.jpg");

        break;
    case 4:
        *pixmap = QPixmap(":/new/images_hangman/5.jpg");

        break;
    case 5:
        *pixmap = QPixmap(":/new/images_hangman/4.jpg");

        break;
    case 6:
        *pixmap = QPixmap(":/new/images_hangman/3.jpg");

        break;
    case 7:
        *pixmap = QPixmap(":/new/images_hangman/2.jpg");

        break;
    case 8:
        *pixmap = QPixmap(":/new/images_hangman/1.jpg");
        break;
    default:
        *pixmap = QPixmap(":/new/images_hangman/0.jpg");
        break;
    }

    return pixmap; // Return the pointer to the QPixmap
}


QPixmap *Set_images::set_heart_emoji(bool val)
{   if (val)
        *pixmap = QPixmap(":/new/heart_emoji/heart_r.png");
    else
        *pixmap = QPixmap(":/new/heart_emoji/heart_cra_r_2.jpeg");

    return pixmap;
}

