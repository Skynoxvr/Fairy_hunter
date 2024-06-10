/*
** EPITECH PROJECT, 2023
** oui
** File description:
** proto
*/

#pragma once
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Network.h>
#include <SFML/Audio.h>

typedef struct music_s {
    sfMusic *soundplay;
    int pause;
    int volume;
}music_t;

typedef struct button_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    sfIntRect rect;
}button_t;

typedef struct image_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f vector;
}image_t;

typedef struct mouse_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2i mouse;
    sfVector2f cursor_origin;
} mouse_t;

typedef struct clockpar_s {
    sfClock *clock;
    sfTime time;
} clockpar_t;

typedef struct menu_s {
    image_t *backgr;
    button_t *start;
    button_t *option;
    button_t *leave;
    mouse_t *cursor;
}menu_t;

typedef struct party_s {
    image_t *backgr;
    image_t *duck;
    clockpar_t *clock;
    mouse_t *cursor;
}party_t;

typedef struct settings_s {
    image_t *backgr;
    mouse_t *cursor;
}settings_t;

typedef struct choice_s {
    int menu;
    int party;
    int settings;
}choice_t;

typedef struct game_s {
    menu_t *menu;
    party_t *party;
    settings_t *settings;
    sfRenderWindow *window;
    sfWindow *win;
    sfEvent event;
    music_t *music;
    choice_t *choice;
    mouse_t *cursor;
    int nb_life;
}game_t;

game_t *init_game(void);
void menu_background(game_t *game);
void menu_start(game_t *game);
void menu_options(game_t *game);
void menu_leave(game_t *game);
void menu_cursor(game_t *game);
void display_menu(game_t *game);
void display_cursor(game_t *game);

void party_background(game_t *game);
void display_party(game_t *game);
void party_duck(game_t *game);
void anim_duck(game_t *game);
void party_cursor(game_t *game);
void mv_duck(game_t *game);

void settings_background(game_t *game);
void settings_cursor(game_t *game);
void display_settings(game_t *game);

void display_window(game_t *game);

void general_events(game_t *game);
void events_choice(game_t *game);
void page_choice(game_t *game);

void cursor_events(game_t *game);
void music_events(game_t *game);
void music(game_t *game);

void init_settings(game_t *game);
void init_party(game_t *game);
void init_menu(game_t *game);
void clock_init(game_t *game);
void anim_clock(game_t *game);
void my_putstr(char const *str);
void all_info(void);
void firstline(void);
void info(void);
void middleline2(void);
