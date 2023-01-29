#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	double Pen, Pencil, Eraser, Ruler, Highlighter, Marker, Notes, Book, Notebook, Paper;
	Pen = 1;
	Pencil = 1;
	Eraser = 1;
	Ruler = 1;
	Highlighter = 2;
	Marker = 2;
	Notes = 1;
	Book = 3;
	Notebook = 2;
	Paper = 1;

	double QPen, QPencil, QEraser, QRuler, QHighlighter, QMarker, QNotes, QBook, QNotebook, QPaper;

	double result;
	double total;

	cout << "=========================Enter the quantity of each product you purchase ==========================" << endl;

	cout << "Pen : ";
	cin >> QPen;

	cout << "Pencil : ";
	cin >> QPencil;

	cout << "Eraser : ";
	cin >> QEraser;

	cout << "Ruler : ";
	cin >> QRuler;

	cout << "Highlighter : ";
	cin >> QHighlighter;

	cout << "Marker : ";
	cin >> QMarker;

	cout << "Notes : ";
	cin >> QNotes;

	cout << "Book : ";
	cin >> QBook;

	cout << "Notebook : ";
	cin >> QNotebook;

	cout << "Paper : ";
	cin >> QPaper;

	cout << "\n";
	cout << "\n";

	result = QPen * Pen + QPencil * Pencil + QEraser * Eraser + QRuler * Ruler + QHighlighter * Highlighter + QMarker * Marker + QNotes * Notes + QBook * Book + QNotebook * Notebook + QPaper * Paper;

	double discount1 = result / 100 * 5;
	double discount2 = result / 100 * 10;
	double discount3 = result / 100 * 15;
	double discount4 = result / 100 * 20;

	if (result <= 10)
	{
		cout << "::::::::::: You got discounted : " << discount1 << ":::::::::::" << endl;
		cout << "===========Your result is $" << result - discount1 << "===========";
	}
	else if (10 < result >= 50)
	{
		cout << "::::::::::: You got discounted : " << discount2 << ":::::::::::" << endl;
		cout << "============Your total is $" << result - discount2 << "=============";
	}
	else if (50 < result >= 100)
	{
		cout << "::::::::::: You got discounted : " << discount3 << ":::::::::::" << endl;
		cout << "============Your total is $" << result - discount3 << "============";
	}
	else
	{
		cout << "::::::::::: You got discounted : " << discount4 << ":::::::::::" << endl;
		cout << "===========Your total is $" << result - discount4 << "==========";
	}

	return 0;
}
