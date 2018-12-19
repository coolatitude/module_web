#include "game_functions.h"

/*
**	Je bevind momenteel in een teksteditor genaamd VIM. Het is een beetje
**  anders dan degene die je al ken, zoals Notepad++ en anderen. Deze heeft
**	2 verschillende modi.
**
**	De standaard modus is de COMMANDO modus. Deze dient aan het typen van
**	commandos om de teksteditor te behandelen.

**	De INSERT geeft je de mogelijkheid om tekst te schrijven. Je kan deze modus
**	ingaan door op I te drukken. (Je zal INSERT beneden aan je scherm zien staan)
**	VIM gedraagt zich dan als een normale teksteditor.
**
**	Om terug in COMMANDO modus te gaan, druk Escape (ESC).
**	(De INSERT bendenaan je scherm zou moeten verwijderen)
**
**	Om het bestand op te slaan en te verlaten moet je in COMMANDO modus zijn.
**	(INSERT moet niet bendenaan je scherm staan)
**	Schrijf dan ":x" (zonder de aanhalingstekens) en druk op Enter.
**
**	-----------------------------------------------------------------------
**
**	Om te beginnen, probeer al LEFT door RIGHT te veranderen in de code
**	hieronder
**
**	Probeer dan het bestand te verlaten en schrijf daarna "playgame" en
**	zie wat er gebeurt. Je krijgt dan het eerste level te zien.
**	Wanner Archimede de uitgang heeft gehaald, verlaat het spel en schrijf
**	"nextlevel" in de terminal
*/

void player_function()
{
	walk(LEFT);
}
