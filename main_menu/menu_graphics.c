#include "main_menu.h"

int 	print_title(void)
{
	int pos_y;
	int pos_x;

	pos_y = 19;
	pos_x = (COLS / 2) - 50;
	init_pair(51, 1, 0);
	attron(COLOR_PAIR(51));
	mvprintw(pos_y++,pos_x, "                                                                                                    ");
	mvprintw(pos_y++,pos_x, "       *******   ******** ********** ** **********       ******        **      **  ****     **      ");
	mvprintw(pos_y++,pos_x, "      /**////** /**///// /////**/// /**/////**///       /*////**      ****    /** /**/**   /**      ");
	mvprintw(pos_y++,pos_x, "      /**   /** /**          /**    /**    /**          /*   /**     **//**   /** /**//**  /**      ");
	mvprintw(pos_y++,pos_x, "      /*******  /*******     /**    /**    /**          /******     **  //**  /** /** //** /**      ");
	attroff(COLOR_PAIR(51));
	init_pair(50, 88, 0);
	attron(COLOR_PAIR(50));
	mvprintw(pos_y++,pos_x, "      /**////   /**////      /**    /**    /**          /*//// **  ********** /** /**  //**/**      ");
	mvprintw(pos_y++,pos_x, "      /**       /**          /**    /**    /**          /*    /** /**//////** /** /**   //****      ");
	mvprintw(pos_y++,pos_x, "      /**       /********    /**    /**    /**          /*******  /**     /** /** /**    //***      ");
	mvprintw(pos_y++,pos_x, "      //        ////////     //     //     //           ///////   //      //  //  //      ///       ");
	mvprintw(pos_y++,pos_x, "                                                                                                    ");
	attroff(COLOR_PAIR(51));
	return(pos_y);
}

int 	print_menu(int pos_y)
{
	int pos_x;

	pos_y += 4;
	pos_x = (COLS / 2) - 53;
	init_pair(60, 130, 0);
	attron(COLOR_PAIR(60));
	mvprintw(pos_y++,pos_x, " ===========================================================================================================");
	mvprintw(pos_y++,pos_x, "/===========================================================================================================");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===                                                                                                    /===");
	mvprintw(pos_y++,pos_x, "/===========================================================================================================");
	mvprintw(pos_y++,pos_x, "/===========================================================================================================");
	mvprintw(pos_y++,pos_x, "////////////////////////////////////////////////////////////////////////////////////////////////////////////");
	pos_y++;
	mvprintw(pos_y++,pos_x, "                                             ECOLE 19 | 2018 ®                                              ");
	attroff(COLOR_PAIR(60));
	return(pos_y);
}

void	refresh_screen(char **txt)
{
	int pos_y;

	clear();
	pos_y = print_title();
	pos_y = print_menu(pos_y);
	print_text(pos_y, txt);
}

int 	print_title_credits(char lang)
{
	int pos_y;
	int pos_x;

	pos_y = 10;
	pos_x = (COLS / 2) - 31;
	if (lang == EN)
		mvprintw(pos_y,(COLS / 2) - (strlen(txt_en_5) / 2),txt_en_5);
	else if (lang == FR)
   		mvprintw(pos_y,(COLS / 2) - (strlen(txt_fr_5) / 2),txt_fr_5);
	else if (lang == NL)
   		mvprintw(pos_y,(COLS / 2) - (strlen(txt_nl_5) / 2),txt_nl_5);
	init_pair(51, 1, 0);
	attron(COLOR_PAIR(51));
	pos_y += 9;
	mvprintw(pos_y++,pos_x, "                                                               ");
	mvprintw(pos_y++,pos_x, "   ******  *******   ******** *******   ** **********  ********");
	mvprintw(pos_y++,pos_x, "  **////**/**////** /**///// /**////** /**/////**///  **////// ");
	mvprintw(pos_y++,pos_x, " **    // /**   /** /**      /**    /**/**    /**    /**       ");
	mvprintw(pos_y++,pos_x, "/**       /*******  /******* /**    /**/**    /**    /*********");
	attroff(COLOR_PAIR(51));
	init_pair(50, 88, 0);
	attron(COLOR_PAIR(50));
	mvprintw(pos_y++,pos_x, "/**       /**///**  /**////  /**    /**/**    /**    ////////**");
	mvprintw(pos_y++,pos_x, "//**    **/**  //** /**      /**    ** /**    /**           /**");
	mvprintw(pos_y++,pos_x, " //****** /**   //**/********/*******  /**    /**     ******** ");
	mvprintw(pos_y++,pos_x, "  //////  //     // //////// ///////   //     //     ////////  ");
	mvprintw(pos_y++,pos_x, "                                                               ");
	attroff(COLOR_PAIR(51));
	return(pos_y);
}

