#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_

#include "singly_linked_list_node.h"

template<typename T>
class Singly_Linked_List
{

public: 

	Singly_Linked_List(std::shared_ptr<Singly_Linked_List_Node<T>> root = nullptr)
	{
		root_ = root;
	}

	~Singly_Linked_List()
	{
		;
	}

	void AddNode(std::shared_ptr<Singly_Linked_List_Node<T>> node)
	{
		if(root_ == nullptr)
		{
			root_ = node;
			return;
		}

		auto tmp = root_;
		while(tmp->GetNext() != nullptr)
		{
			tmp = tmp->GetNext();
		}

		tmp->SetNext(node);
	}

	void AddNode(T value)
	{
		AddNode(std::make_shared<Singly_Linked_List_Node<T>>(value));
	}

	void RemoveNode(T value)
	{
		if(root_ == nullptr)
		{
			return;
		}

		auto current_node = root_;
		auto previous_node = root_;

		while(current_node->GetNext() != nullptr)
		{
			if(current_node->GetValue() == value)
			{
				previous_node->SetNext(current_node->GetNext());
				break;
			}

			previous_node = current_node;
			current_node = current_node->GetNext();
		}
	}
	
	void RemoveNodes(T value)
	{
		if(root_ == nullptr)
		{
			return;
		}

		auto current_node = root_;
		auto previous_node = root_;

		while(current_node->GetNext() != nullptr)
		{
			if(current_node->GetValue() == value)
			{
				previous_node->SetNext(current_node->GetNext());
				break;
			}

			previous_node = current_node;
			current_node = current_node->GetNext();
		}
	}

private:

	std::shared_ptr<Singly_Linked_List_Node<T>> root_;

};



#endif //SINGLY_LINKED_LIST_H_