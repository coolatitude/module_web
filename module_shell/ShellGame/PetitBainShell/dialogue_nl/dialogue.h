/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dialogue.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclecler <aclecler@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:37:33 by aclecler          #+#    #+#             */
/*   Updated: 2018/11/14 19:55:37 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIALOGUE_H
# define DIALOGUE_H

# define LANG 2

// ARTEMIS

# define STR1_A  "Hallo! Het ziet ernaar uit dat je achterhaalt hebt hoe je met mij moet spreken. Goed gedaan!"
# define STR2_A "\r\n\nNu, indien je wilt weten wat er rond jou is, kan je het commando 'ls' gebruiken.\r\nHet laat je toe de inhoud van de huidige map te zien. Zoals alle mappen, bestanden en links.\r\nHier zullen personages en objecten bestanden zijn waarmee je interacties hebt.\r\nTrouwens, dit is wat je krijgt als je 'ls' gebruikt:\r\n\n"
# define STR3_A "\r\nDe mappen zullen gebieden en kamers zijn binnen het kasteel.\r\nJe kan deze bezoeken door 'cd' te schrijven voor de naam van een gebied.\r\nBijvoorbeeld : 'cd kamer'\r\nWanneer je terug wilt keren naar de vorige ruimte kan je 'cd ..' schrijven."
# define STR4_A "\r\n\nDe schatten zullen zichzelf niet vinden, dus het is beter dat je vertrekt!\r\nProbeer naar de hoofd_poort te gaan door gebruik te maken van 'cd'.\r\nMijn vriend Priape zal je daar opwachten!\r\n"
# define STR5_A "\n\n'ls' : Laat je toe om te zien wat er in de actieve map is.\n\n'cd' : Laat je toe om naar een specifieke map te gaan.\n'cd ..' Laat je toe naar de vorige map terug te keren.\n"

// DESPINA

# define STR1_D "\r\n\nOh! Hallo, ik merkte je niet op. Zoals je ziet is er hier een raadsel.\r\nHet is geschreven naast de hendel. Je kan het lezen door interactie ermee te hebben.\r\nIk kan het niet achterhalen, maar ik weet dat je het juiste antwoord in de koffer moet steken."
# define STR2_D "\r\n\nOm dit te doen kan je 'mv' gebruiken op een bestand in een map.\r\nNet zoals je vuilnis in de vuilbak wilt smijten\r\nkan je 'mv vuilnis vuilbak' gebruiken.\r\n"
# define STR3_D "\n'mv' : Laat je toe bestanden te verplaatsen\n'mv bestand map' verplaatst het geselecteerde bestand naar de gespecificeerde map\n"

// DESPINA2

# define STR1_D2 "Despina heeft je gevolgd door de geopende deur"
# define STR2_D2 "\r\n\nOh! Er is nog een raadsel!\r\nMaar deze keer is er geen koffer.\r\nMisschien moet je enkel de opties verwijderen totdat er maar eentje over is?"
# define STR3_D2 "\r\n\nIk weet dat je iets kunt verwijderen met 'rm'."
# define STR4_D2 "\r\n\nMAAR "
# define STR5_D2 "het is heel gevaarlijk omdat je iets heel belangrijk kan verwijderen.\r\nDus gebruik 'rm' met bestanden die je niet meer nodig hebt.\r\nWees er voorzichtig mee.\r\n"
# define STR6_D2 "\n'rm' : Laat je toe bestanden te verwijderen /!\\Wees voorzichtig!\n'rm file' zal het bestand file verwijderen\n"

// FABULINUS

# define STR1_FA "Er zit een oude man in een leunstoel.\r\nHij is door boeken aan het bladeren en ziet er gefrustreerd uit."
# define STR2_FA "\r\n\nJij daar, kom hier en help mij!\r\nIk weet niet hoe ik dit ding moet gebruiken."
# define STR3_FA "\r\n\nIk zoek het emailadres van mijn vriend in dit 'telefoonboek.txt'.\r\nMaar ik kan dit 'grep' commando echter niet achterhalen.\r\nIk weet dat je 'grep' moet schrijven, gevolgd door hetgeen dat je zoekt\r\nen dan waar je het zoekt.\r\nBijvoorbeeld, als je een naald in hooi zoekt,\r\ndan zou je 'grep naald hooi' moeten schrijven."
# define STR4_FA "\r\n\nZou je het kunnen vinden voor mij? Zijn naam is Cinyras.\r\nOh en terwijl je toch bezig bent, zou je hem een mail kunnen verzenden om te vragen dat hij me komt bezoeken?\r\nBedank!\r\n"
# define STR5_FA "\n'grep' : Laat je toe om tekst te vinden in een bestand\n'grep 'tekst' bestand' zal tekst zoeken in het bestand\n"

// FIDES

# define STR1_FI "Oh, heeft iemand mijn geheime deur gevonden?"
# define STR2_FI "\r\n\nWel, als je hier bent, weet je vast hoe je 'ls -a' moet gebruiken!\r\nDat verdient enige lof. Je zal vast gezien hebben\r\ndat verborgen mappen en bestanden een '.' hebben voor hun naam."
# define STR3_FI "\r\n\nNuja, je bent hier voor de schat. De schat is niet echt een schat.\r\nHet maakt eigenlijk deel uit van de code die je nodig zal hebben.\r\nDat fragment van de code is :\r\n\n7"
# define STR4_FI "\r\n\nHet is het eerste getal van het wachtwoord. Ik zal je nu laten gaan.\r\nVeel succes.\r\n"
# define STR5_FI "\n'ls -a' : Laat je toe verborgen mappen/bestanden te zien met ls, verborgen mappen/bestanden beginnen met een punt ('.')\n"

// PRIAPE

# define STR1_P "He daar, het is de eerste keer dat ik je hier zie.\r\nArtemis heeft je vast gestuurd."
# define STR2_P "\r\nIk zou je graag willen helpen met shell te leren, maar ik heb erg veel honger."
# define STR3_P "\r\nOh ik weet het! misschien kan je mij iets te eten maken!\r\nJe zou een bestand kunnen maken met 'touch' en het eender welke naam van eten geven.\r\nIk hou van cakes, dus misschien kan je proberen met 'touch cakes'.\r\nMaar om het even wat is goed, ik ben niet kieskeurig."
# define STR4_P "\r\n\nOm eten te geven aan een executable zoals mij kan je bijvoorbeeld './priape cakes' schrijven.\r\nOp deze manier zie ik wat je mij probeert te geven.\r\n"
# define STR5_P "\n'touch' : Laat je toe een bestand te maken\n'touch foo' zal een bestand genaamd foo maken\n"
# define STR6_P "Oh je hebt mij cake gebracht, heel erg bedankt daarvoor!"
# define STR7_P "Oh bedankt, ik eet dit echter niet vaak, maar zoals ik eerder zei,\r\nik ben echt niet kieskeurig!"
# define STR8_P "\r\n\nMaar vooraleer ik dit feestmaal verslind, zal ik je een geheim vertellen.\r\nJe hebt het vast al gezien, maar er is hier een bord.\r\nHet is geen executable maar een '.txt'.\r\nOm te lezen wat er geschreven staat kan je 'cat' gebruiken."
# define STR9_P "\r\nProbeer eens met 'cat houten_bord.txt'.\r\nEr staan er belangrijke zaken op.\r\n"
# define STR10_P "\n'cat' : Laat je toe om te zien wat er geschreven staat in een bestand\n'cat bestandsnaam' zal je de inhoude tonen van bestandsnaam\n\nVerandert de rechten van een bestand, maar het heeft een paswoord nodig.\nBijvoorbeeld: chmod xxx 'gesloten_deur'\n"
# define STR11_P "Ik kan wat je mij probeert te geven niet vinden. Probeer opnieuw met een ander bestand of andere spelling.\r\n"

// LEVER 1

# define STR1_L1 "Je activeert de hendel, maar er gebeurt niets.\n\nEr staat iets geschreven op de muur naast de hendel :\n'De arme mensen hebben het en de rijke mensen hebben het nodig, maar als jij het eet, ga je dood.'\n"

# define STR2_L1 "Je activeert de hendel...\nJe hoort een mechanisme in de muur terwijl hij opent\nhet onthult een nieuwe kamer vol geheimen.\n"

// LEVER 2

# define STR1_L2 "Je activeert de hendel, maar er gebeurt niets.\nEr staat iets geschreven op de muur naast de hendel :\n'Ik maak twee mensen uit een. Wat ben ik?'\n"
# define STR2_L2 "touch spiegel.txt tijd.txt zwaard.txt"
# define STR3_L2 "Nogmaals hoor je een luid lawaai uit de muren komen, maar deze keer opent er een geheime valdeur.\nIn deze val is er een klein stukje van 'papier.txt'.\n"
# define STR4_L2 "Je activeert de hendel, maar er gebeurt niets.\nEr staat iets geschreven op de muur naast de hendel :\n'Ik maak twee mensen uit een. Wat ben ik?'\n"

#endif
