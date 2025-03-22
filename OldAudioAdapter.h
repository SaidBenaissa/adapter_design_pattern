#ifndef OLD_AUDIO_ADAPTER_H
#define OLD_AUDIO_ADAPTER_H

#include "AudioPlayer.h"
#include "OldAudioPlayer.h"
#include <memory>

class OldAudioAdapter : public AudioPlayer {
private:
    std::shared_ptr<OldAudioPlayer> oldPlayer; // oldPlayer is a shared pointer to an OldAudioPlayer object

public:
    OldAudioAdapter(std::shared_ptr<OldAudioPlayer> player);
    void playAudio(const std::string& filename) override;
};

#endif // OLD_AUDIO_ADAPTER_H