int 	print_credits(int pos_y)
{
	int pos_x;

	pos_y = 25;
	pos_x = (COLS / 2) - 31;
	init_pair(52, 250, 0);
	init_pair(53, 130, 0);
	pos_y += 9;
	attron(COLOR_PAIR(53));
	mvprintw(pos_y++,pos_x, "***************************************************************");
	mvprintw(pos_y++,pos_x, "|                    PROJECT COORDINATION                     |");
	mvprintw(pos_y++,pos_x, "***************************************************************");
	attron(COLOR_PAIR(52));
	mvprintw(pos_y++,pos_x, "                                                               ");
	mvprintw(pos_y++,pos_x, "     Samuel Jimenez AKA EsK | Gwenda Frocrain AKA Archimede    ");
	mvprintw(pos_y++,pos_x, "                                                               ");
	attron(COLOR_PAIR(53));
	mvprintw(pos_y++,pos_x, "***************************************************************");
	mvprintw(pos_y++,pos_x, "|                        EVENT MANAGER                        |");
	mvprintw(pos_y++,pos_x, "***************************************************************");
	attron(COLOR_PAIR(52));
	mvprintw(pos_y++,pos_x, "                                                               ");
	mvprintw(pos_y++,pos_x, "                     Emilie Peeters AKA EVE                    ");
	mvprintw(pos_y++,pos_x, "                                                               ");
	attron(COLOR_PAIR(53));
	mvprintw(pos_y++,pos_x, "***************************************************************");
	mvprintw(pos_y++,pos_x, "|                    C MODULE DEVELOPPERS                     |");
	mvprintw(pos_y++,pos_x, "***************************************************************");
	attron(COLOR_PAIR(52));
	mvprintw(pos_y++,pos_x, "                                                               ");
	mvprintw(pos_y++,pos_x, "                  Loic Siquet AKA YuuK (lead)                  ");
	mvprintw(pos_y++,pos_x, "                          Julien Drion                         ");
	mvprintw(pos_y++,pos_x, "                                                               ");
	attron(COLOR_PAIR(53));
	mvprintw(pos_y++,pos_x, "***************************************************************");
	mvprintw(pos_y++,pos_x, "|                  SHELL MODULE DEVELOPPERS                   |");
	mvprintw(pos_y++,pos_x, "***************************************************************");
	attron(COLOR_PAIR(52));
	mvprintw(pos_y++,pos_x, "                                                               ");
	mvprintw(pos_y++,pos_x, "                  Tom Noel AKA Tchoupe (lead)                  ");
	mvprintw(pos_y++,pos_x, "                 Acacio Leclerc | Robin Choquet                ");
	mvprintw(pos_y++,pos_x, "                                                               ");
	attron(COLOR_PAIR(53));
	mvprintw(pos_y++,pos_x, "***************************************************************");
	mvprintw(pos_y++,pos_x, "|                   WEB MODULE DEVELOPPERS                    |");
	mvprintw(pos_y++,pos_x, "***************************************************************");
	attron(COLOR_PAIR(52));
	mvprintw(pos_y++,pos_x, "                                                               ");
	mvprintw(pos_y++,pos_x, "Pierre Vanderlynden AKA Pvanderl (lead) | Felix Verhulst (lead)");
	mvprintw(pos_y++,pos_x, "                          Valton Gula                          ");
	mvprintw(pos_y++,pos_x, "                                                               ");
	attron(COLOR_PAIR(53));
	mvprintw(pos_y++,pos_x, "***************************************************************");
	mvprintw(pos_y++,pos_x, "|                       NL TRANSLATION                        |");
	mvprintw(pos_y++,pos_x, "***************************************************************");
	attron(COLOR_PAIR(52));
	mvprintw(pos_y++,pos_x, "                                                               ");
	mvprintw(pos_y++,pos_x, "             Fabien Abbenbroek | Thomas Castronovo             ");
	attroff(COLOR_PAIR(52));

	// move(0,0);
	// for (int i = 0; i < 254; i++)
	// {
	// 	init_pair(i, i, 0);
	// 	attron(COLOR_PAIR(i));
	// 	printw("%3.3d ", i);
	// 	if (i % 19 == 0)
	// 		printw("\n");
	// }

	return(pos_y);
}
