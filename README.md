# amiko_linux
AmiKo/CoMed for Linux done with wxWidgets and C++, 64 bit.

Prerequisites:

- GTK 3

        $ sudo apt install libgtk-3-dev

- [SQlite](https://www.sqlite.org/) is built-in into the application, so there is no dependency on system libraries.

## Build Script
1. Download and install latest wxWidgets from source using build script.
2. Build script also has to download all data files, see OSX version.
3. Build script has to build executables named `AmiKo` and `CoMed`.

## macOS Installer
1. Create a .pkg Installer for macOS that installs all the DB files in to `~/.AmiKo` or `~/.Comed`
