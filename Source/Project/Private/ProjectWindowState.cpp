#include "ProjectWindowState.h"

FProjectWindowState::FProjectWindowState() {
    this->WindowMode = EWindowsWindowMode::Fullscreen;
    this->MonitorIndex = 0;
    this->bMaximized = false;
}

