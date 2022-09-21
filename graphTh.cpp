#include <bits/stdc++.h>
using namespace std;

int main()
{
    // we use graph to store relational data set

    // difference between tree and graph
    // every tree is graph but not every graph is tree
    /*
    tree is a acyclic ds              graph can be acyclic or cyclic
    */

    // node, edge
    // bidirectional direction
    // non weighted edge, weighted edge
    // 4 types of graph
    //1. bi->nw
    //2. d->nw
    //3. bi->w
    //4. d->w
    
    // complete graph -> every node is connected to every node (e = (n(n-1))/2)
    // number of edges
    // 1. dense graph (if the val of edge is close to complete graph edge)
    // 2. sporse graph

    // Adjacency Matrix 
    // the number represent the connection from one node to another
    // it's a non weighted graph
    /*
      a b c d e
    a 0 0 1 0 0
    b 0 0 0 0 0
    c 0     1 0
    d     0
    e     1
    */
   // it's a weighted graph
    /*
      a b c d e
    a 0 6 5 3 0
    b 6 0 2 0 0
    c 0     1 0
    d     0
    e     1
    */

    //Adjacency List
    // it's an array of list
    // creating graph with list is better to optimize some algorithom
    // non weighted graph
    /*
    a  b c
    b 
    c  d b
    d  a e
    e  c
    */
    // weighted graph
    // list pair<char,int>
    /*
    a  b,6 c,5
    b  a,6 c,2
    c  b,2 a,5 e,1
    d  
    e  
    */

    // dfs bfs
    // spaning tree
    // we will create a tree without any loop
    /* 
    spaning tree is a tree genarated from a graph which cover all the nodes
    and create a asyclic tree
    */
    // bfs spaning tree



    return 0;
}