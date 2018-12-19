/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dialogue.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclecler <aclecler@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:37:33 by aclecler          #+#    #+#             */
/*   Updated: 2018/11/14 19:38:22 by ntom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIALOGUE_H
# define DIALOGUE_H

# define LANG 0

// ARTEMIS

# define STR1_A  "Hello! Seems like you found out how to talk with me. Well played!"
# define STR2_A "\r\n\nNow, if you want to see what is around you, you can use the 'ls' command.\r\nIt allows you to see the content of the current directory. All the directories, files and links.\r\nHere the files will be characters and objects you can interact with.\r\nBy the way, this is what you get when you use 'ls':\r\n\n"
# define STR3_A "\r\nThe directories will be areas and rooms in the castle.\r\nYou can visit them by writing 'cd' before the name of the area.\r\nExample : 'cd room'\r\nIf you ever want to go back on your steps, you can write 'cd ..'"
# define STR4_A "\r\n\nYou should be going, those treasures won't find themselves!\r\nTry going to the main_gate with 'cd'.\r\nMy friend Priape is waiting for you there!\r\n"
# define STR5_A "\n\n'ls' : It allows you to see what is in the current directory you are in.\n\n'cd' : It allows you to go to a specified directory.\n'cd ..' allows you to go back to the parent directory.\n"

// DESPINA

# define STR1_D "\r\n\nOh! Hello, I didn't notice you. You see,there is an enigma right here.\r\nIt's written next to the lever. You can read it by interacting with it.\r\nI cant figure it out, but I know you have to put the right answer in the chest."
# define STR2_D "\r\n\nTo do that you can 'mv' a file in a directory.\r\nLike, if you want to put a bag in the trash\r\nyou can 'mv bag trash'.\r\n"
# define STR3_D "\n'mv' : Allows you to move files\n'mv file directory' moves target file to specified directory\n"

// DESPINA2

# define STR1_D2 "Despina followed you through the newly opened door"
# define STR2_D2 "\r\n\nOh! There's another riddle!\r\nBut this time there is no chest.\r\nMaybe you only have to delete the other options until there is only one left?"
# define STR3_D2 "\r\n\nI know that you can suppress something with 'rm'."
# define STR4_D2 "\r\n\nBUT "
# define STR5_D2 "it's really dangerous because you can suppress something important.\r\nTo do so you use 'rm' with the file you dont need anymore.\r\nBe careful with it.\r\n"
# define STR6_D2 "\n'rm' : Allows you to remove a file /!\\Be very careful!\n'rm file' will delete the file\n"

// FABULINUS

# define STR1_FA "There is an old man sitting in an armchair.\r\nHe is shuffling through books and looks frustrated."
# define STR2_FA "\r\n\nYou there, come here and help me!\r\nI dont know how to use this thing."
# define STR3_FA "\r\n\nI'm looking for my friend's email address in this 'phone_book.txt'.\r\nBut I can't figure out how to use this 'grep' command.\r\nI know you have to put 'grep' then what you are looking for\r\nand then where you are looking for it.\r\nFor instance, if you are searching for a needle in a haystack,\r\nyou should do 'grep needle haystack'."
# define STR4_FA "\r\n\nCould you find it for me please? He is called Cinyras.\r\nOh and while you are at it, could you send him an email asking him to come visit me.\r\nThanks.\r\n"
# define STR5_FA "\n'grep' : Allows you to find text in a file\n'grep 'text' file' will find text in the file\n"

// FIDES

# define STR1_FI "Oh someone found my secret room?"
# define STR2_FI "\r\n\nWell, if you are here you must know how to 'ls -a'!\r\nThat deserves some praise. You may have seen\r\nthat hidden directories and files have a '.' before their name."
# define STR3_FI "\r\n\nAnyway, you are here for the treasure. The treasure is not quite a treasure.\r\nIt's actually part of a code that you will need.\r\nThat fragment of the code is :\r\n\n7"
# define STR4_FI "\r\n\nIt's the first number of the code. I'll let you go now.\r\nGood luck.\r\n"
# define STR5_FI "\n'ls -a' : Allows to see hidden files/directories with ls, hidden files/directories start with a dot ('.')\n"

// PRIAPE

# define STR1_P "Hey there, it's the first time I see you around.\r\nArtemis must have sent you."
# define STR2_P "\r\nI would love to help you with learning shell but I'm extremely hungry"
# define STR3_P "\r\nOh I know! Maybe you could make me some food!\r\nYou could just create a file with 'touch' and name it any food.\r\nI love cakes, so maybe you could try 'touch cakes'.\r\nBut anything will do, I'm not too difficult."
# define STR4_P "\r\n\nTo give food to an executable like me you can just './priape cakes' for instance.\r\nLike this I can see what you want to give me\r\n"
# define STR5_P "\n'touch' : Allows you to create a file\n'touch foo' will create a file named foo\n"
# define STR6_P "Oh thanks a lot you got me some cake!"
# define STR7_P "Oh thanks, I don't really eat this often but like I said,\r\nI'm not really difficult!"
# define STR8_P "\r\n\nBut before I devour this feast, let me tell you a secret.\r\nYou must have seen it, but there is a sign here.\r\nIt's not an executable but a '.txt'.\r\nTo read what is written on it you can use 'cat'."
# define STR9_P "\r\nTry doing 'cat wooden_sign.txt'.\r\nThere is important stuff on it.\r\n"
# define STR10_P "\n'cat' : Allows you to see what's written inside of a file\n'cat file' will show you the content of the file\n\n'chmod' : Changes the rights of a file or directory but it needs a password.\nExample : 'chmod xxx locked_door'\n"
# define STR11_P "I can't manage to find what you are giving me. Try with another file or another spelling.\n"

// LEVER 1

# define STR1_L1 "You activate the lever but nothing happens.\n\nOn the wall next to the lever something is written :\n'The poor has it and the rich needs it.'\n"

# define STR2_L1 "You activate the lever...\nYou can hear a mechanism in the wall as it opens\nrevealing a new room full of secrets.\n"

// LEVER 2

# define STR1_L2 "You activate the lever but nothing happens\nOn the wall next to the lever something is written :\n'I make two people out of one. What am I?'\n"
# define STR2_L2 "touch mirror.txt time.txt sword.txt"
# define STR3_L2 "Once again, a loud noise comes from the walls but this time a secret trap opens.\nIn this trap there is a little piece of 'paper.txt'.\n"
# define STR4_L2 "You activate the lever but nothing happens\nOn the wall next to the lever something is written :\n'I make two people out of one. What am I?'\n"

#endif
