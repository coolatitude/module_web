#include "main_menu.h"

void 	launch_c(char lang)
{
	char *lang_path;

	lang_path = (char *)calloc(100, sizeof(char));
	strcpy(lang_path, "cd ~/petit_bain/module_c/scripts && sh setlanguage.sh ");
	if (lang == EN)
		strcat(lang_path, "en > /dev/null");
	else if (lang == FR)
		strcat(lang_path, "fr > /dev/null");
	else if (lang == NL)
		strcat(lang_path, "nl > /dev/null");
	system(lang_path);
	endwin();
	system("clear");
	printf("write howtoplay and press ENTER\n");
	system("cd ~/petit_bain/module_c/intro && ./intro");
}

void 	launch_shell(char lang)
{
	char *lang_path;

	clear();
	mvprintw(0,0, "Installing shell module...");
	refresh();
	system("sh ~/petit_bain/module_shell/ShellGame/delete.sh");
	lang_path = (char *)calloc(100, sizeof(char));
	strcpy(lang_path, "sh ~/petit_bain/module_shell/ShellGame/script.sh ");
	if (lang == EN)
		strcat(lang_path, "en");
	else if (lang == FR)
		strcat(lang_path, "fr");
	else if (lang == NL)
		strcat(lang_path, "nl");
	system(lang_path);
	endwin();
	system("source ~/Documents/PetitBainShell/playshell.sh");

}

void 	launch_web(char lang)
{
	if (lang == EN)
		system("open ~/petit_bain/module_web_en/index.html");
	else if (lang == FR)
		system("open ~/petit_bain/module_web_fr/index.html");
	else if (lang == NL)
		system("open ~/petit_bain/module_web_nl/index.html");
}
