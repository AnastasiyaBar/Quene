#include <iostream>
#include <conio.h>
#include "quene.h"
using namespace std;
using namespace Nastya;

void main()
{
	Quene QueneOne;
	Data dt, temp;
	bool flag;
	while (true)
	{
		cout<< "Command:\n e: add element\n d: delete element\n h: get value in the head\n t: get value in the tail\n";
		cout<< " i: check if the queue is empty\n D: delete quene\n q: quit.";
		switch (_getch())
		{
		case 'e': cout << endl << "Enter value: "; cin >> dt; QueneOne.enquene(dt); cout << endl << endl; break;
			case 'd': QueneOne.dequene(); break;
			case 'h': temp=QueneOne.onHead(); cout << endl << endl << temp << endl << endl; break;
			case 't': temp=QueneOne.onTail(); cout << endl << endl << temp << endl << endl; break;
			case 'i': flag=QueneOne.isEmpty(); cout << endl << endl << flag << endl << endl; break;
			case 'D': QueneOne.~Quene(); break;
			case 'q': if (QueneOne.isEmpty())
						{
							QueneOne.~Quene();
						}; return;
		}
	}
}