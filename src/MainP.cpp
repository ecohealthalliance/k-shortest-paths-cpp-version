/************************************************************************/
/* $Id: MainP.cpp 65 2010-09-08 06:48:36Z yan.qi.asu $                                                                 */
/************************************************************************/

#include <limits>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include "GraphElements.h"
#include "Graph.h"
#include "DijkstraShortestPathAlg.h"
#include "YenTopKShortestPathsAlg.h"

using namespace std;


void testDijkstraGraph()
{
	Graph* my_graph_pt = new Graph("data/test_500");
	DijkstraShortestPathAlg shortest_path_alg(my_graph_pt);
	BasePath* result =
		shortest_path_alg.get_shortest_path(
			my_graph_pt->get_vertex(46), my_graph_pt->get_vertex(13));
	result->PrintOut(cout);
}

void testYenAlg()
{
	Graph my_graph("data/test_500");

	YenTopKShortestPathsAlg yenAlg(my_graph, my_graph.get_vertex(886),
		my_graph.get_vertex(188));

	int i=0;
	while(i <= 100)
	{
		++i;
		yenAlg.next()->PrintOut(cout);
	}
}

int main(...)
{
	cout << "Welcome to the real world!" << endl;

	testDijkstraGraph();
}
