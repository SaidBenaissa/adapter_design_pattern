// // Interface for the AudioPlayer class
#ifndef AUDIO_PLAYER_H
#define AUDIO_PLAYER_H

#include <string>

class AudioPlayer {
public:
    virtual void playAudio(const std::string& filename) = 0; // Pure virtual function, must be implemented by derived classes meaning it is an interface and abstract class
    virtual ~AudioPlayer() = default; // Virtual destructor to ensure derived classes are destructed properly when deleted through a pointer to the base class
};

#endif // AUDIO_PLAYER_H
