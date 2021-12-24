#ifndef SINGLY_LINKED_LIST_NODE_H_
#define SINGLY_LINKED_LIST_NODE_H_

#include <memory>

template<typename T>
class Singly_Linked_List_Node
{

public:

	Singly_Linked_List_Node(T value = T(), std::shared_ptr<Singly_Linked_List_Node<T>> next = nullptr)
	{
		value_ = value;
		next_ = next;
	}

	~Singly_Linked_List_Node()
	{
		;
	}

	void SetValue(T value)
	{
		value_ = value;
	}

	T GetValue()
	{
		return value_;
	}

	void SetNext(std::shared_ptr<Singly_Linked_List_Node<T>> next)
	{
		next_ = next;
	}

	std::shared_ptr<Singly_Linked_List_Node<T>> GetNext()
	{
		return next_;
	};

private:

	T value_;
	std::shared_ptr<Singly_Linked_List_Node<T>> next_;

};

#endif //SINGLY_LINKED_LIST_NODE_H_