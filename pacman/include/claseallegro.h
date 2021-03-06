#ifndef CLASEALLEGRO_H
#define CLASEALLEGRO_H
#include <allegro.h>
#include <cstdlib>
#include "escenario.h"

class claseallegro
{

    public:
        MIDI *musica;

        claseallegro(){
            allegro_init();
            install_keyboard();
            set_color_depth(32);
            set_gfx_mode(GFX_AUTODETECT_WINDOWED,1200,510,0,0);
            musica = load_midi("pacman.mid");
            play_midi(musica,0);

        }

        template<class T>

        void pantalla(T mapa_bits){
            blit(mapa_bits.buffer, screen, 0,0,0,0,1200,510);
        }


};

#endif // CLASEALLEGRO_H
