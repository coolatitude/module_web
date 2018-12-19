#include "game_functions.h"

/*
**	Tu te trouves actuellement dans un editeur de texte appele VIM.
**	Il est un peu different des editeurs que tu connais, et comporte 2
**	modes distincts.
**
**	Le mode COMMANDE est le mode par defaut. Il te permet de taper diverses
**	commandes pour manipuler l'editeur.
**
**	Le mode INSERT te permet d'inserer du texte. Tu peux l'activer en appuyant
**	sur la touche I. (Tu verras apparaitre INSERT en bas a gauche de l'ecran)
**	VIM se comportera alors comme un editeur normal.
**
**	Pour revenir au mode COMMANDE, appuie sur la touche Escape (ESC).
**	(Le INSERT en bas a gauche devrait disparaitre)
**
**	Pour sauvegarder et quitter le fichier, tu dois etre en mode COMMANDE.
**	(Le INSERT ne doit pas apparaitre en bas a gauche)
**	Tape ensuite ":x" (sans les guillemets) et appuie sur Enter.
**
**	-----------------------------------------------------------------------
**
**	Pour commencer, essaie simplement de remplacer LEFT par RIGHT dans le code
**	ci-dessous.
**
**	Essaie ensuite de quitter ce fichier, et tape ensuite "playgame" dans
**	le terminal. Tu verras le premier niveau du jeu.
**	Lorsque Archimede aura atteint la sortie, quitte le jeu, et tape "nextlevel"
**	dans le terminal.
*/

void player_function()
{
	walk(LEFT);
}
