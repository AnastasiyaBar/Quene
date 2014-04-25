namespace Nastya
{
	typedef int Data;
	class Quene
	{
	public:
		Quene();
		~Quene();
		void enquene(Data dt);
		void dequene();
		Data onHead();
		Data onTail();
		bool isEmpty();
		void clear();
	private:
		struct Node
		{
			Data datum;
			Node* link;
		}*head,*tail;
	};
}