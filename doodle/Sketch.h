#pragma once
#include "setting.h"
#include <SFML/Audio.hpp>

class sketch
{
public:
    int DIGIPENSCREEN   { 1 };
    int TITLESCREEN     { 2 };
    int GAMESCREEN      { 3 };
    int STAGECLEAR      { 4 };
    int GAMEOVERSCREEN  { 5 };
    int WINSCREEN{ 6 };
    int COPYRIGHTSCREEN{ 7 };

    int scene = DIGIPENSCREEN;

public:
    void setup();
    void draw();
    void initial();

    void digipen();
    void title();
    void playGame();
    void clear();
    void over();
    void win();
    void drawBG();
    void drawLose();
    void drawWin();
    void copyright();

public:
    int level = 1;
    std::string timerNumb;
    int level1_timer = 800;
    int level2_timer = 800;
    int level3_timer = 500;
    int level4_timer = 500;
    int level5_timer = 300;
    int logoTimer = 200;

private:
    std::vector<sf::SoundBuffer> SoundBuffers{};
    std::vector<sf::Sound> Sounds{};
    sf::Music BGM{};

private:
    void LoadSound(const std::string& file_path);
    void PlaySound();
};
