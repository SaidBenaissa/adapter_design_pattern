#ifndef OLD_AUDIO_PLAYER_H
#define OLD_AUDIO_PLAYER_H

#include <iostream>
#include <string>

class OldAudioPlayer {
public:
    void playMp3File(const std::string& filename) {
        std::cout << "[OldAudioPlayer] Playing MP3: " << filename << std::endl;
    }
};

#endif // OLD_AUDIO_PLAYER_H
