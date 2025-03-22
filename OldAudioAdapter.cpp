#include "OldAudioAdapter.h"

OldAudioAdapter::OldAudioAdapter(std::shared_ptr<OldAudioPlayer> player)
    : oldPlayer(std::move(player)) {}

void OldAudioAdapter::playAudio(const std::string& filename) {
    std::cout << "[Adapter] Adapting to legacy player...\n";
    oldPlayer->playMp3File(filename);
}
