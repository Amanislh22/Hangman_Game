#ifndef SET_IMAGES_H
#define SET_IMAGES_H
#include <QPixmap>

class Set_images
{
public:
    Set_images();
    QPixmap* set_hangman_image(int error);
    QPixmap* set_heart_emoji(bool val);

private:
    QPixmap *pixmap;// Declare pixmap pointer


};

#endif // SET_IMAGES_H
