#LECLEEEEEEEEEEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRR
#NTOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOM
#Mettre le dossier ShellGame dans ~/Documents et lancer avec 'source script.sh'
#log : cinyras.adonis@gmail.com
#pwd : 19codingschool
#wait

#Panneau en bois a cote de Priape
woodenpanneau="\n----------------------------------------\n
You can now enter the castle.
In the castle three valuable treasures are hidden.
These treasures will be 3 digits that will form a code.
Note them well and pay attention to the order!
To unlock the locked_door you will have to change the rights of the directory with the code.
You will write 'chmod' then the number and then the name of the directory.
\n----------------------------------------\n"
woodenpanneau_fr="\n----------------------------------------\n
Vous pouvez maintenant rentrer dans le chateau.
Dans le chateau se trouve trois tresors caches.
Ces tresors seront 3 chiffres qui formeront un code.
Notes les bien et fais attention a l'ordre!
Pour debloquer la porte_fermee vous devrez changer les droits de ce dossier.
Vous utiliserez 'chmod' suivi des trois chiffres et ensuite du nom du dossier que vous souhaitez
debloque.
\n----------------------------------------\n"
woodenpanneau_nl="\n----------------------------------------\n
Je kan nu het kasteel binnengaan.
Er zijn drie waardevolle schatten verborgen in het kasteel.
Deze schatten zullen 3 getallen zijn die een code zullen vormen.
Noteer ze goed en besteed aandacht aan de volgorde!
Om deze gesloten_deur te deblokkeren zal je de rechten van de map moeten aanpassen
Je zal 'chmod' gebruiken gevolgd door het nummer en dan de naam van de map.
\n----------------------------------------\n"


#Diary dans le basement
book="\n----------------------------------------\n
Sunday 30th of september 2018
I found out the secret of this place!
There are secret doors hidden around.
At first I didnt know how to see them
but it's actually easy!
I can just add the option '-a' to 'ls'.
I just need a space between the command and the option
The basement's secret passage is a good example.
\n----------------------------------------\n"
book_fr="\n----------------------------------------\n
Dimanche 30 septembre 2018
J'ai trouve le secret de ces lieux!
Il y a des portes cachees un peu partout.
Au debut je ne savais pas comment les trouver
mais c'est vraiment facile!
Je peux juste ajouter l'option '-a' a 'ls'.
Il faut juste mettre un espace entre l'option et la commande.
La porte_secrete de la cave est un bon example.
\n----------------------------------------\n"
book_nl="\n----------------------------------------\n
Zondag 30 september 2018
Ik heb het geheim van deze plaats ontdekt!
Er zijn hier verborgen deuren.
Eerst wist ik niet hoe ze te zien
maar het is eigenlijk gemakkelijk!
Ik kan gewoon de optie '-a' toevoegen bij 'ls'.
Ik heb enkel een spatie nodig tussen het commando en de optie.
De geheime doorgang van de kelder is een mooi voorbeeld.
\n----------------------------------------\n"


#Message au debut du jeu
str_welcome="Hello and welcome to 19!\n\nIn this game, you will travel through the castle and solve riddles.\nThose riddles will lead you to learn basic shell commands!\nIn other words, you will learn how to navigate your computer,\nhow to create files, suppress them and copy them, and much more!\nTo interact with characters or various objects,\nyou just have to type './' followed by the character's or the item's name.\n'./' is actually how to execute an executable.\nYou can try here! Artemis should be around. Try writing : './artemis'.\nIf you need help at any time you can just write 'help'.\nAnd if you got lost you can just write 'back' to come back here.\n"
str_welcome_fr="Bonjour et bienvenu a 19!\n\nDans ce petit jeu, vous allez vous balader dans le chateau et resoudre des enigmes.\nCes enigmes vous permettront d'apprendre la base de shell!\nEn d'autres mots, comment vous deplacer dans votre ordinateur,\ncomment creer des fichiers, comment les supprimer et les deplacer et plus encore!\nPour interagir avec des personnages ou des objets,\nvous pouvez juste ecrire './' suivi du nom du personnage ou de l'objet.\n'./' sert a executer les executables.\nVous pouvez essayer ici! Artemis devrait etre la. Essayez : './artemis'.\nSi vous avez besoin d'aide vous pouvez juste ecrire 'help'.\nEt si vous vous etes perdu vous pouvez ecrire 'back' pour revenir ici.\n"
str_welcome_nl="Hallo en welkom bij 19!\n\nIn dit spel zal je door een kasteel heen lopen en raadsels oplossen.\nDeze raadsels zullen je de basis aanleren van shell commando's!\nMet andere woorden, je zal leren hoe te navigeren door je computer,\nhoe je bestanden kan maken, ze verwijderen, kopieren, en nog veel meer!\nOm met personages en verschijdene objecten te behandelen,\nmoet je gewoon './' typen, gevolgd door de naam van het personage of voorwerp.\n'./' is eigenlijk hoe je een executable uitvoert.\nJe kan het hier proberen! Artemis zou hier moeten zijn. Probeer eens : './artemis'.\nIndien je op bepaald moment hulp nodig hebt kan je gewoon 'help' schrijven.\nEn indien je verloren geraakt kan je gewoon 'back' schrijven om terug naar hier te komen.\n"



