#include <iostream>
#include "conn_info_manager.h"
using namespace std;

int main()
{
	conn_info_manager m;
	m.init(5);
	conn_info * temp =m.get_free_node();
	//cout<<temp->sockfd<<endl;
	m.getInfo();
	m.give_back_node(temp);
	m.getInfo();

	conn_info *t[6]; //=(conn_info *)malloc(6 * sizeof(conn_info));

	for(int i=0;i<6;i++)
	{
		t[i] = m.get_free_node();
		m.getInfo();
	}
	for(int i=0;i<6;i++)
	{
		m.give_back_node(t[i]);
		m.getInfo();
		t[i] = NULL;
	}
}