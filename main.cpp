#include "OldAudioAdapter.h" //
#include "OldAudioPlayer.h"

void playSong(AudioPlayer* player, const std::string& song) {
    player->playAudio(song);
}

int main() {
    auto legacyPlayer = std::make_shared<OldAudioPlayer>();
    OldAudioAdapter adapter(legacyPlayer);

    playSong(&adapter, "song1.mp3");

    return 0;
}

