#include "setting.h"

using namespace doodle;
using namespace std;

void eyebrow::showMain() {
	push_settings();
	for (int i = 0; i < (int)brow_V.size(); i++) {
		drawBrows(brow_V[i]);
	}
	pop_settings();
	drawingImage();
}

void eyebrow::drawBrows(eyebrows browname) {
	set_fill_color(HexColor(eyebrowColor));
	draw_rectangle(browname.x, browname.y, browname.xsize, browname.ysize);
	push_settings();
	pop_settings();
}

void eyebrow::drawingImage() {

	static const Image jubrow1{ "asset/brow1.png" };
	static const Image jubrow2{ "asset/brow2.png" };

	draw_image(jubrow1, brow1_xPos, brow1_yPos, 40, 20);
	draw_image(jubrow2, brow2_xPos, brow2_yPos, 40, 20);
}