#include "Class Header.h"
#include "Functions Header.h"

int main( int argc, char *argv[] ) 
{
	bool quit=false;
	SDL_Surface* screen = NULL;
	SDL_Event event;
	
	SDL_Startup(screen);
	
	while(!quit)//while the user hasnt quit
	{
		while(SDL_PollEvent(&event))//check for events
		{
			switch(event.type == SDL_MOUSEBUTTONDOWN)//if any MB was pressed
			{
				case SDL_BUTTON_LEFT://if the Mb pressed was the LMB
					quit=true;
					break;
			}
			
			if(event.type == SDL_QUIT)//if the user 'x's out
				quit=true;
		}
	}
	
	return 0;
}
