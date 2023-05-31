#include"FigureEditor.h"
#include"triangle.h"
int main() {
	Figure* f1 = new Figure();
	Figure* triangle1 = new Triangle(3,4);

	cout << FigureEditor::get_info(f1) << endl;
	cout << FigureEditor::get_info(triangle1) << endl;

	return 0;
}