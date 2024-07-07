/*
-----------------------------
sfxr - sound effect generator
-----------------------------
   by DrPetter, 2007-12-14
    developed for LD48#10
-----------------------------
*/

#include <stdbool.h>
#include <stdio.h>

#include <SDL.h>

/*
			case 0: // pickup/coin
			case 1: // laser/shoot
			case 2: // explosion
			case 3: // powerup
			case 4: // hit/hurt
			case 5: // jump
			case 6: // blip/select
			case 7: // thrust
*/

void ResetParams();
void ResetSample(bool restart);
void SelectSample(int i);
void PlaySample();
void SynthSample(int length, float* buffer, FILE* file);

int SDLAudioInit();

int LoadSound(const char* filename);
void PlaySound();
