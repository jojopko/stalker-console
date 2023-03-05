#ifndef _COLOREDTEXT_H_
#define _COLOREDTEXT_H_

enum Color {
    WHITE,
    BLACK,
    RED,
    BLUE,
    YELLOW
};

struct ColoredText{
    char *text;
    Color color;
};

// Создает структуру цветного текста 
ColoredText create_text(char *text, Color color);

// Вывод на экран
void print_colored_text(ColoredText);

#endif