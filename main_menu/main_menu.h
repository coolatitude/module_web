#ifndef MAIN_MENU_H
# define MAIN_MENU_H

# include <ncurses.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define txt_en_1 "PRESS 1 TO LAUNCH C MODULE"
# define txt_en_2 "PRESS 2 TO LAUNCH SHELL MODULE"
# define txt_en_3 "PRESS 3 TO LAUNCH WEB MODULE"
# define txt_en_4 "PRESS 4 TO SEE CREDITS"
# define txt_en_5 "PRESS Q TO QUIT"

# define txt_fr_1 "APPUYEZ SUR 1 POUR LANCER LE MODULE C"
# define txt_fr_2 "APPUYEZ SUR 2 POUR LANCER LE MODULE SHELL"
# define txt_fr_3 "APPUYEZ SUR 3 POUR LANCER LE MODULE WEB"
# define txt_fr_4 "APPUYEZ SUR 4 POUR VOIR LES CREDITS"
# define txt_fr_5 "APPUYEZ SUR Q POUR QUITTER"

# define txt_nl_1 "DRUK 1 OM DE C MODULE TE STARTEN"
# define txt_nl_2 "DRUK 2 OM DE SHELL MODULE TE STARTEN"
# define txt_nl_3 "DRUK 3 OM DE WEB MODULE TE STARTEN"
# define txt_nl_4 "DRUK 4 VOOR DE AFTITELING"
# define txt_nl_5 "DRUK Q OM DIT TE VERLATEN"

# define txt_launch_shell "LAUNCHING SHELL MODULE..."
# define txt_launch_shell2 "Press any key to continue..."

enum {EN, FR, NL};
enum {QUIT, MAIN, CREDITS};

/*
** menu_graphics.c
*/
int 	print_title(void);
int 	print_menu(int pos_y);
void	refresh_screen(char **txt);
int 	print_title_credits(char lang);
int 	print_credits(int pos_y);
void 	print_shell_intro(int lang);

/*
** menu_text.c
*/
void 	copy_texts(char **txt, int lang);
int 	print_text(int pos_y, char **txt);
char	**set_texts(int lang);

/*
** menu_init.c
*/
void	initialize_ncurses(void);
char	set_language(int ac, char **av);

/*
** menu_actions.c
*/
void 	launch_c(char lang);
void 	launch_shell(char lang);
void 	launch_web(char lang);

#endif
