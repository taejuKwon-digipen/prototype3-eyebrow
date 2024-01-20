#include "Setting.h"

using namespace doodle;

int main(void)
try {

    Sketch.setup();

    while (!is_window_closed())
    {
        update_window();
        Sketch.draw();
    }
    return 0;
}
catch (const std::exception& e)
{
    std::cerr << "Error : " << e.what() << '\n';
    return -1;
}

void on_key_released(KeyboardButtons button)
{
    if (button == KeyboardButtons::Escape)
        close_window();

    if (button == KeyboardButtons::E) {
        Sketch.scene++;
    }
    
    if (button == KeyboardButtons::W) {
        Sketch.scene--;
    }

    if (button == KeyboardButtons::M) {
        if (Sketch.scene == 7) {
            Sketch.scene = 2;
        }
    }

    if (button == KeyboardButtons::R) {
        if (Sketch.scene == 5 || Sketch.scene == 6) {
            Sketch.initial();
            Sketch.level = 1;
            Sketch.scene = 2;
        }
    }
}

void on_mouse_released(MouseButtons button) {

    const double x = get_mouse_x(), y = get_mouse_y();

    if (button == MouseButtons::Left) {

        if (Sketch.scene == 2) // TITLESCREEN
        {
            if (x >= -50 && x <= 50 && y >= -175 && y <= -125) {
                Sketch.scene = 3;
            }
            else if (x >= -375 && x <= -345) {
                if (y >= -95 && y <= -65) {
                    Sketch.level = 1;
                }
                else if (y >= -135 && y <= -105) {
                    Sketch.level = 2;
                }
                else if (y >= -175 && y <= -145) {
                    Sketch.level = 3;
                }
                else if (y >= -215 && y <= -185) {
                    Sketch.level = 4;
                }
                else if (y >= -255 && y <= -225) {
                    Sketch.level = 5;
                }
            }

            if (x >= -50 && x <= 50 && y >= -275 && y <= -225) {
                Sketch.scene = 7;
            }
        }

        if (Sketch.scene == 3) {
            for (int i = static_cast<int>(Eyebrow.brow_V.size()) - 1; i >= 0; --i) {

                double minX = Eyebrow.brow_V[i].x - Eyebrow.brow_V[i].xsize / 2;
                double maxX = Eyebrow.brow_V[i].x + Eyebrow.brow_V[i].xsize / 2;
                double minY = Eyebrow.brow_V[i].y - Eyebrow.brow_V[i].ysize / 2;
                double maxY = Eyebrow.brow_V[i].y + Eyebrow.brow_V[i].ysize / 2;

                if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
                    if (i == 0) {
                        Eyebrow.brow1_xPos = { -5000 }, Eyebrow.brow1_yPos = { -5000 };
                    }
                    else if (i == 1) {
                        Eyebrow.brow2_xPos = { -5000 }, Eyebrow.brow2_yPos = { -5000 };
                    }
                    Eyebrow.brow_V.erase(Eyebrow.brow_V.begin() + i);
                    break;
                }
            }

            for (int i = static_cast<int>(Ball.blueBalls_V.size()) - 1; i >= 0; --i) {

                double minX_B = Ball.blueBalls_V[i].x - Ball.blueBalls_V[i].size / 2;
                double maxX_B = Ball.blueBalls_V[i].x + Ball.blueBalls_V[i].size / 2;
                double minY_B = Ball.blueBalls_V[i].y - Ball.blueBalls_V[i].size / 2;
                double maxY_B = Ball.blueBalls_V[i].y + Ball.blueBalls_V[i].size / 2;

                if (x >= minX_B && x <= maxX_B && y >= minY_B && y <= maxY_B) {
                    Ball.blueBalls_V.erase(Ball.blueBalls_V.begin() + i);
                    break;
                }
            }

            for (int i = static_cast<int>(Ball.greenBalls_V.size()) - 1; i >= 0; --i) {

                double minX_B = Ball.greenBalls_V[i].x - Ball.greenBalls_V[i].size / 2;
                double maxX_B = Ball.greenBalls_V[i].x + Ball.greenBalls_V[i].size / 2;
                double minY_B = Ball.greenBalls_V[i].y - Ball.greenBalls_V[i].size / 2;
                double maxY_B = Ball.greenBalls_V[i].y + Ball.greenBalls_V[i].size / 2;

                if (x >= minX_B && x <= maxX_B && y >= minY_B && y <= maxY_B) {
                    Ball.greenBalls_V.erase(Ball.greenBalls_V.begin() + i);
                    break;
                }
            }

            for (int i = static_cast<int>(Ball.yellowBalls_V.size()) - 1; i >= 0; --i) {

                double minX_Y = Ball.yellowBalls_V[i].x - Ball.yellowBalls_V[i].size / 2;
                double maxX_Y = Ball.yellowBalls_V[i].x + Ball.yellowBalls_V[i].size / 2;
                double minY_Y = Ball.yellowBalls_V[i].y - Ball.yellowBalls_V[i].size / 2;
                double maxY_Y = Ball.yellowBalls_V[i].y + Ball.yellowBalls_V[i].size / 2;

                if (x >= minX_Y && x <= maxX_Y && y >= minY_Y && y <= maxY_Y) {
                    Ball.yellowBalls_V.erase(Ball.yellowBalls_V.begin() + i);
                    break;
                }
            }

            for (int i = static_cast<int>(Ball.redBalls_V.size()) - 1; i >= 0; --i) {

                double minX_R = Ball.redBalls_V[i].x - Ball.redBalls_V[i].size / 2;
                double maxX_R = Ball.redBalls_V[i].x + Ball.redBalls_V[i].size / 2;
                double minY_R = Ball.redBalls_V[i].y - Ball.redBalls_V[i].size / 2;
                double maxY_R = Ball.redBalls_V[i].y + Ball.redBalls_V[i].size / 2;

                if (x >= minX_R && x <= maxX_R && y >= minY_R && y <= maxY_R) {
                    Ball.redBalls_V.erase(Ball.redBalls_V.begin() + i);
                    break;
                }
            }
        }
    }
}