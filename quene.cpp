#include <iostream>
#include "quene.h"
using namespace std;
using namespace Nastya;

Quene::Quene()
{
	head=nullptr;
	tail=nullptr;
}

Quene::~Quene()
{
	clear();
}

void Quene::enquene(Data dt)
{
	Node *p=nullptr;
	p=new Node;
	p->datum=dt;
	if (!tail)
	{
		p->link=p;
		tail=p;
		head=p;
		p=nullptr;
	}
	else
	{
		p->link=tail;
		tail=p;
		head->link=p;
		p=nullptr;
	}
}

void Quene::dequene()
{
	if(tail)
	{
		if(tail==head)
		{
			tail->datum=0;
			delete tail;
			tail=nullptr;
			head=nullptr;
		}
		else
		{
			Node *p=nullptr;
			p=new Node;
			p=tail;
			while(p->link!=head)
			{
				p=p->link;
			}
			head=p;
			p=p->link;
			head->link=tail;
			p->datum=0;
			p->link=nullptr;
			delete p;
			p=nullptr;
		}
	}
}

Data Quene::onHead()
{
	if (nullptr==head)
		throw -1;
	return head->datum;
}

Data Quene::onTail()
{
	if (nullptr==tail)
		throw -1;
	return tail->datum;
}

bool Quene::isEmpty()
{
	return tail;
}

void Quene::clear()
{
	while(tail!=nullptr)
		dequene ();
}