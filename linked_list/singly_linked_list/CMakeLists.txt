
ADD_LIBRARY( SINGLY_LINKED_LIST_SHARED SHARED
				singly_linked_list_node.h
				singly_linked_list.h
				singly_linked_list.cpp

)

TARGET_INCLUDE_DIRECTORIES( SINGLY_LINKED_LIST_SHARED PUBLIC 
							.
)

ADD_LIBRARY( SINGLY_LINKED_LIST_STATIC STATIC
				singly_linked_list_node.h
				singly_linked_list.h
				singly_linked_list.cpp
)

TARGET_INCLUDE_DIRECTORIES( SINGLY_LINKED_LIST_STATIC PUBLIC 
							.
)

ADD_EXECUTABLE( SINGLY_LINKED_LIST_TEST_EXE 
				singly_linked_list_node.h
				singly_linked_list.h
				singly_linked_list.cpp
				test.cpp
)