#Lettre devant la machine
test_vim="\n----------------------------------------\n
In front of you is the machine.
The machine will determine if you have won or if you have lost.
Right now, it's stuck. Maybe the problem comes from 'results.sh'.
There is some way to fix it but it'll be a bit different than usual.
In shell, you can use 'vim' on a file to edit it.
You need to write 'vim' followed by the name of the file. Here it's 'results.sh'.
While in this mode you will be able to see the inner workings of the machine.
Good luck and congratulation for coming this far!
\n----------------------------------------\n"
test_vim_fr="\n----------------------------------------\n
En face de vous se trouve la machine.
La machine decide de si vous avez gagne ou perdu.
Pour le moment, elle est coincee. Peut etre que le probleme vient de 'resultats.sh'.
Il y a un moyen de la reparer mais ce sera different que d'habitude.
Dans shell, vous pouvez ecrire 'vim' pour commencer a l'editer.
Vous devez ecrire 'vim' suivi du nom du fichier. Ici c'est 'resultats.sh'.
Dans ce mode vous pourrez voir exactement ce qu'il se passe dans la machine.
Bonne chance et bravo pour etre arrive aussi loin!
\n----------------------------------------\n"
test_vim_nl="\n----------------------------------------\n
Voor jou staat er de machine.
De machine zal beslissen of je gewonnen of verloren hebt.
Op dit moment loopt hij echter vast. Misschien komt het probleem vanuit 'resultaten.sh'.
Er is een manier om dit op te lossen, maar het zal een beetje anders zijn dan normaal.
In shell kan je 'vim' gebruiken op een bestand om deze aan te passen.
Je moet 'vim' schrijven, gevolgd door de naam van het bestand. In dit geval 'resultaten.sh'.
In deze modus zal je de innerlijke werking van de machine kunnen zien.
Succes and proficiat dat je tot hier geraakt bent!
\n----------------------------------------\n"


zshrc="export LSCOLORS=Cxxxxxxxgxxxxxxxxxxx\nalias ls='ls -G'\nalias back=\"cd ~/Desktop/ShellGame\"\nalias shelp=\"cat ~/Documents/PetitBainShell/ressources/help.txt\"\nalias play_shell=\"source ~/Documents/PetitBainShell/playshell.sh\"\nalias stop_shell=\"sh ~/petit_bain/module_shell/ShellGame/delete.sh\"\nalias restart_shell=\"source ~/petit_bain/module_shell/ShellGame/script.sh\"\nalias start=\"cd ~/Desktop/ShellGame\""

#Bon scripts
if [ -d ~/Desktop/Shellgame ]; then
	sh ~/petit_bain/module_shell/ShellGame/delete.sh
fi;

