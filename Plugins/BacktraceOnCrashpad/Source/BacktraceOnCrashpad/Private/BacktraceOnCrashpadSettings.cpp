#include "BacktraceOnCrashpadSettings.h"

UBacktraceOnCrashpadSettings::UBacktraceOnCrashpadSettings() {
    this->BacktraceURL = TEXT("https://submit.backtrace.io/segaamerica/20bc36ce7aebd1642e2a0883086515dab76356ae2ab7680004c5cf4a74dc8d9a/minidump");
    this->BacktraceToken = TEXT("20bc36ce7aebd1642e2a0883086515dab76356ae2ab7680004c5cf4a74dc8d9a");
    this->CrashpadDatabasePath = TEXT("%APPDATA%/SEGA/SMT5V/Steam/dump");
}
