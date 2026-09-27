#pragma once

#include <memory>
#include <string>

#include "aim/core/playlist_manager.h"
#include "aim/ui/ui_screen.h"

namespace aim {

void PlaylistRunComponent(const std::string& id, std::shared_ptr<PlaylistRun> playlist_run);

class PlaylistComponent {
 public:
  virtual ~PlaylistComponent() {}

  struct Options {
    bool is_playlist_screen = true;
  };
  virtual void Show(std::shared_ptr<PlaylistRun> run, Options options) = 0;
};

std::unique_ptr<PlaylistComponent> CreatePlaylistComponent();

class PlaylistListComponent {
 public:
  virtual ~PlaylistListComponent() {}

  virtual void Show() = 0;
};

std::unique_ptr<PlaylistListComponent> CreatePlaylistListComponent(UiScreen* screen);

}  // namespace aim
