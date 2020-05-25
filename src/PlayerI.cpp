#include "../include/PlayerI.h"
#include <iostream>
#include <string>

using namespace std;

PlayerI::PlayerI(){
    this->vlc = libvlc_new(0, nullptr);
    this->count = 0;
}

string PlayerI::play(const string& trackName, const Ice::Current&){

    string url = "http://192.168.1.24:8080/"; // Replace the IP by your IP or localhost
    string encode = "#transcode{acodec=mp3,ab=128,channels=2,samplerate=44100}:http{dst=:8080/";

    string filePath = "tracks/" + trackName + ".mp3";

    string mount = trackName + to_string(this->count) + ".mp3";
    string tmpUrl = url + mount;
    string tmpEncode = encode + mount + "}";
    libvlc_vlm_add_broadcast(this->vlc, tmpUrl.c_str(), filePath.c_str(), tmpEncode.c_str(), 0, nullptr, true, false);
    libvlc_vlm_play_media(this->vlc,tmpUrl.c_str());

    this->count += 1;
    cout << "Start playing " + filePath + " at this url: " + tmpUrl << endl;

    return tmpUrl;
}
