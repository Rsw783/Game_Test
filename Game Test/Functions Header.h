//Stores all of the main programs functions(not the classes')
//and all the #inclusion

#include <SDL/SDL.h>
#include <windows.h>

void SDL_Startup(SDL_Surface* screen)
{
	SDL_Surface* game_Border_Pre = NULL,* game_Border_Fin = NULL;
	
	SDL_Init(SDL_INIT_VIDEO);
	
	screen = SDL_SetVideoMode(1024,768,32,SDL_SWSURFACE||SDL_FULLSCREEN);
	
	SDL_WM_SetCaption( "Game Mockup", NULL );
	
	game_Border_Pre = SDL_LoadBMP("Images/Game Border.bmp");
	
	if (game_Border_Pre != NULL)
	{
		game_Border_Fin = SDL_DisplayFormat(game_Border_Pre);
		SDL_FreeSurface(game_Border_Pre);
		SDL_BlitSurface(game_Border_Fin,NULL,screen,NULL);
		
		SDL_Flip(screen);
//		SDL_Delay(5000);
	}

}
