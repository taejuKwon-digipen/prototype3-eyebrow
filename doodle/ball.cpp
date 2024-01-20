#include "setting.h"

using namespace doodle;

void ball::drawblueBalls() {
	push_settings();
	set_fill_color(HexColor(blueBallColor));
	for (int i = 0; i < blueBalls_V.size(); i++) {
		draw_ellipse(blueBalls_V[i].x, blueBalls_V[i].y, blueBalls_V[i].size);
	}
	pop_settings();
}

void ball::drawgreenBalls() {
	push_settings();
	set_fill_color(HexColor(greenBallColor));
	for (int i = 0; i < greenBalls_V.size(); i++) {
		draw_ellipse(greenBalls_V[i].x, greenBalls_V[i].y, greenBalls_V[i].size);
	}
	pop_settings();
}

void ball::drawyellowBalls() {
	push_settings();
	set_fill_color(HexColor(yellowBallColor));
	for (int i = 0; i < yellowBalls_V.size(); i++) {
		draw_ellipse(yellowBalls_V[i].x, yellowBalls_V[i].y, yellowBalls_V[i].size);
	}
	pop_settings();
}

void ball::drawredBalls() {
	push_settings();
	set_fill_color(HexColor(redBallColor));
	for (int i = 0; i < redBalls_V.size(); i++) {
		draw_ellipse(redBalls_V[i].x, redBalls_V[i].y, redBalls_V[i].size);
	}
	pop_settings();
}