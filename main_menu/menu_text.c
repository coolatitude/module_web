#include "main_menu.h"

char	**set_texts(int lang)
{
	char	**txt;

	txt = (char**)malloc(sizeof(char *) * 6);
	txt[0] = (char*)calloc(50, sizeof(char));
	txt[1] = (char*)calloc(50, sizeof(char));
	txt[2] = (char*)calloc(50, sizeof(char));
	txt[3] = (char*)calloc(50, sizeof(char));
	txt[4] = (char*)calloc(50, sizeof(char));
	txt[5] = 0;
	copy_texts(txt, lang);
	return (txt);
}

void 	copy_texts(char **txt, int lang)
{
	if (lang == EN)
	{
		strcpy(txt[0], txt_en_1);
		strcpy(txt[1], txt_en_2);
		strcpy(txt[2], txt_en_3);
		strcpy(txt[3], txt_en_4);
		strcpy(txt[4], txt_en_5);
	}
	else if (lang == FR)
	{
		strcpy(txt[0], txt_fr_1);
		strcpy(txt[1], txt_fr_2);
		strcpy(txt[2], txt_fr_3);
		strcpy(txt[3], txt_fr_4);
		strcpy(txt[4], txt_fr_5);
	}
	else if (lang == NL)
	{
		strcpy(txt[0], txt_nl_1);
		strcpy(txt[1], txt_nl_2);
		strcpy(txt[2], txt_nl_3);
		strcpy(txt[3], txt_nl_4);
		strcpy(txt[4], txt_nl_5);
	}

}

int 	print_text(int pos_y, char **txt)
{
	int		pos_x;

	pos_y -= 12;
	init_pair(53, 250, 0);
	attron(COLOR_PAIR(53));
	pos_x = (COLS / 2) - (strlen(txt[0]) / 2);
	mvprintw(pos_y++,pos_x, txt[0]);
	pos_x = (COLS / 2) - (strlen(txt[1]) / 2);
	mvprintw(pos_y++,pos_x, txt[1]);
	pos_x = (COLS / 2) - (strlen(txt[2]) / 2);
	mvprintw(pos_y++,pos_x, txt[2]);
	pos_x = (COLS / 2) - (strlen(txt[3]) / 2);
	mvprintw(pos_y++,pos_x, txt[3]);
	pos_x = (COLS / 2) - (strlen(txt[4]) / 2);
	mvprintw(pos_y++,pos_x, txt[4]);
	attroff(COLOR_PAIR(53));
	return(pos_y);
}
