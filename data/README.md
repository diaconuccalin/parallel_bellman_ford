# Input data format
- Line 1: n m
  - n - integer - the number of nodes in the graph
  - m - integer - the number of edges in the graph
  - The two numbers are separated by a single blank space
- Line 2: n strings
  - The strings represent the names of the nodes
  - Strings are separated by single blank space
  - Strings can only contain small characters of the English alphabet
  - The strings have a fixed length of 4 characters
    - There are 26 characters in the English alphabet, so we obtain 26^4 456,976 unique possible names 
- Line 3..m+3: node_1 node_2 weight
  - node_1, node_2 - string - two different strings from the list given on line 2
  - weight - int (even negative) - the weight of the edge between node_1 and node_2