if [ $# -eq 0 ]; then
	echo "choose fr, en or nl"
else

cd ~

if [ "$1" = "en" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/scripts_en/* ~/petit_bain/module_shell/ShellGame/PetitBainShell/scripts
elif [ "$1" = "fr" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/scripts_fr/* ~/petit_bain/module_shell/ShellGame/PetitBainShell/scripts
elif [ "$1" = "nl" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/scripts_nl/* ~/petit_bain/module_shell/ShellGame/PetitBainShell/scripts
fi;

#creer l'arborescence
sh ~/petit_bain/module_shell/ShellGame/PetitBainShell/scripts/directories.sh


#changer la langue
if [ "$1" = "en" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/dialogue_en/dialogue.h ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/dialogue.h
elif [ "$1" = "fr" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/dialogue_fr/dialogue.h ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/dialogue.h
elif [ "$1" = "nl" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/dialogue_nl/dialogue.h ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/dialogue.h
fi;


#Compiler et bouger les personnages et objets
if [ "$1" = "en" ]; then
	make re -C ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/artemis/artemis.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o artemis
	mv artemis ~/Desktop/ShellGame/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/priape/priape.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o priape
	mv priape ~/Desktop/ShellGame/main_gate/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/fides/fides.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o fides
	mv fides ~/Desktop/ShellGame/main_gate/castle/basement/.secret_door
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/lever1/lever1.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o lever
	mv lever ~/Desktop/ShellGame/main_gate/castle/cluster
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/despina/despina.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o despina
	mv despina ~/Desktop/ShellGame/main_gate/castle/cluster
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/proto_machine/machine.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o machine
	mv machine ~/Desktop/ShellGame/main_gate/locked_door/.hidden_gate
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/fabulinus/fabulinus.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o fabulinus
	mv fabulinus ~/Desktop/ShellGame/main_gate/castle/attic
elif [ "$1" = "fr" ]; then
	make re -C ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/artemis/artemis.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o artemis
	mv artemis ~/Desktop/ShellGame/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/priape/priape.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o priape
	mv priape ~/Desktop/ShellGame/portail/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/fides/fides.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o fides
	mv fides ~/Desktop/ShellGame/portail/chateau/cave/.porte_secrete
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/lever1/lever1.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o levier
	mv levier ~/Desktop/ShellGame/portail/chateau/cluster
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/despina/despina.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o despina
	mv despina ~/Desktop/ShellGame/portail/chateau/cluster
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/proto_machine/machine.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o machine
	mv machine ~/Desktop/ShellGame/portail/porte_fermee/.passage_secret
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/fabulinus/fabulinus.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o fabulinus
	mv fabulinus ~/Desktop/ShellGame/portail/chateau/grenier
elif [ "$1" = "nl" ]; then
	make re -C ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/artemis/artemis.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o artemis
	mv artemis ~/Desktop/ShellGame/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/priape/priape.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o priape
	mv priape ~/Desktop/ShellGame/hoofd_poort/
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/fides/fides.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o fides
	mv fides ~/Desktop/ShellGame/hoofd_poort/kasteel/kelder/.geheime_deur
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/lever1/lever1.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o hendel
	mv hendel ~/Desktop/ShellGame/hoofd_poort/kasteel/cluster
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/despina/despina.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o despina
	mv despina ~/Desktop/ShellGame/hoofd_poort/kasteel/cluster
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/proto_machine/machine.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o machine
	mv machine ~/Desktop/ShellGame/hoofd_poort/gesloten_deur/.verborgen_poort
	gcc ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/fabulinus/fabulinus.c ~/petit_bain/module_shell/ShellGame/PetitBainShell/personnages/libft/libft.a -o fabulinus
	mv fabulinus ~/Desktop/ShellGame/hoofd_poort/kasteel/zolder
fi;


#Mettre les .txt au bon endroit
cp -r ~/petit_bain/module_shell/ShellGame/PetitBainShell ~/Documents
if [ "$1" = "en" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/proto_machine/results.sh ~/Desktop/ShellGame/main_gate/locked_door/.hidden_gate
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/phone_book.txt ~/Desktop/ShellGame/main_gate/castle/attic
	echo $woodenpanneau > ~/Desktop/ShellGame/main_gate/wooden_sign.txt
	echo $book > ~/Desktop/ShellGame/main_gate/castle/basement/diary.txt
	echo $test_vim > ~/Desktop/ShellGame/main_gate/locked_door/.hidden_gate/letter.txt
	touch ~/Desktop/ShellGame/main_gate/locked_door/.hidden_gate/bug
elif [ "$1" = "fr" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/proto_machine/resultats.sh ~/Desktop/ShellGame/portail/porte_fermee/.passage_secret
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/phone_book.txt ~/Desktop/ShellGame/portail/chateau/grenier
	mv ~/Desktop/ShellGame/portail/chateau/grenier/phone_book.txt ~/Desktop/ShellGame/portail/chateau/grenier/annuaire.txt
	echo $woodenpanneau_fr > ~/Desktop/ShellGame/portail/panneau.txt
	echo $book_fr > ~/Desktop/ShellGame/portail/chateau/cave/journal.txt
	echo $test_vim_fr > ~/Desktop/ShellGame/portail/porte_fermee/.passage_secret/lettre.txt
	touch ~/Desktop/ShellGame/portail/porte_fermee/.passage_secret/bug
elif [ "$1" = "nl" ]; then
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/proto_machine/resultaten.sh ~/Desktop/ShellGame/hoofd_poort/gesloten_deur/.verborgen_poort
	cp ~/petit_bain/module_shell/ShellGame/PetitBainShell/ressources/phone_book.txt ~/Desktop/ShellGame/hoofd_poort/kasteel/zolder/telefoonboek.txt
	echo $woodenpanneau_nl > ~/Desktop/ShellGame/hoofd_poort/houten_bord.txt
	echo $book_nl > ~/Desktop/ShellGame/hoofd_poort/kasteel/kelder/dagboek.txt
	echo $test_vim_nl > ~/Desktop/ShellGame/hoofd_poort/gesloten_deur/.verborgen_poort/brief.txt
	touch ~/Desktop/ShellGame/hoofd_poort/gesloten_deur/.verborgen_poort/bug
fi;


#Changer les droits des personnages, objets et le castle
if [ "$1" = "en" ]; then
	chmod 111 ~/Desktop/ShellGame/artemis
	chmod 111 ~/Desktop/ShellGame/main_gate/priape
	chmod 111 ~/Desktop/ShellGame/main_gate/castle/basement/.secret_door/fides
	chmod 111 ~/Desktop/ShellGame/main_gate/castle/cluster/lever
	chmod 111 ~/Desktop/ShellGame/main_gate/castle/cluster/despina
	chmod 111 ~/Desktop/ShellGame/main_gate/locked_door/.hidden_gate/machine
	chmod 111 ~/Desktop/ShellGame/main_gate/castle/attic/fabulinus
	chmod 000 ~/Desktop/ShellGame/main_gate/castle
	chmod 000 ~/Desktop/ShellGame/main_gate/locked_door
elif [ "$1" = "fr" ]; then
	chmod 111 ~/Desktop/ShellGame/artemis
	chmod 111 ~/Desktop/ShellGame/portail/priape
	chmod 111 ~/Desktop/ShellGame/portail/chateau/cave/.porte_secrete/fides
	chmod 111 ~/Desktop/ShellGame/portail/chateau/cluster/levier
	chmod 111 ~/Desktop/ShellGame/portail/chateau/cluster/despina
	chmod 111 ~/Desktop/ShellGame/portail/porte_fermee/.passage_secret/machine
	chmod 111 ~/Desktop/ShellGame/portail/chateau/grenier/fabulinus
	chmod 000 ~/Desktop/ShellGame/portail/chateau
	chmod 000 ~/Desktop/ShellGame/portail/porte_fermee
elif [ "$1" = "nl" ]; then
	chmod 111 ~/Desktop/ShellGame/artemis
	chmod 111 ~/Desktop/ShellGame/hoofd_poort/priape
	chmod 111 ~/Desktop/ShellGame/hoofd_poort/kasteel/kelder/.geheime_deur/fides
	chmod 111 ~/Desktop/ShellGame/hoofd_poort/kasteel/cluster/hendel
	chmod 111 ~/Desktop/ShellGame/hoofd_poort/kasteel/cluster/despina
	chmod 111 ~/Desktop/ShellGame/hoofd_poort/gesloten_deur/.verborgen_poort/machine
	chmod 111 ~/Desktop/ShellGame/hoofd_poort/kasteel/zolder/fabulinus
	chmod 000 ~/Desktop/ShellGame/hoofd_poort/kasteel
	chmod 000 ~/Desktop/ShellGame/hoofd_poort/gesloten_deur
fi;


if [ "$1" = "fr" ]; then
	mv ~/Documents/PetitBainShell/ressources/help_fr.txt ~/Documents/PetitBainShell/ressources/help.txt
elif [ "$1" = "nl" ]; then
	mv ~/Documents/PetitBainShell/ressources/help_nl.txt ~/Documents/PetitBainShell/ressources/help.txt
fi;


#creer .zshrc
echo $zshrc > ~/Documents/PetitBainShell/.shellrc


#copier playshell
cp ~/petit_bain/module_shell/ShellGame/playshell.sh ~/Documents/PetitBainShell/
cp ~/petit_bain/module_shell/ShellGame/delete.sh ~/Documents/PetitBainShell/


# Choses a faire a la fin du projet et en bonus
#ajouter les ascii arts
#checker les bugs et faire tester
fi;
