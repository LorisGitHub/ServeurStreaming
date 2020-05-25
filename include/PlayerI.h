#ifndef PLAYERI_H
#define PLAYERI_H

#include "Player.h"
#include <Ice/Ice.h>
#include <vlc/vlc.h>

using namespace std;

class PlayerI: public Player::VlcPlayer {
    libvlc_instance_t* vlc;
    int count;

    public:
        PlayerI();
        virtual string play(const string& trackName, const Ice::Current&);
};

#endif