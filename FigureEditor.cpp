#include "FigureEditor.h"
string FigureEditor::get_info(Figure* figure) {
	string msg = figure->description();
	msg += ".\nPerimiter: " + to_string(figure->caculatePerimeter());
	msg += ".\nSquare: " + to_string(figure->caculateSquare());
	return msg;
}
