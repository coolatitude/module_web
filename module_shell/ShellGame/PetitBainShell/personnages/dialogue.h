/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dialogue.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclecler <aclecler@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:37:33 by aclecler          #+#    #+#             */
/*   Updated: 2018/11/14 20:12:06 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIALOGUE_H
# define DIALOGUE_H

# define LANG 1

// ARTEMIS

# define STR1_A  "Salut! Je vois que tu as trouve comment me parler. Bien joue!"
# define STR2_A "\r\n\nMaintenant, si tu veux regarder ce qu'il y a autour de toi, tu peux utiliser la commande 'ls'.\r\nCa te permet de voir ce qui se trouve dans le dossier dans lequel tu te trouves : fichiers, dossiers et liens.\r\nIci, les fichiers seront les personnages et les objets avec lesquels tu interagiras.\r\nVoila ce que ca donne si tu utilises la commande 'ls':\r\n\n"
# define STR3_A "\r\nLes dossiers seront les lieux et les salles du chateau.\r\nTu peux les visiter en ecrivant 'cd' suivi du nom du lieu dans lequel tu veux aller.\r\nExemple : 'cd lieu'\r\nSi tu souhaites revenir sur tes pas, tu peux utiliser 'cd ..'"
# define STR4_A "\r\n\nTu devrais y aller, les tresors ne vont pas se trouver tout seuls!\r\nEssaye d'aller dans le portail avec 'cd'.\r\nMon ami Priape t'attend la-bas.\r\n"
# define STR5_A "\n\n'ls' : permet de voir le contenu du dossier dans lequel tu es actuellement.\n\n'cd' : permet d'entrer dans le dossier que tu souhaites.\n'cd ..' : te permet de retourner dans le dossier parent (tu reviens en arriere).\n"

// DESPINA

# define STR1_D "\r\n\nOh, salut! Je ne t'avais pas vu.e. Il y a une enigme dans cette salle...\r\nEssaye d'activer le levier. Tu pourras la lire en interagissant avec.\r\nJe n'arrive pas a la resoudre, mais je sais que tu dois mettre la bonne\r\nreponse dans le coffre."
# define STR2_D "\r\n\nPour faire cela, tu peux utiliser 'mv' pour mettre un fichier dans un dossier.\r\nComme si tu voulais mettre un objet dans un sac...\r\nTu peux 'mv objet sac'.\r\n"
# define STR3_D "\n'mv' : permet de deplacer un fichier dans un dossier.\n'mv fichier dossier' deplace le fichier dans le dossier.\n"

// DESPINA2

# define STR1_D2 "Despina t'a suivi.e dans cette nouvelle salle..."
# define STR2_D2 "\r\n\nOh! il y a une nouvelle enigme...\r\nMais cette fois-ci, il n'y a pas de coffre...\r\nPeut-etre que tu dois supprimer les choix inutiles jusqu'a ce qu'il n'en reste qu'un..."
# define STR3_D2 "\r\n\nJe sais que tu peux supprimer quelque chose en utilisant 'rm'."
# define STR4_D2 "\r\n\nMAIS "
# define STR5_D2 "c'est vraiment dangereux car tu pourrais supprimer quelque chose d'important.\r\nTu peux donc utiliser 'rm' avec le fichier dont tu n'as plus besoin.\r\nFais tres attention avec cette commande!\r\n"
# define STR6_D2 "\n'rm' : permet de supprimer un fichier ou un dossier. /!\\Fais tres attention!\n'rm fichier' te permettra de supprimer definitivement le fichier cible sans retour possible...\n"

// FABULINUS

# define STR1_FA "Il y a un vieil homme assis sur une chaise.\r\nIl lit un livre et semble frustre."
# define STR2_FA "\r\n\nToi, la! Viens m'aider!\r\nJe ne sais pas comment utiliser cette chose..."
# define STR3_FA "\r\n\nJe cherche l'adresse mail d'un ami dans 'annuaire.txt'.\r\n...mais je ne sais pas comment utiliser la commande 'grep'.\r\nJe sais que tu dois ecrire 'grep' suivi de l'element que tu cherches\r\npuis le fichier dans lequel tu le cherches.\r\nPar exemple, si tu cherches une aiguille dans une botte de foin,\r\ntu dois faire 'grep aiguille botte_de_foin'."
# define STR4_FA "\r\n\nPourrais-tu le chercher pour moi? Il s'appelle Cinyras.\r\nOh, et tant que tu y es, peux-tu lui envoyer un e-mail lui demandant de venir me voir?\r\nMerci beaucoup!\r\n"
# define STR5_FA "\n'grep' : permet de chercher un texte dans un fichier.\n'grep 'texte' fichier' chercheras le texte dans le fichier cible.\n"

// FIDES

# define STR1_FI "Oh, quelqu'un a trouve mon passage secret!"
# define STR2_FI "\r\n\nSi tu es la, c'est que tu sais utiliser la commande 'ls -a'!\r\nCa merite une recompense! Tu as pu remarquer\r\nque les dossiers et fichiers caches commencent par un '.'..."
# define STR3_FI "\r\n\nEnfin, peu importe... tu es la pour le tresor!\r\nC'est en realite un morceau de code dont tu auras besoin plus tard pour le tresor.\r\nCette partie du code est :\r\n\n7"
# define STR4_FI "\r\n\nC'est le premier chiffre du code. Je te laisse partir.\r\nBonne chance!\r\n"
# define STR5_FI "\n'ls -a' : permet de voir les fichiers et dossiers caches. Les fichiers et dossiers caches commencent toujours par un '.'\n"

// PRIAPE

# define STR1_P "Hey! C'est la premiere fois que je te vois par ici!\r\nArtemis a du t'envoyer!"
# define STR2_P "\r\nJ'aurais aime t'aider a apprendre les commandes shell mais j'ai beaucoup trop faim..."
# define STR3_P "\r\nOh je sais! Tu pourrais me preparer a manger, pas vrai ?!\r\nTu peux juste creer un fichier avec 'touch' et lui donner un nom de nourriture!\r\nJ'adore les gateaux, par exemple: 'touch gateaux'!.\r\nMais si tu me donnes autre chose, ce n'est pas grave, je ne suis pas difficile!"
# define STR4_P "\r\n\nPour donner un fichier a un executable, il te suffit de faire './priape gateaux' par exemple.\r\nComme ca je peux voir ce que tu me donnes!\r\n"
# define STR5_P "\n'touch' : te permet de creer un fichier.\n'touch foo' cree un fichier nomme 'foo'.\n"
# define STR6_P "Oh merci beaucoup! J'adore vraiment les gateaux!"
# define STR7_P "Oh merci! Je ne mange pas ca souvent, mais comme je te l'avais dit,\r\nje ne suis pas difficile..."
# define STR8_P "\r\n\nAvant de le manger, je vais te dire un secret...\r\nTu as du le voir, mais il y a un panneau pas loin...\r\nCe n'est pas un executable mais un '.txt'.\r\nPour le lire tu peux utiliser la commande 'cat'."
# define STR9_P "\r\nEssaie de 'cat panneau.txt'.\r\nIl y a des choses importantes ecrites dessus...\r\n"
# define STR10_P "\n'cat' : permet de voir ce qui est ecrit a l'interieur d'un fichier.\n 'cat fichier' affichera le contenu de 'fichier'.\n\n'chmod' : Change les droits d'un fichier ou d'un dossier\nmais il a besoin d'un mot de passe.\nExample : 'chmod xxx porte_fermee'\n"
# define STR11_P "Je n'arrive pas a trouver ce que tu me donnes... Peut-etre que ce fichier n'existe pas ou que son orthographe est incorrecte...\r\n"

// LEVER 1

# define STR1_L1 "Tu as active le levier mais rien ne se passe...\n\nSur le mur a cote du levier, quelque chose est ecrit:\n'Le pauvre le possede et le riche en a besoin.'\n"

# define STR2_L1 "Tu as active le levier...\nOn entend un mecanisme et le mur s'ouvre,\nrevelant une piece pleine de secrets...\n"

// LEVER 2

# define STR1_L2 "Tu as active le levier mais rien ne se passe...\n\nSur le mur a cote du levier, quelque chose est ecrit:\n'Je fais deux personne d'une seule. Que suis-je?'\n"
# define STR2_L2 "touch miroir.txt temps.txt epee.txt"
# define STR3_L2 "Encore une fois, un gros bruit se fait entendre venant du mur, mais cette fois, une trappe secrete apparait...\nDans cette trappe, il y un 'papier.txt'.\n"

#endif
